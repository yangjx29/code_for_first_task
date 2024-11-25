int main () {
    int g;
    int n;
    int m;
    g = (687 - 687);
    char f91ABOC [100] [100];
    cin >> n;
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
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n - (667 - 666)) {
            {
                int j = 0;
                while (j <= n - (873 - 872)) {
                    cin >> f91ABOC[i][j];
                    if (j == n - 1)
                        cin.get ();
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
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
            i = i + 1;
        };
    }
    cin >> m;
    {
        int vdVonLHOwB = 1;
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
        while (vdVonLHOwB <= m - 1) {
            vdVonLHOwB = vdVonLHOwB + 1;
            {
                int q = 0;
                while (q <= n - 1) {
                    {
                        int I3S5wctK4rj = 0;
                        while (I3S5wctK4rj <= n - 1) {
                            if (f91ABOC[q][I3S5wctK4rj] == '@') {
                                if (f91ABOC[q - 1][I3S5wctK4rj] == '.' && q - 1 >= 0)
                                    f91ABOC[q - 1][I3S5wctK4rj] = '^';
                                if (f91ABOC[q + 1][I3S5wctK4rj] == '.' && q + 1 <= n - 1)
                                    f91ABOC[q + 1][I3S5wctK4rj] = '^';
                                if (f91ABOC[q][I3S5wctK4rj -1] == '.' && I3S5wctK4rj -1 >= 0)
                                    f91ABOC[q][I3S5wctK4rj -1] = '^';
                                if (f91ABOC[q][I3S5wctK4rj +1] == '.' && I3S5wctK4rj +1 <= n - 1)
                                    f91ABOC[q][I3S5wctK4rj +1] = '^';
                            }
                            I3S5wctK4rj++;
                        };
                    }
                    q = q + 1;
                };
            }
            {
                int t = 0;
                while (t <= n - 1) {
                    {
                        int Fnm36br = 0;
                        while (Fnm36br <= n - 1) {
                            if (f91ABOC[t][Fnm36br] == '^')
                                f91ABOC[t][Fnm36br] = '@';
                            Fnm36br = Fnm36br +1;
                        };
                    }
                    t++;
                };
            };
        };
    }
    {
        int kwG5BXe = 0;
        while (kwG5BXe <= n - 1) {
            {
                int aUP9wK7zNmi = 0;
                while (aUP9wK7zNmi <= n - 1) {
                    if (f91ABOC[kwG5BXe][aUP9wK7zNmi] == '@')
                        g = g + 1;
                    aUP9wK7zNmi = aUP9wK7zNmi + 1;
                };
            }
            kwG5BXe++;
        };
    }
    cout << g;
    return 0;
}

