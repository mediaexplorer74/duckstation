#pragma once
#include "../dep/minizip/unzip.h"

namespace MinizipHelpers {

unzFile OpenUnzMemoryFile(const void* memory, size_t memory_size);
unzFile OpenUnzFile(const char* filename);

} // namespace MinizipHelpers