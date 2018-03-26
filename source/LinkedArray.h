#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_H
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_H

#include "Comparator.h"

namespace com { namespace github { namespace erixmannx { namespace LinkedArray {

template<typename T>
class LinkedArray {
	public:
		const static int CHUNK_SIZE = 10;

		LinkedArray();

		// append elem to the end of this collection
		bool add(const T elem);

		// insert elem at index
		void add(const int index, const T elem);

	protected:
		void print() const;

		Comparator<T>* m_comparator;
};

} } } } // namespace

#endif
