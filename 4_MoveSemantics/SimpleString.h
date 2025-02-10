#ifndef SIMPLESTRING_H
#define SIMPLESTRING_H

#include <stdexcept>
#include <cstdio>
#include <cstring>


struct SimpleString {
  SimpleString(size_t max_size): max_size{max_size}, length{}{
      if (max_size == 0) {
        throw std::runtime_error("Max size must be atleast 1");
      }
      buffer = new char[max_size];
      buffer[0] = 0;
  }

  void print(const char* tag){
    printf("%s: %s\n", tag, buffer);
  }

  bool append_line(const char* x){
    const auto x_len = strlen(x);
    if (length + x_len + 2 > max_size) return false;
    std::strncpy(buffer + length, x, max_size - length);
    length += x_len;
    buffer[length++] = '\n';
    buffer[length] = 0;
    return true;
  }


  ~SimpleString() {
    delete[] buffer;
  }

  private:
    size_t max_size;
    char* buffer;
    size_t length;
};




#endif //SIMPLESTRING_H
