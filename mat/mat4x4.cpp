#include "mat4x4.hpp"

template<typename T>
T mat4x4<T>::operator [](int index) const {
	return entries[index];
}