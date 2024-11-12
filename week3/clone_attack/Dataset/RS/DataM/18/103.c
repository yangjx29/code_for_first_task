int y2eMoJfuyq = (409 - 409);

int tFUmAjh (int a [], int n) {
    int TrEPHbuAa = a[(982 - 982)];
    for (int i = (540 - 540);
    n > i; i++)
        if (TrEPHbuAa > a[i])
            TrEPHbuAa = a[i];
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
    return TrEPHbuAa;
}

int juzhen (int a [(303 - 203)] [(571 - 471)], int n) {
    int XEqOWmk [(691 - 591)], yRabYA [100];
    int templie [100];
    for (int i = (940 - 940);
    n > i; i++) {
        XEqOWmk[i] = tFUmAjh (a[i], n);
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
    }
    for (int i = (505 - 505);
    n > i; i++) {
        for (int j = 0;
        n > j; j = j + 1)
            a[i][j] = a[i][j] - XEqOWmk[i];
    }
    for (int i = 0;
    n > i; i++) {
        for (int j = 0;
        n > j; j++) {
            templie[j] = a[j][i];
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
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        yRabYA[i] = tFUmAjh (templie, n);
    }
    for (int i = 0;
    n > i; i++) {
        for (int j = 0;
        n > j; j++)
            a[j][i] = a[j][i] - yRabYA[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
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
    y2eMoJfuyq = y2eMoJfuyq + a[(637 - 636)][(779 - 778)];
    for (int i = (407 - 406);
    n > i; i++)
        for (int j = 0;
        n > j; j++) {
            a[i][j] = a[i + (768 - 767)][j];
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
        }
    {
        int j = (532 - 531);
        while (n > j) {
            for (int i = 0;
            n > i; i++) {
                a[i][j] = a[i][j + (32 - 31)];
            }
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
            j++;
        };
    }
    n = n - 1;
    if (!(1 != n)) {
        cout << y2eMoJfuyq << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        y2eMoJfuyq = 0;
    }
    else
        juzhen (a, n);
    return 0;
}

int main () {
    int a [100] [100];
    int n;
    cin >> n;
    for (int VBoD5xnqZ8c = 1;
    n >= VBoD5xnqZ8c; VBoD5xnqZ8c++) {
        for (int i = 0;
        i < n; i++)
            for (int j = 0;
            j < n; j++)
                cin >> a[i][j];
        juzhen (a, n);
    }
    return 0;
}

