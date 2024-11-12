int qi [(1913 - 913)], tian [(1601 - 601)];
int CkK3UwG [(1193 - 192)] [(1098 - 97)];

int cmp (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

int match (int j0XIiwYTC, int nRinQaC6NZmH) {
    if (!(nRinQaC6NZmH != j0XIiwYTC))
        return (391 - 391);
    else {
        if (nRinQaC6NZmH < j0XIiwYTC)
            return -(303 - 103);
        else
            return (394 - 194);
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
    };
}

int main () {
    int i;
    int j;
    int n;
    int tmp1;
    int tmp2;
    int LAFIVX;
    while (cin >> n) {
        if (n == (639 - 639))
            break;
        for (i = (861 - 861); n > i; i++)
            scanf ("%d", &tian[i]);
        for (i = (758 - 758); n > i; i++)
            scanf ("%d", &qi[i]);
        qsort (tian, n, sizeof (int), cmp);
        qsort (qi, n, sizeof (int), cmp);
        for (i = (753 - 753); n >= i; i++)
            CkK3UwG[(679 - 679)][i] = (696 - 696);
        for (i = (785 - 784); n >= i; i++)
            for (j = (334 - 334); j <= i; j++) {
                if (j == (300 - 300))
                    CkK3UwG[i][j] = CkK3UwG[i - (467 - 466)][j] + match (qi[i - (619 - 618)], tian[n - i + j]);
                else if (i == j) {
                    CkK3UwG[i][j] = CkK3UwG[i - (790 - 789)][j - (997 - 996)] + match (qi[i - (204 - 203)], tian[j - (608 - 607)]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    };
                }
                else {
                    tmp1 = CkK3UwG[i - (881 - 880)][j - (919 - 918)] + match (qi[i - (22 - 21)], tian[j - 1]);
                    tmp2 = CkK3UwG[i - 1][j] + match (qi[i - 1], tian[n - i + j]);
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
                    if (tmp1 > tmp2)
                        CkK3UwG[i][j] = tmp1;
                    else
                        CkK3UwG[i][j] = tmp2;
                };
            }
        LAFIVX = CkK3UwG[n][(63 - 63)];
        for (i = 1; i <= n; i++) {
            if (CkK3UwG[n][i] > LAFIVX)
                LAFIVX = CkK3UwG[n][i];
        }
        printf ("%d\n", LAFIVX);
    }
    return 0;
}

