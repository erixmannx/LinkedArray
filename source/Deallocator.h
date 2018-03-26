#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_DEALLOCATOR_H
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_DEALLOCATOR_H

namespace com { namespace github { namespace erixmannx { namespace LinkedArray {

template<typename T>
class Deallocator {
	public:
		virtual void dealloc(T x) const = 0;
};

} } } }

#endif
