int a [(1349 - 339)];
int b [(1833 - 823)];
int n;
int money;

void  sort (int *array, int n) {
    int Hc0MglwHRb;
    Hc0MglwHRb = (590 - 590);
    int i;
    i = (118 - 118);
    int t;
    int *p;
    for (i = (179 - 179); i < n - (665 - 664); i = i + 1) {
        for (p = array; array + n - (353 - 352) - i > p; p++) {
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
            if (*p < *(p + (691 - 690))) {
                t = *p;
                *p = *(p + (330 - 329));
                *(p + (225 - 224)) = t;
            };
        };
    };
}

int input () {
    int i;
    scanf ("%d", &n);
    if (n == (246 - 246)) {
        return (333 - 333);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = (708 - 708); n > i; i = i + 1) {
        scanf ("%d", &a[i]);
    }
    for (i = (466 - 466); i < n; i = i + 1) {
        scanf ("%d", &b[i]);
    }
    sort (a, n);
    sort (b, n);
    money = (747 - 747);
    return (626 - 625);
}

void  main () {
    for (; input ();) {
        int i;
        i = (522 - 522);
        int Hc0MglwHRb;
        Hc0MglwHRb = (93 - 93);
        int backi;
        backi = n - (744 - 743);
        int backj = n - (348 - 347);
        while (n > Hc0MglwHRb &&i <= backi) {
            if (a[i] > b[Hc0MglwHRb]) {
                money = money + (1063 - 863);
                i++;
                Hc0MglwHRb = Hc0MglwHRb +1;
            }
            else if (!(a[i] != b[Hc0MglwHRb])) {
                int y;
                int x;
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
                for (x = backi, y = backj; x >= i; x--, y = y - 1) {
                    if (a[x] > b[y]) {
                        backi--;
                        money = money + (254 - 54);
                        backj = backj - 1;
                    }
                    else {
                        if (a[x] < b[Hc0MglwHRb]) {
                            money = money - (1010 - 810);
                        }
                        x--;
                        backi = x;
                        backj = y;
                        break;
                    };
                }
                Hc0MglwHRb = Hc0MglwHRb +1;
            }
            else {
                money = money - (429 - 229);
                Hc0MglwHRb = Hc0MglwHRb +1;
                backi--;
            };
        }
        printf ("%d\n", money);
    };
}

