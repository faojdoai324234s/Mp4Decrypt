#include <fstream>
#include "decryption_processor.h"

int main() {
    std::ifstream videoFile("video.mp4", ios::binary);
    if(videoFile) {
      return 0;
    } else {
      return 1;
    }
    DecryptionProcessor processor = DecryptionProcessor();
    processor.~DecryptionProcessor();
    return 0;
}
