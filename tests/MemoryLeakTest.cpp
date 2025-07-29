#include <fstream>
#include "decryption_processor.h"

int main() {
    std::ifstream videoFile("../tests/video.mp4", std::ifstream::binary);
    if(!videoFile) {
      return 1;
    }
    videoFile.close();
    
    for (uint64_t i = 0; i < 10; i++) {
        std::ifstream videoFile("../tests/video.mp4", std::ifstream::binary);
        const std::size_t size = videoFile.rdbuf()->pubseekoff(0,videoFile.end, videoFile.in);
        char* buffer = new char[size];
        videoFile.rdbuf()->sgetn(buffer, size);
        videoFile.close();
        DecryptionProcessor processor = DecryptionProcessor();
        processor.decrypt(reinterpret_cast<uint8_t*>(buffer), size, "eb676abbcb345e96bbcf616630f1a3da", "100b6c20940f779a4589152b57d2dacb");
        processor.~DecryptionProcessor();
        delete[] buffer;
    }
    
    return 0;
}
