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

  SimpleString(const SimpleString& other)
    :max_size{other.max_size},
      length{other.length},
      buffer{new char[other.max_size]}
  {
    std::strncpy(buffer, other.buffer, max_size);
  }

  SimpleString(SimpleString&& other) noexcept
    : max_size{other.max_size},
        buffer{other.buffer},
        length{other.length}{
      other.length = 0;
      other.buffer = nullptr;
      other.max_size = 0;
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

  SimpleString& operator=(const SimpleString& other){
      if (this == &other) return *this;
      const auto new_buffer = new char[other.max_size];
      delete[] buffer;
      buffer = new_buffer;
      length = other.length;
      max_size = other.max_size;
      std::strncpy(buffer, other.buffer, max_size);
      return *this;
  }

  SimpleString& operator=(SimpleString&& other) noexcept {
      if (this == &other) return *this;
      delete[] buffer;
      buffer = other.buffer;
      length = other.length;
      max_size = other.max_size;
      other.buffer = nullptr;
      other.length = 0;
      other.max_size = 0;
      return *this;
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
