#include <cstdlib>

int main() {
    void* memory = std::malloc(8000000000);    // 8 GB
    return memory ? 0 : 1;
}
