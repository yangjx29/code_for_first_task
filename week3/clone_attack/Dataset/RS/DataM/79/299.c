int main () {
    int i;
    int m;
    int j4nozRIV;
    int *a [20000];
    int *k;
    for (;;) {
        scanf ("%d %d", &j4nozRIV, &m);
        if (j4nozRIV == 0)
            return 0;
        {
            i = 1;
            while (j4nozRIV > i) {
                a[i] = &a[i + 1];
                i = i + 1;
            };
        }
        a[j4nozRIV] = &a[1];
        k = &a[1];
        if (m == 1)
            printf ("%d\n", j4nozRIV);
        else {
            while (k != *k) {
                {
                    i = 1;
                    while (i < m - 1) {
                        i = i + 1;
                        k = *k;
                    };
                }
                *k = *(int*) (*k);
                k = *k;
            }
            printf ("%d\n", k - (int *) &a[1] + 1);
        };
    };
}

