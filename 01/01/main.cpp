/*
#include <iostream>

int main() {
    std::cout << "Système nominal. C++ opérationnel sur macOS." << std::endl;
    return 0;
}
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <chrono>

int main() {
    const int width = 80;
    const int height = 22;
    float A = 0.0f; // Angle de rotation sur l'axe X
    float B = 0.0f; // Angle de rotation sur l'axe Z

    std::cout << "\x1b[2J"; // Nettoyage initial du terminal

    while (true) {
        std::vector<char> buffer(width * height, ' ');
        std::vector<float> zbuffer(width * height, 0.0f);

        for (float j = 0; j < 6.28f; j += 0.07f) {
            for (float i = 0; i < 6.28f; i += 0.02f) {
                float sin_i = std::sin(i), cos_i = std::cos(i);
                float sin_j = std::sin(j), cos_j = std::cos(j);
                float sin_A = std::sin(A), cos_A = std::cos(A);
                float sin_B = std::sin(B), cos_B = std::cos(B);

                float circle_x = cos_j + 2.0f;
                float inverse_z = 1.0f / (sin_i * circle_x * sin_A + sin_j * cos_A + 5.0f);
                float t = sin_i * circle_x * cos_A - sin_j * sin_A;

                int x = static_cast<int>(width / 2.0f + 30.0f * inverse_z * (cos_i * circle_x * cos_B - t * sin_B));
                int y = static_cast<int>(height / 2.0f + 15.0f * inverse_z * (cos_i * circle_x * sin_B + t * cos_B));

                int luminance = static_cast<int>(8.0f * ((sin_j * sin_A - sin_i * cos_j * cos_A) * cos_B - sin_i * cos_j * sin_A - sin_j * cos_A - cos_i * cos_j * sin_B));
                int index = x + width * y;

                if (height > y && y > 0 && width > x && x > 0 && inverse_z > zbuffer[index]) {
                    zbuffer[index] = inverse_z;
                    buffer[index] = ".,-~:;=!*#$@"[luminance > 0 ? luminance : 0];
                }
            }
        }

        std::cout << "\x1b[H"; // Repositionne le curseur à l'origine
        for (int k = 0; k < width * height; k++) {
            std::cout << (k % width ? buffer[k] : '\n');
        }

        A += 0.04f;
        B += 0.02f;
        std::this_thread::sleep_for(std::chrono::milliseconds(30));
    }
    return 0;
}
