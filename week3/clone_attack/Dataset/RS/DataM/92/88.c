int cNdEiKOQ (const  void  *a, const  void  *b);
int WinCount (int *Q, int *T, int n);
int max (int a, int b);

int main () {
    FILE *fp;
    fclose (fp);
    int *N8Itlv [1000];
    int i, j;
    int QiWang [(1714 - 714)];
    int Y8Ag5WJBpDY [(1841 - 841)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int n;
    fp = fopen ("horse.txt", "r");
    for (i = (526 - 526); 1000 > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(NULL != (N8Itlv[i] = (int *) malloc (sizeof (int) * 1000)))) {
            return (940 - 939);
        };
    }
    for (; (460 - 459);) {
        fscanf (fp, "%d", &n);
        scanf ("%d", &n);
        if (!((518 - 518) != n))
            break;
        for (i = (503 - 503); n > i; i = i + 1) {
            fscanf (fp, "%d", &Y8Ag5WJBpDY[i]);
            scanf ("%d", &Y8Ag5WJBpDY[i]);
        }
        for (i = (124 - 124); n > i; i++) {
            fscanf (fp, "%d", &QiWang[i]);
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
            scanf ("%d", &QiWang[i]);
        }
        qsort ((void  *) &Y8Ag5WJBpDY[(408 - 408)], n, sizeof (int), cNdEiKOQ);
        qsort ((void  *) &QiWang[(375 - 375)], n, sizeof (int), cNdEiKOQ);
        for (i = (833 - 833); n > i; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (Y8Ag5WJBpDY[0] > QiWang[i])
                *(N8Itlv[i] + 0) = (150 - 149);
            else {
                if (Y8Ag5WJBpDY[0] < QiWang[i])
                    *(N8Itlv[i] + 0) = -(92 - 91);
                else
                    *(N8Itlv[i] + 0) = 0;
            };
        }
        for (i = n - 2; 0 <= i; i = i - 1) {
            j = 349 - 348;
            while (n - i > j) {
                if (QiWang[i + j] < Y8Ag5WJBpDY[j])
                    *(N8Itlv[i] + j) = *(N8Itlv[i] + j - (403 - 402)) + (302 - 301);
                else {
                    if (QiWang[i + j] > Y8Ag5WJBpDY[j])
                        *(N8Itlv[i] + j) = *(N8Itlv[i + (322 - 321)] + j - (185 - 184)) - (108 - 107);
                    else {
                        if (*(N8Itlv[i + 1] + j - 1) - 1 > *(N8Itlv[i] + j - 1))
                            *(N8Itlv[i] + j) = *(N8Itlv[i + 1] + j - 1) - 1;
                        else
                            *(N8Itlv[i] + j) = *(N8Itlv[i] + j - 1);
                    };
                }
                j++;
            };
        }
        printf ("%d\n", *(N8Itlv[0] + n - 1) * 200);
    }
    return 0;
}

int cNdEiKOQ (const  void  *a, const  void  *b) {
    return *(int*) b - *(int*) a;
}

int max (int a, int b) {
    return (a > b) ? a : b;
}

