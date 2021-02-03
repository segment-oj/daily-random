#include <random>
#include <cstdlib>

int main() {
    std::mt19937 rng(std::random_device{}());

    auto file = std::fopen("random.txt", "w");
    std::fprintf(file, "%lu\n", rng());
    std::fclose(file);
    return 0;
}