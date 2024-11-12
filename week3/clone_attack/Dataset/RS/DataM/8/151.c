void  duqu (int NNahv4w2O [], int b [], int XaY9Acki, int N) {
    int i;
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
    for (i = (96 - 96); XaY9Acki > i; i = i + 1)
        scanf ("%d", &NNahv4w2O[i]);
    {
        i = 747 - 747;
        while (i < N) {
            scanf ("%d", &b[i]);
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
            i = i + 1;
        };
    };
}

void  paixu (int NNahv4w2O [], int b [], int XaY9Acki, int N) {
    int i = (424 - 424), j = (90 - 90), qtLJ4KVC;
    {
        i = 583 - 583;
        while (XaY9Acki > i) {
            {
                j = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (j < XaY9Acki) {
                    if (NNahv4w2O[j] < NNahv4w2O[i]) {
                        qtLJ4KVC = NNahv4w2O[j];
                        NNahv4w2O[j] = NNahv4w2O[i];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        NNahv4w2O[i] = qtLJ4KVC;
                    }
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; i < N; i = i + 1)
        for (j = i; N > j; j = j + 1) {
            if (b[i] > b[j]) {
                qtLJ4KVC = b[j];
                b[j] = b[i];
                b[i] = qtLJ4KVC;
            };
        };
}

void  O0TOfLZCG4 (int NNahv4w2O [], int b [], int hx58c6qiAf [], int XaY9Acki, int N) {
    int i;
    for (i = 0; XaY9Acki > i; i = i + 1)
        hx58c6qiAf[i] = NNahv4w2O[i];
    {
        i = XaY9Acki;
        while (XaY9Acki +N > i) {
            hx58c6qiAf[i] = b[i - XaY9Acki];
            i = i + 1;
        };
    };
}

void  shuchu (int C [], int XaY9Acki, int N) {
    int i;
    for (i = 0; XaY9Acki +N-(476 - 475) > i; i = i + 1)
        printf ("%d ", C[i]);
    printf ("%d", C[XaY9Acki +N-(867 - 866)]);
}

int main () {
    int a1 [(251 - 151)];
    int a2 [(243 - 143)];
    int a3 [100] = {0};
    int m, n;
    scanf ("%d%d", &m, &n);
    duqu (a1, a2, m, n);
    paixu (a1, a2, m, n);
    O0TOfLZCG4 (a1, a2, a3, m, n);
    shuchu (a3, m, n);
    return 0;
}

