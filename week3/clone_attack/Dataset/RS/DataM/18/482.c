int a [100] [100], sum = (915 - 915);

int minr (int hmHL1ovx, int n) {
    int minn;
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
    minn = a[hmHL1ovx][1];
    {
        i = 1;
        while (i <= n) {
            if (minn >= a[hmHL1ovx][i])
                minn = a[hmHL1ovx][i];
            i++;
        };
    }
    return minn;
}

int minc (int v, int n) {
    int minn;
    int i;
    minn = a[1][v];
    {
        i = 1;
        while (i <= n) {
            if (a[i][v] <= minn)
                minn = a[i][v];
            i++;
        };
    }
    return minn;
}

void  f2 (int n) {
    int hmHL1ovx;
    int v;
    {
        hmHL1ovx = 2;
        while (hmHL1ovx <= n - 1) {
            {
                v = 1;
                while (n >= v) {
                    a[hmHL1ovx][v] = a[hmHL1ovx + 1][v];
                    v = v + 1;
                };
            }
            hmHL1ovx = hmHL1ovx + 1;
        };
    }
    {
        v = 2;
        while (n - 1 >= v) {
            {
                hmHL1ovx = 1;
                while (hmHL1ovx <= n) {
                    a[hmHL1ovx][v] = a[hmHL1ovx][v + 1];
                    hmHL1ovx++;
                };
            }
            v = v + 1;
        };
    }
    return;
}

void  f1 (int n) {
    int hmHL1ovx;
    int v;
    f2 (n);
    if (n == 1) {
        cout << sum << endl;
        return;
    }
    {
        hmHL1ovx = 1;
        while (hmHL1ovx <= n) {
            int N4b0pt7eT5SQ;
            N4b0pt7eT5SQ = minr (hmHL1ovx, n);
            {
                v = 1;
                while (v <= n) {
                    a[hmHL1ovx][v] = a[hmHL1ovx][v] - N4b0pt7eT5SQ;
                    v = v + 1;
                };
            }
            hmHL1ovx++;
        };
    }
    {
        v = 1;
        while (v <= n) {
            int N4b0pt7eT5SQ;
            N4b0pt7eT5SQ = minc (v, n);
            {
                hmHL1ovx = 1;
                while (hmHL1ovx <= n) {
                    a[hmHL1ovx][v] = a[hmHL1ovx][v] - N4b0pt7eT5SQ;
                    hmHL1ovx++;
                };
            }
            v++;
        };
    }
    sum = sum + a[2][2];
    f1 (n - 1);
}

int main () {
    int n;
    int i;
    int hmHL1ovx;
    int v;
    cin >> n;
    {
        i = 1;
        while (i <= n) {
            f1 (n);
            i++;
            {
                hmHL1ovx = 1;
                while (hmHL1ovx <= n) {
                    {
                        v = 1;
                        while (v <= n) {
                            cin >> a[hmHL1ovx][v];
                            v++;
                        };
                    }
                    hmHL1ovx++;
                };
            }
            sum = 0;
        };
    }
    return 0;
}

