#include "exception.h"
#include <iostream>
#include <cstdio>

Exception::Exception(size_t numCode, const char* msg) : m_last_err(numCode),
                                                  m_msg(msg),
                                                  std::exception()
{

}

const char* Exception::what() const noexcept {
  return m_msg;
}
