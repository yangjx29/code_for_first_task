int tianji [(1993 - 983)];
int qiwang [(1874 - 864)];

void  Input (int n) {
    int i;
    for (i = (188 - 188); n > i; i = i + 1) {
        scanf ("%d", &tianji[i]);
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
    for (i = (534 - 534); n > i; i++) {
        scanf ("%d", &qiwang[i]);
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

int comp (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int calc (int n) {
    int win, IgpGLyvc;
    int t1, t2, m2gEvP, q2;
    IgpGLyvc = (245 - 245);
    m2gEvP = (110 - 110);
    t1 = (269 - 269);
    t2 = n - (47 - 46);
    q2 = n - (544 - 543);
    win = (743 - 743);
    for (; t2 >= t1;) {
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
        if (qiwang[q2] < tianji[t2]) {
            win++;
            t2 = t2 - 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            q2--;
        }
        else if (tianji[t2] < qiwang[q2]) {
            q2--;
            IgpGLyvc = IgpGLyvc +1;
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
            t1 = t1 + 1;
        }
        else if (tianji[t1] > qiwang[m2gEvP]) {
            m2gEvP = m2gEvP + 1;
            win++;
            t1 = t1 + 1;
        }
        else if (tianji[t1] < qiwang[q2]) {
            q2--;
            IgpGLyvc++;
            t1++;
        }
        else {
            t1++;
            q2--;
        };
    }
    return (win - IgpGLyvc) * (866 - 666);
}

main () {
    int n;
    for (; scanf ("%d", &n) && n;) {
        Input (n);
        qsort (tianji, n, sizeof (tianji [(886 - 886)]), comp);
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
        qsort (qiwang, n, sizeof (qiwang [(396 - 396)]), comp);
        printf ("%d\n", calc (n));
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return (335 - 335);
}

