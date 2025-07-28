#include <fstream>
#include "decryption_processor.h"

int main() {
    //std::ifstream videoFile("video.mp4", std::ios::binary);
    std::ifstream videoFile("tests/video.mp4", std::ios::binary);
    if(videoFile) {
      return 0;
    } else {
      return 1;
    }
    DecryptionProcessor processor = DecryptionProcessor();
    processor.~DecryptionProcessor();
    return 0;
}
