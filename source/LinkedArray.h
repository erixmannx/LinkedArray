#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_H
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_LINKEDARRAY_H

#include "Comparator.h"
#include "Level.h"

namespace com { namespace github { namespace erixmannx { namespace LinkedArray {

template<typename T>
class LinkedArray {
	public:
		const static int BLOCK_SIZE = 10;

		LinkedArray();
		~LinkedArray();

		// append elem to the end of this collection
		bool add(const T elem);

		// insert elem at index
		void add(const int index, const T data);
		void set(const int index, const T data);

		T get(const int index) const;

	protected:
		void print() const;

		Level<T>* m_rootLevel;
		Comparator<T>* m_comparator;
		long m_count;
};

} } } } // namespace

#endif
