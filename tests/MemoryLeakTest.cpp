#include <cstdlib>

int main() {
    void* memory = std::malloc(4000000000);    // 4 GB
    return memory ? 0 : 1;
}
