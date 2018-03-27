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
			m_count(0),
			m_next(NULL),
			// TODO:
			m_dealloc(NULL) {
			m_block = new T[m_blockSize];			
		}

		~Level() {
			if (m_dealloc != NULL) {
				for (int x = 0; x < m_count; x++) {
					m_dealloc->dealloc(m_block[x]);
				}
			}

			delete [] m_block;
		}

		bool full() const {
			return (m_count == m_blockSize);
		}

		int getCount() const {
			return m_count;
		}

		T get(const int location) const {
			// translate to local locality 
			int locality = location % m_blockSize;

			return m_block[locality];
		}

		void set(const int location, const T data) {
			// translate to local locality 
			int locality = location % m_blockSize;

			m_block[locality] = data;
		}

		Level<T>* getNextLevel() const {
			return m_next;
		}

	private:
		int m_blockSize;
		int m_count;

		Level<T>* m_next;
		T* m_block;

		Deallocator<T>* m_dealloc;
};

} } } } // namespace

#endif
