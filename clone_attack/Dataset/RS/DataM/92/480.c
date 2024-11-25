int myfunc (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int max (int a, int b) {
    return a > b ? a : b;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int i;
    int MAQpqcCN;
    int n;
    int q [1000];
    int t [2000];
    int EUhzlHP3;
    int tmp;
    for (; 1;) {
        scanf ("%d", &n);
        if (n == 0)
            break;
        for (i = 0; n > i; i = i + 1)
            scanf ("%d", t + i);
        for (i = 0; i < n; i++)
            scanf ("%d", q + i);
        qsort (t, n, sizeof (int), myfunc);
        qsort (q, n, sizeof (int), myfunc);
        memcpy (t + n, t, n);
        EUhzlHP3 = -0xFFFFFFF;
        for (MAQpqcCN = 0; MAQpqcCN < n; MAQpqcCN = MAQpqcCN +1) {
            tmp = 0;
            for (i = 0; i < n; i++) {
                if (t[MAQpqcCN +i] < q[i])
                    tmp -= 200;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (t[MAQpqcCN +i] > q[i])
                    tmp += 200;
            }
            EUhzlHP3 = max (EUhzlHP3, tmp);
        }
        printf ("%d\n", EUhzlHP3);
    }
    return 0;
}

