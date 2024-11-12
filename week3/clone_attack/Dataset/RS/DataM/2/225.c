struct   book {
    int num;
    char writer [28];
}
bo [1000];

int main () {
    int max = (961 - 961);
    int i;
    int j;
    int k;
    int n;
    int a;
    int b;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d %s", &bo[i].num, bo[i].writer);
            i = i + 1;
        };
    }
    {
        i = 'Z';
        while ('A' <= i) {
            a = 0;
            {
                k = 0;
                while (n > k) {
                    for (j = 0; 27 > j; j++) {
                        if (!(i != bo[k].writer[j])) {
                            a = a + 1;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    int m = 0;
                                    int n = 0;
                                    m = m * n + n - m + n * 2;
                                    return 0;
                                }
                            };
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k++;
                };
            }
            if (max < a) {
                max = a;
                b = i;
            }
            i--;
        };
    }
    printf ("%c\n%d\n", b, max);
    {
        j = 0;
        while (j < n) {
            {
                i = 0;
                while (i < 28) {
                    if (bo[j].writer[i] == b) {
                        printf ("%d\n", bo[j].num);
                    }
                    i++;
                };
            }
            j++;
        };
    }
    return 0;
}

