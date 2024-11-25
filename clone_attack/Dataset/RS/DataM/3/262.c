int bj (const  void  *x, const  void  *y) {
    if (*(int*) x > *(int*) y)
        return (754 - 753);
    if (*(int*) y > *(int*) x)
        return -(646 - 645);
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
    if (*(int*) x == *(int*) y)
        return 0;
}

int main () {
    int zRv0Np3E;
    int lADWCKIlf;
    int k;
    int i;
    int wTRBzY7;
    int a [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    zRv0Np3E = 0;
    scanf ("%d%d", &lADWCKIlf, &k);
    for (i = 0; i < lADWCKIlf; i++)
        scanf ("%d", &a[i]);
    qsort (a, lADWCKIlf, (588 - 584), bj);
    for (i = 0; i < lADWCKIlf - 1; i++) {
        {
            wTRBzY7 = lADWCKIlf - 1;
            while (wTRBzY7 > i) {
                if (a[i] + a[wTRBzY7] < k)
                    break;
                else {
                    if (a[i] + a[wTRBzY7] == k) {
                        zRv0Np3E = 1;
                        break;
                    };
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                wTRBzY7--;
            };
        }
        if (zRv0Np3E == 1)
            break;
    }
    if (zRv0Np3E == 1)
        ;
    else
        ;
}

