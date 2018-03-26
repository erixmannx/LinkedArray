#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_CXX
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_CXX

#include "LinkedArray.h"
#include "Comparator.h"

using namespace com::github::erixmannx::LinkedArray;

template<typename T>
LinkedArray<T>::LinkedArray() {
	m_comparator = new DefaultComparator<T>();
}

template<typename T>
bool LinkedArray<T>::add(const T elem) {
	// TODO:
	return true;
}

template<typename T>
void LinkedArray<T>::add(const int index, const T elem) {
	// TODO:
}

// move implementation to header to remove this requirement
template class LinkedArray<int>;
#endif
