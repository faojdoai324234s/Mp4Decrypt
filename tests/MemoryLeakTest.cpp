#include <fstream>
#include "decryption_processor.h"

int main() {
    std::ifstream videoFile("../tests/video.mp4", std::ifstream::binary);
    if(!videoFile) {
      return 1;
    }
    DecryptionProcessor processor = DecryptionProcessor();
    processor.decrypt(videoFile., );
    processor.~DecryptionProcessor();
    videoFile.close();
    return 0;
}
