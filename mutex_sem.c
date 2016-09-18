/**
 * 
 */

typedef struct{
	sem_t sem;
}mutex_t;

int mutex_init(mutex_t *lock, mutex_attr* attr);
int mutex_destrou(mutex_t *lock);

int mutex_lock(mutex_t *lock);
int mutex_unlock(mutex_t *lock);

typedef struct{
	mutex_t lock;
	sem_t sem;
	int n_wait;
}cond_t;

int cond_init(cond_t *cond);
int cond_wait(cond_t *cond, mutex_t *mutex_externo);
int cond_signal(cond_t *cond);
int cond_broadcast(cond_t *cond);
