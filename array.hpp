#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

template <typename value_type, int N>
Array<value_type, N>::Array() {

}

template <typename value_type, int N>
Array<value_type, N>::~Array() {

}

template <typename value_type, int N>
std::size_t Array<value_type, N>::size() const {
  return N;
}


template <typename value_type, int N>
bool Array<value_type, N>::empty() const {
  if (N == 0)
    return true;
  return false;
}

template <typename value_type, int N>
value_type& Array<value_type, N>::operator [](const int pos) {
  if (pos < 0 || pos >= N)
    throw Exception(OUT_OF_BOUNDS, "\nError []: out of bounds\n");
  return m_data[pos];
}


template <typename value_type, int N>
const value_type& Array<value_type, N>::operator [](const int pos) const {
  if (pos < 0 || pos >= N)
    throw Exception(OUT_OF_BOUNDS, "\nError []: out of bounds\n");
  return m_data[pos];
}

template <typename value_type, int N>
value_type& Array<value_type, N>::front() {
  if (size() == 0)
    throw Exception(UNDEFINE_BEHAVIOR, "\nError front(). Array is empty");
  return m_data[0];
}


template <typename value_type, int N>
const value_type& Array<value_type, N>::front() const {
  if (size() == 0)
    throw Exception(UNDEFINE_BEHAVIOR, " Error front(). Array is empty");
  return m_data[0];
}

template <typename value_type, int N>
value_type& Array<value_type, N>::back() {
  if (size() == 0)
    throw Exception(UNDEFINE_BEHAVIOR, "\nError back(). Array is empty");
  return m_data[size() - 1];
}


template <typename value_type, int N>
const value_type& Array<value_type, N>::back() const {
  if (size() == 0)
    throw Exception(UNDEFINE_BEHAVIOR, "\nError back(). Array is empty");
  return m_data[size() - 1];
}

template <typename value_type, int N>
void Array<value_type, N>::fill(const value_type value) {
  for (std::size_t i = 0; i < size(); i++)
    m_data[i] = value;
}

template <typename value_type, int N>
void Array<value_type, N>::swap(Array<value_type, N>& other) {
  std::swap(m_data, other.m_data);
}

#endif
