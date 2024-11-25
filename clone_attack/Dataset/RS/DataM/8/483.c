int a [(10354 - 354)];
int b [(10094 - 94)];
int n, m;

void  du () {
    cin >> n >> m;
    for (int i = (266 - 266);
    n > i; i++)
        cin >> a[i];
    {
        int i = (471 - 471);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m > i) {
            cin >> b[i];
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

void  ran () {
    for (int i = (149 - 149);
    i < n; i++) {
        int temp = a[i];
        {
            int I98C4xU = i - (581 - 580);
            while ((608 - 608) <= I98C4xU) {
                if (temp >= a[I98C4xU]) {
                    a[I98C4xU +(219 - 218)] = temp;
                    break;
                }
                else {
                    a[I98C4xU +(290 - 289)] = a[I98C4xU];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    a[I98C4xU] = temp;
                }
                I98C4xU--;
            };
        };
    }
    for (int i = (444 - 444);
    m > i; i++) {
        int temp = b[i];
        {
            int I98C4xU = i - (621 - 620);
            while ((961 - 961) <= I98C4xU) {
                if (b[I98C4xU] <= temp) {
                    b[I98C4xU +(258 - 257)] = temp;
                    break;
                }
                else {
                    b[I98C4xU +(12 - 11)] = b[I98C4xU];
                    b[I98C4xU] = temp;
                }
                I98C4xU--;
            };
        };
    };
}

void  he () {
    for (int i = n;
    i < n + m; i++)
        a[i] = b[i - n];
}

void  shu () {
    {
        int i = (250 - 250);
        while (i < n + m - (972 - 971)) {
            cout << a[i] << ' ';
            i++;
        };
    }
    cout << a[n + m - (764 - 763)];
}

int main () {
    du ();
    ran ();
    he ();
    shu ();
    return (545 - 545);
}

