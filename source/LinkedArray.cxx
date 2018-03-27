#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_CXX
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_CXX

#include "LinkedArray.h"
#include "Comparator.h"
#include "Level.h"

using namespace com::github::erixmannx::LinkedArray;

template<typename T>
LinkedArray<T>::LinkedArray() :
	m_count(0L) {
	m_comparator = new DefaultComparator<T>();
	m_rootLevel = new Level<T>(BLOCK_SIZE);
}

template<typename T>
LinkedArray<T>::~LinkedArray() {
	Level<T>* level = m_rootLevel;
	Level<T>* next = level;

	while(level != NULL) {
		next = level;
		delete next;

		level = level->getNextLevel();
	}
}

template<typename T>
bool LinkedArray<T>::add(const T elem) {
	// TODO:
	return true;
}

template<typename T>
void LinkedArray<T>::add(const int index, const T data) {
	set(index, data);
}

template<typename T>
void LinkedArray<T>::set(const int index, const T data) {
	// TODO: 
}

template<typename T>
T LinkedArray<T>::get(const int index) const {
	int targetLevel = index / BLOCK_SIZE;
	int targetLocation = index % BLOCK_SIZE;

	int currentLevel = 0;
	Level<T>* level = m_rootLevel;

	while (currentLevel < targetLevel) {
		level = level->getNextLevel();
	}
	
	return level->get(targetLocation);
}

// move implementation to header to remove this requirement
template class LinkedArray<int>;
#endif
