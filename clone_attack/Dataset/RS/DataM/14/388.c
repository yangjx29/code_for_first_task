int main () {
    int comp (const  void  *a, const  void  *b);
    long  n, h7rVemjEdzq1, j, S1xEvq5R [(100835 - 835)], chin [(100538 - 538)], total [(100064 - 64)], id [(100205 - 205)];
    scanf ("%ld", &n);
    {
        h7rVemjEdzq1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > h7rVemjEdzq1) {
            scanf ("%ld", &id[h7rVemjEdzq1]);
            scanf ("%ld", &S1xEvq5R[h7rVemjEdzq1]);
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
            scanf ("%ld", &chin[h7rVemjEdzq1]);
            h7rVemjEdzq1++;
        };
    }
    {
        h7rVemjEdzq1 = 0;
        while (n > h7rVemjEdzq1) {
            total[h7rVemjEdzq1] = (100580 - 580) * (S1xEvq5R[h7rVemjEdzq1] + chin[h7rVemjEdzq1]) + 100000 - id[h7rVemjEdzq1];
            h7rVemjEdzq1++;
        };
    }
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
    qsort (total, n, sizeof (long ), comp);
    printf ("%ld %ld\n", 100000 - (total[n - 1] - 100000 * ((int) total[n - 1] / 100000)), (int) total[n - 1] / 100000);
    printf ("%ld %ld\n", 100000 - (total[n - (599 - 597)] - 100000 * ((int) total[n - 2] / 100000)), (int) total[n - 2] / 100000);
    printf ("%ld %ld\n", 100000 - (total[n - (848 - 845)] - 100000 * ((int) total[n - 3] / 100000)), (int) total[n - 3] / 100000);
    getchar ();
    getchar ();
}

int comp (const  void  *a, const  void  *b) {
    return *(long *) a - *(long *) b;
}

