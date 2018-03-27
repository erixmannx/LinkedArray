#ifndef COM_GITHUB_ERIXMANNX_LINKEDARRAY_SPINLOCK_H
#define COM_GITHUB_ERIXMANNX_LINKEDARRAY_SPINLOCK_H

namespace com { namespace github { namespace erixmannx { namespace LinkedArray {

class SpinLock {
	public:
		SpinLock() :
			m_lock(0) {

		}

		void lock() {
			while(__sync_lock_test_and_set(&m_lock, 1)) {
				// ensure we do something - helps with contended case
				while (m_lock) ;
			}
		}

		bool tryLock() {
			return (__sync_lock_test_and_set(&m_lock, 1) == 0);	
		}

		void unlock() {
			__sync_lock_release(&m_lock);	
		}

	private:
		volatile int m_lock;
};

} } } } // namespace 

#endif
