int compare (const  void  *p, const  void  *q) {
    int *t1 = (int *) p;
    int *t2 = (int *) q;
    return *t2 - *t1;
}

int main () {
    int n;
    int i;
    int j;
    int k;
    int t_max;
    int t_min;
    int q [1000];
    int t [1000];
    int win;
    int loss;
    while (1) {
        scanf ("%d", &n);
        if (!(0 != n))
            return 0;
        win = loss = 0;
        for (i = 0; n > i; i++) {
            scanf ("%d", &t[i]);
        }
        for (i = 0; n > i; i++) {
            scanf ("%d", &q[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        qsort (t, n, sizeof (int), compare);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        qsort (q, n, sizeof (int), compare);
        t_max = 0;
        t_min = n - 1;
        for (i = 0; n > i; i++) {
            if (t[t_max] > q[i]) {
                win++;
                t_max = t_max + 1;
            }
            else if (q[i] > t[t_max]) {
                t_min--;
                loss++;
            }
            else if (!(q[i] != t[t_max])) {
                for (j = i + 1, k = t_max + 1; n > j; j++, k++) {
                    if (t[k] <= q[j] && t[t_max] > q[j])
                        break;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int temp = 0;
                            while (temp < 10) {
                                printf ("%d\n", temp);
                                temp = temp + 1;
                                if (temp == 9)
                                    break;
                            }
                        }
                    };
                }
                if (j < n) {
                    if (t[t_min] < q[i])
                        loss++;
                    t_min--;
                }
                else
                    t_max++;
            };
        }
        printf ("%d\n", 200 * (win - loss));
    }
    return 0;
}

