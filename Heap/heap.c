#include <stdio.h>

#define SIZE_HEAP 1024
int heap[SIZE_HEAP];
int n = 0;

void shift_down(int i)
{
    int ti, flag = 0;
    while (i*2 <= n && flag == 0) {
        if (heap[i] < heap[i*2]) {
            ti = i;
        } else {
            ti = i * 2;
        }
        if (i*2+1 <= n && heap[ti] > heap[i*2+1]) {
            ti = i*2 + 1;
        }
        if (i != ti) {
            int tmp = heap[i];
            heap[i] = heap[ti];
            heap[ti] = tmp;
            i = ti;
        } else {
            flag = 1;
        }
    }
}

int delete_max()
{
    int t = heap[1];
    heap[1] = heap[n];
    n--;
    shift_down(1);

    return t;
}

void init_heap()
{
    for (int i = n/2;i >= 1;--i) {
        shift_down(i);
    }
}


int main()
{
    scanf("%d", &n);
    int tn = n;
    for (int i = 1;i <= n;++i) {
        scanf("%d", &heap[i]);
    }

    init_heap();
    for (int i = 1;i <= tn;++i) {
        printf("%d ", delete_max());
    }

    return 0;
}
