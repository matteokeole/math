#include "mat3x3.hpp"

template<typename T>
mat3x3<T>::mat3x3() : entries() {}

template<typename T>
T& mat3x3<T>::operator [](int index) {
	return entries[index];
}

template<typename T>
inline std::ostream& operator <<(std::ostream& stream, mat3x3<T>& mat) {
	return stream
		<< mat[0] << " " << mat[1] << " " << mat[2] << "\n"
		<< mat[3] << " " << mat[4] << " " << mat[5] << "\n"
		<< mat[6] << " " << mat[7] << " " << mat[8];
}