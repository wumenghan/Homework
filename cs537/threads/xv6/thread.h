// Mutual exclusion lock.
struct lock_t {
  uint locked;       // Is the lock held?
};

void lock_acquire(struct lock_t *lock);
void lock_release(struct lock_t *lock);
void lock_init(struct lock_t *lock);
int  lock_holding(struct lock_t *lock);
int  thread_create(void *(*start_routine)(void*), void *arg);