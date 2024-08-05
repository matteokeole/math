#include "mat4x4.hpp"

template<typename T>
mat4x4<T>::mat4x4() : entries() {}

template<typename T>
T& mat4x4<T>::operator [](int index) {
	return entries[index];
}

template<typename T>
inline std::ostream& operator <<(std::ostream& stream, mat4x4<T>& mat) {
	return stream
		<< mat[0] << " " << mat[1] << " " << mat[2] << " " << mat[3] << "\n"
		<< mat[4] << " " << mat[5] << " " << mat[6] << " " << mat[7] << "\n"
		<< mat[8] << " " << mat[9] << " " << mat[10] << " " << mat[11] << "\n"
		<< mat[12] << " " << mat[13] << " " << mat[14] << " " << mat[15];
}