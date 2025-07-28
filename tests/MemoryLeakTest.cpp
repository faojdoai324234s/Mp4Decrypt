#include <cstdlib>

int main() {
    void* memory = std::malloc(32000000000);    // 32 GB
    return memory ? 0 : 1;
}
