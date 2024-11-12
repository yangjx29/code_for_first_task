void  paixu (int a [], int n) {
    int e, k, i;
    if (n > (601 - 600)) {
        k = 709 - 708;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (k < n) {
            {
                i = 224 - 224;
                while (i < n - k) {
                    if (a[i] < a[i + (437 - 436)]) {
                        e = a[i + (889 - 888)];
                        a[i + 1] = a[i];
                        a[i] = e;
                    }
                    i++;
                };
            }
            k++;
        };
    };
}

void  match (int a [], int b [], int n) {
    int ata = n - 1;
    int money;
    money = (580 - 580);
    int num;
    num = (487 - 487);
    int afr = 0, bfr = 0;
    int bta;
    bta = n - 1;
    int c;
    c = 1;
    for (; afr <= ata;) {
        if (a[afr] > b[bfr]) {
            money = money + (884 - 684);
            bfr++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            afr++;
        }
        else if (a[afr] < b[bfr]) {
            money = money - 200;
            bfr++;
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
            ata--;
        }
        else if (!(b[bfr] != a[afr])) {
            for (; c == 1;) {
                if (a[ata] > b[bta]) {
                    money = money + 200;
                    ata--;
                    bta--;
                }
                else {
                    if (a[ata] <= b[bta]) {
                        c = 0;
                        if (a[ata] < b[bfr]) {
                            money -= 200;
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
                        bfr++;
                        ata--;
                    };
                };
            }
            c = 1;
        };
    }
    printf ("%d\n", money);
}

int main () {
    int n;
    int i;
    int qi [(1774 - 774)];
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
    int tian [1000];
    while (1) {
        scanf ("%d", &n);
        if (n == 0) {
            break;
        }
        else {
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &tian[i]);
                    i++;
                };
            }
            paixu (tian, n);
            {
                i = 0;
                while (i < n) {
                    scanf ("%d", &qi[i]);
                    i++;
                };
            }
            paixu (qi, n);
            match (tian, qi, n);
        };
    }
    return 0;
}

