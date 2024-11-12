void  Dj1VKw3U (int i, int n, char hXCDzr5BVqf [] [(600 - 100)]) {
    int x;
    int YreaVz;
    x = (206 - 206);
    YreaVz = (471 - 471);
    if ((617 - 616) < i)
        Dj1VKw3U (i - (232 - 231), n, hXCDzr5BVqf);
    {
        x = 531 - 531;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > x) {
            {
                YreaVz = 952 - 952;
                while (n > YreaVz) {
                    if (!('@' != hXCDzr5BVqf[x][YreaVz])) {
                        if (!('.' != hXCDzr5BVqf[x - (937 - 936)][YreaVz]))
                            hXCDzr5BVqf[x - (891 - 890)][YreaVz] = '$';
                        if (hXCDzr5BVqf[x + (401 - 400)][YreaVz] == '.')
                            hXCDzr5BVqf[x + (448 - 447)][YreaVz] = '$';
                        if (!('.' != hXCDzr5BVqf[x][YreaVz -1]))
                            hXCDzr5BVqf[x][YreaVz -1] = '$';
                        if (!('.' != hXCDzr5BVqf[x][YreaVz +1]))
                            hXCDzr5BVqf[x][YreaVz +1] = '$';
                    }
                    YreaVz = YreaVz +1;
                };
            }
            x++;
        };
    }
    {
        x = 639 - 639;
        while (n > x) {
            {
                YreaVz = 420 - 420;
                while (n > YreaVz) {
                    if (hXCDzr5BVqf[x][YreaVz] == '$')
                        hXCDzr5BVqf[x][YreaVz] = '@';
                    YreaVz = YreaVz +1;
                };
            }
            x++;
        };
    };
}

int main () {
    char hXCDzr5BVqf [(562 - 62)] [(1146 - 646)] = {0};
    char RG2uYUczjC;
    int n;
    int lvNE23x;
    int x;
    int YreaVz;
    int zLNh0CqJc;
    n = (257 - 257);
    lvNE23x = (904 - 904);
    x = 0;
    YreaVz = 0;
    zLNh0CqJc = 0;
    cin >> n;
    RG2uYUczjC = getchar ();
    for (x = 0; x < n; x = x + 1) {
        for (YreaVz = 0;; YreaVz = YreaVz +1) {
            hXCDzr5BVqf[x][YreaVz] = getchar ();
            if (hXCDzr5BVqf[x][YreaVz] == '\n')
                break;
        };
    }
    cin >> lvNE23x;
    Dj1VKw3U (lvNE23x - 1, n, hXCDzr5BVqf);
    for (x = 0; x < n; x = x + 1) {
        YreaVz = 0;
        while (YreaVz < n) {
            if (hXCDzr5BVqf[x][YreaVz] == '@')
                zLNh0CqJc++;
            YreaVz++;
        };
    }
    cout << zLNh0CqJc;
    return 0;
}

