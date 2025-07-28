#include <cstdlib>

int main() {
    void* memory = std::malloc(16000000000);    // 16 GB
    return memory ? 0 : 1;
}
