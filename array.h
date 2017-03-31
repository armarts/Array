#ifndef _ARRAY_H_
#define _ARRAY_H_

#include "exception.h"

template <typename T, int N>
class Array {
  public:

    typedef T value_type;

    class Iterator {

      public:

        explicit Iterator(value_type*  ptr) : m_ptr(ptr) {}
        ~Iterator() {}

        value_type& operator*() { return *m_ptr; }
        value_type* operator->() { return m_ptr; }

        void operator++() { ++m_ptr; }
        void operator--() { --m_ptr; }
        bool operator==(const Iterator& other) const { return m_ptr == other.m_ptr; }
        bool operator!=(const Iterator& other) const { return !(*this == other); }

      private:

        value_type* m_ptr;

    };

    Array();
    ~Array();

    Iterator begin() {
      Iterator tmp(m_data);
      return tmp;
    }

    Iterator end() {
      Iterator tmp(m_data + N);
      return tmp;
    }

    // Capacity

    std::size_t size() const;
    bool empty() const;

    // Element Access

    value_type& operator [](const int pos);
    const value_type& operator [](const int pos) const;

    value_type& front();
    const value_type& front() const;

    value_type& back();
    const value_type& back() const;

    // Modifies

    void fill(const value_type value);
    void swap(Array& other);

  private:

    value_type m_data[N];

};

#include "array.hpp"

#endif
