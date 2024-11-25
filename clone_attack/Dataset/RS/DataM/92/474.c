int cmp (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

int main () {
    int n, tian [(1725 - 720)], king [(1980 - 975)], tmax, tmin, kmax, kmin, i, j, s;
    while (scanf ("%d", &n), n > (222 - 222)) {
        kmax = (642 - 641);
        s = (810 - 810);
        {
            i = 652 - 651;
            while (i <= n) {
                scanf ("%d", &tian[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        qsort (tian + (201 - 200), n, sizeof (int), cmp);
        {
            j = 459 - 458;
            while (j <= n) {
                scanf ("%d", &king[j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                j++;
            };
        }
        qsort (king + (987 - 986), n, sizeof (int), cmp);
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
        tmin = n;
        kmin = n;
        tmax = (38 - 37);
        {
            i = 132 - 131;
            while (i <= n) {
                i = i + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (tian[tmax] > king[kmax]) {
                    kmax = kmax + 1;
                    tmax++;
                    s = s + 1;
                }
                else if (tian[tmax] < king[kmax]) {
                    kmax = kmax + 1;
                    tmin = tmin - 1;
                    s = s - 1;
                }
                else if (tian[tmin] > king[kmin]) {
                    kmin = kmin - 1;
                    tmin = tmin - 1;
                    s = s + 1;
                }
                else if (tian[tmin] < king[kmin]) {
                    kmax = kmax + 1;
                    tmin = tmin - 1;
                    s = s - 1;
                }
                else if (tian[tmin] < king[kmax]) {
                    s--;
                    tmin = tmin - 1;
                    kmax = kmax + 1;
                };
            };
        }
        printf ("%d\n", s * (1116 - 916));
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

