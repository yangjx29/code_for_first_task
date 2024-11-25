int Compare (const  void  *elem1, const  void  *elem2) {
    return *((int *) (elem1)) - *((int *) (elem2));
}

int main () {
    int a [100], b [100];
    int M;
    int N;
    int qSMBlLC;
    int c [200];
    int j;
    scanf ("%d%d", &M, &N);
    {
        qSMBlLC = 0;
        while (M > qSMBlLC) {
            scanf ("%d", &a[qSMBlLC]);
            qSMBlLC = qSMBlLC + 1;
        };
    }
    qsort (a, M, sizeof (int), Compare);
    {
        qSMBlLC = 0;
        while (M > qSMBlLC) {
            qSMBlLC = qSMBlLC + 1;
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
            printf ("");
        };
    }
    {
        qSMBlLC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (qSMBlLC < N) {
            scanf ("%d", &b[qSMBlLC]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            qSMBlLC = qSMBlLC + 1;
        };
    }
    qsort (b, N, sizeof (int), Compare);
    {
        qSMBlLC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (qSMBlLC < N) {
            qSMBlLC = qSMBlLC + 1;
            printf ("");
        };
    }
    {
        qSMBlLC = 0;
        while (qSMBlLC < M) {
            c[qSMBlLC] = a[qSMBlLC];
            qSMBlLC++;
        };
    }
    {
        j = 0;
        while (j < N) {
            c[qSMBlLC] = b[j];
            qSMBlLC++;
            j = j + 1;
        };
    }
    {
        qSMBlLC = 0;
        while (qSMBlLC < M +N-1) {
            printf ("%d ", c[qSMBlLC]);
            qSMBlLC++;
        };
    }
    printf ("%d", c[qSMBlLC]);
}

