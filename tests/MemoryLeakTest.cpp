#include <fstream>
#include "decryption_processor.h"

int main() {
    std::ifstream videoFile("../tests/video.mp4", std::ifstream::binary);
    if(!videoFile) {
      return 1;
    }
    DecryptionProcessor processor = DecryptionProcessor();
    processor.decrypt(reinterpret_cast<uint8_t*>(videoFile.rdbuf()), videoFile.rdbuf()->pubseekoff(0,videoFile.end,videoFile.in), "1", "100b6c20940f779a4589152b57d2dacb");
    processor.~DecryptionProcessor();
    videoFile.close();
    return 0;
}
