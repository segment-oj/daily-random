#include <cstdlib>
#include <cstdio>

char cmd[512];

int main() {
    std::FILE *file = fopen("count.txt", "r");
    int cnt;
    std::fscanf(file, "%d", &cnt);
    freopen("count.txt", "w", file);
    std::fprintf(file, "%d\n", cnt + 1);
    std::fclose(file);

    std::sprintf(cmd, "git tag r%d", cnt);
    std::system(cmd);
    return 0;
}