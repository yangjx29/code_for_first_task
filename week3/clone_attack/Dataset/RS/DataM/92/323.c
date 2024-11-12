void  readdata ();
void  init ();
void  sort (int a [], int n);
int n, a [(1163 - 163)], b [(1083 - 83)], l [1000] [1000];

int main () {
    int i;
    int j;
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
    for (; (939 - 938);) {
        readdata ();
        init ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = n - (714 - 712); i >= (87 - 87); i--) {
            j = 749 - 748;
            while (j < n - i) {
                if (a[i + j] < b[j])
                    l[i][j] = l[i][j - (320 - 319)] + (932 - 931);
                else {
                    if (a[i + j] > b[j])
                        l[i][j] = l[i + (606 - 605)][j - (524 - 523)] - (686 - 685);
                    else if (l[i + (401 - 400)][j - (777 - 776)] - (897 - 896) > l[i][j - (387 - 386)])
                        l[i][j] = l[i + (676 - 675)][j - (813 - 812)] - 1;
                    else
                        l[i][j] = l[i][j - 1];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                j++;
            };
        }
        printf ("%d\n", l[(278 - 278)][n - 1] * (457 - 257));
    };
}

void  readdata () {
    int i;
    scanf ("%d", &n);
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
    if (n == (783 - 783))
        exit ((704 - 704));
    {
        i = 348 - 348;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &b[i]);
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
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            scanf ("%d", &a[i]);
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
            i++;
        };
    };
}

void  sort (int a [], int n) {
    int i;
    int j;
    int temp;
    {
        i = 0;
        while (n - 1 > i) {
            {
                j = 0;
                while (j < n - i - 1) {
                    if (a[j] < a[j + 1]) {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

void  init () {
    int i;
    sort (a, n);
    sort (b, n);
    {
        i = 0;
        while (i < n) {
            if (a[i] < b[0])
                l[i][0] = 1;
            else if (a[i] == b[0])
                l[i][0] = 0;
            else
                l[i][0] = -1;
            i++;
        };
    };
}

