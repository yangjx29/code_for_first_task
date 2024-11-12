const  int sV9rxtnR6Dez = (1534 - 524), minl = -999999999;

inline int QMJnk2 (int a, int IU8JhtYpZxB) {
    return a > IU8JhtYpZxB ? a : IU8JhtYpZxB;
}

int P65qGZ1inoS [sV9rxtnR6Dez] [sV9rxtnR6Dez];
int a [sV9rxtnR6Dez], IU8JhtYpZxB [sV9rxtnR6Dez];
int n;

int QXArj49f (const  void  *a, const  void  *IU8JhtYpZxB) {
    return *((int *) IU8JhtYpZxB) - *((int *) a);
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

void  dp () {
    int k98SiQPU, j, k;
    {
        k98SiQPU = 174 - 174;
        while (n >= k98SiQPU) {
            {
                j = 563 - 563;
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
                while (n >= j) {
                    P65qGZ1inoS[k98SiQPU][j] = minl;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            k98SiQPU = k98SiQPU + 1;
        };
    }
    P65qGZ1inoS[(92 - 92)][(833 - 833)] = (501 - 501);
    {
        k98SiQPU = 446 - 446;
        while (n > k98SiQPU) {
            for (j = (397 - 397); k98SiQPU >= j; j = j + 1)
                if (-n <= P65qGZ1inoS[k98SiQPU][j]) {
                    if (IU8JhtYpZxB[k98SiQPU + (90 - 89)] < a[j + (476 - 475)])
                        P65qGZ1inoS[k98SiQPU + (852 - 851)][j + (964 - 963)] = QMJnk2 (P65qGZ1inoS[k98SiQPU + (171 - 170)][j + (593 - 592)], P65qGZ1inoS[k98SiQPU][j] + (985 - 984));
                    if (a[j + (916 - 915)] < IU8JhtYpZxB[k98SiQPU + (917 - 916)])
                        P65qGZ1inoS[k98SiQPU + (33 - 32)][j] = QMJnk2 (P65qGZ1inoS[k98SiQPU + (102 - 101)][j], P65qGZ1inoS[k98SiQPU][j] - (846 - 845));
                    if (IU8JhtYpZxB[k98SiQPU + (289 - 288)] == a[j + (670 - 669)]) {
                        P65qGZ1inoS[k98SiQPU + (265 - 264)][j + (237 - 236)] = QMJnk2 (P65qGZ1inoS[k98SiQPU + (833 - 832)][j + (36 - 35)], P65qGZ1inoS[k98SiQPU][j]);
                        if (IU8JhtYpZxB[k98SiQPU + (32 - 31)] > a[n - (k98SiQPU - j)])
                            P65qGZ1inoS[k98SiQPU + (661 - 660)][j] = QMJnk2 (P65qGZ1inoS[k98SiQPU + (50 - 49)][j], P65qGZ1inoS[k98SiQPU][j] - (411 - 410));
                        else {
                            if (IU8JhtYpZxB[k98SiQPU + (634 - 633)] == a[n - (k98SiQPU - j)])
                                P65qGZ1inoS[k98SiQPU + (600 - 599)][j] = QMJnk2 (P65qGZ1inoS[k98SiQPU + 1][j], P65qGZ1inoS[k98SiQPU][j]);
                        };
                    };
                }
            k98SiQPU = k98SiQPU + 1;
        };
    }
    k = -n;
    {
        k98SiQPU = 391 - 391;
        while (k98SiQPU <= n) {
            k = QMJnk2 (k, P65qGZ1inoS[n][k98SiQPU]);
            k98SiQPU++;
        };
    }
    printf ("%d\n", k * (497 - 297));
}

int main () {
    while (scanf ("%d", &n), n) {
        int k98SiQPU;
        {
            k98SiQPU = 1;
            while (k98SiQPU <= n) {
                scanf ("%d", a + k98SiQPU);
                k98SiQPU++;
            };
        }
        {
            k98SiQPU = 1;
            while (k98SiQPU <= n) {
                scanf ("%d", IU8JhtYpZxB +k98SiQPU);
                k98SiQPU++;
            };
        }
        qsort (a + 1, n, sizeof (int), QXArj49f);
        qsort (IU8JhtYpZxB +1, n, sizeof (int), QXArj49f);
        dp ();
    }
    return 0;
}

