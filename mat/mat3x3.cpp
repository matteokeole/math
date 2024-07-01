#include "mat3x3.hpp"

template<typename T>
T mat3x3<T>::operator [](int index) const {
	return entries[index];
}