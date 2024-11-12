int main () {
    char a [(1149 - 898)];
    char b [(510 - 259)];
    gets (a);
    int G9qgHFKb;
    G9qgHFKb = strlen (a);
    int OrvS1PIbzZg;
    OrvS1PIbzZg = G9qgHFKb;
    gets (b);
    int len2;
    len2 = strlen (b);
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
    int p [251] = {(402 - 402)};
    int q [251] = {(551 - 551)};
    int ans [251] = {0};
    int t;
    if (G9qgHFKb < len2)
        OrvS1PIbzZg = len2;
    {
        int f7zU5LI = 0, j = G9qgHFKb -(354 - 353);
        while (G9qgHFKb > f7zU5LI) {
            p[f7zU5LI] = a[j] - '0';
            j--;
            f7zU5LI = f7zU5LI + 1;
        };
    }
    {
        int f7zU5LI = 0, j = len2 - 1;
        while (f7zU5LI < len2) {
            q[f7zU5LI] = b[j] - '0';
            j--;
            f7zU5LI = f7zU5LI + 1;
        };
    }
    {
        int f7zU5LI = 0;
        while (OrvS1PIbzZg > f7zU5LI) {
            ans[f7zU5LI] = p[f7zU5LI] + q[f7zU5LI];
            f7zU5LI = f7zU5LI + 1;
        };
    }
    {
        int f7zU5LI = 0;
        while (OrvS1PIbzZg > f7zU5LI) {
            if (10 <= ans[f7zU5LI]) {
                ans[f7zU5LI] = ans[f7zU5LI] - 10;
                ans[f7zU5LI + 1] = ans[f7zU5LI + 1] + 1;
            }
            f7zU5LI++;
        };
    }
    {
        t = OrvS1PIbzZg;
        while (0 <= t) {
            if (ans[t] != 0)
                break;
            t--;
        };
    }
    if (t == -1)
        cout << 0 << endl;
    else {
        int f7zU5LI = t;
        while (f7zU5LI >= 0) {
            cout << ans[f7zU5LI];
            f7zU5LI--;
        };
    }
    cout << endl;
    return 0;
}

