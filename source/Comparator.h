#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_COMPARATOR_H
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_COMPARATOR_H

namespace com { namespace github { namespace erixmannx { namespace LinkedArray {

template<typename T>
class Comparator {
	public:
		virtual int compare(const T left, const T right) const = 0;
};

template<typename T>
class DefaultComparator : public Comparator<T> {
	public:
		virtual int compare(const T left, const T right) const {
			if (left < right) return -1;
			if (left > right) return 1;
			return 0;
		}
};

} } } }

#endif
