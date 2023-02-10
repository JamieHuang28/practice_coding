#include <vector>
#include <stdio.h>
#include <stdarg.h>
#include <iostream>

#define HFSM_LOG(level, ...) record_log(static_cast<int>(level), __VA_ARGS__)

void record_log(const int level, const char *const fmt, ...) {
    std::vector<char> buffer_;
    const size_t  DATA_SIZE = 128;
    buffer_.reserve(DATA_SIZE);
    buffer_.clear();
    size_t steady_timestamp = 0;
    va_list list;
    va_start(list, fmt);
    size_t actual_size =
        vsnprintf(buffer_.data(), DATA_SIZE, fmt, list);
    va_end(list);
    if (actual_size >= DATA_SIZE) {
        //
    }

    // puts(buffer_.data());
    std::cout << buffer_.data() << std::endl;
}

int main(int argc, char const *argv[])
{
    HFSM_LOG(0, "number: %f", 1.23);
    return 0;
}
