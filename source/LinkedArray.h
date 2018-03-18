#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_H
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_H

namespace com { namespace github { namespace erixmannx {

template<typename T>
class LinkedArray {
	public:
		// append elem to the end of this collection
		bool add(T elem);

		// insert elem at index
		void add(int index, T elem);
};

} } } // namespace

#endif
