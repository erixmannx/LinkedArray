#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_LEVEL_H
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_LEVEL_H

#include <cstddef>
#include "Deallocator.h"

namespace com { namespace github { namespace erixmannx { namespace LinkedArray {

template<typename T>
class Level {
	public: 
		Level(int blockSize): 
			m_blockSize(blockSize),
			m_next(NULL),
			// TODO:
			m_dealloc(NULL) {
			m_block = new T[m_blockSize];			
		}

		~Level() {
			if (m_dealloc != NULL) {
				for (int x = 0; x < m_blockSize; x++) {
					m_dealloc->dealloc(m_block[x]);
				}
			}

			delete [] m_block;
		}

	private:
		int m_blockSize;

		Level<T>* m_next;
		T* m_block;

		Deallocator<T>* m_dealloc;
};

} } } } // namespace

#endif
