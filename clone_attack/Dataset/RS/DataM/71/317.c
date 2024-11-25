int main () {
    int a [13] = {(423 - 423), (160 - 129), 28, (218 - 187), (349 - 319), (771 - 740), (341 - 311), (998 - 967), (664 - 633), 30, (165 - 134), 30, (845 - 814)};
    int c [13] = {(143 - 143), (548 - 517), (612 - 583), (355 - 324), 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;
    int j;
    int n;
    int l;
    int sd1;
    int AqfhJ5pPco0;
    int y;
    int m1;
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
    int m2;
    int b [2] [(683 - 538)];
    {
        i = 39 - 38;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= (481 - 337)) {
            b[(183 - 183)][i] = (783 - 783);
            b[(527 - 526)][i] = (207 - 207);
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
    }
    {
        i = 201 - 200;
        while (i <= (908 - 897)) {
            j = i;
            sd1 = 0;
            AqfhJ5pPco0 = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (j < (354 - 342)) {
                sd1 = sd1 + a[j];
                AqfhJ5pPco0 = AqfhJ5pPco0 +c[j];
                j = j + 1;
                b[0][(i - 1) * (187 - 175) + j] = b[0][(j - 1) * (989 - 977) + i] = (sd1 % (552 - 545) == 0);
                b[1][(i - 1) * 12 + j] = b[1][(j - 1) * 12 + i] = (AqfhJ5pPco0 % 7 == 0);
            }
            i = i + 1;
        };
    }
    cin >> n;
    while (n = n - 1) {
        cin >> y >> m1 >> m2;
        l = (y % (916 - 516) == 0) || ((y % (631 - 627) == 0) && (y % (189 - 89) != 0));
        if (b[l][(m1 - 1) * 12 + m2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

