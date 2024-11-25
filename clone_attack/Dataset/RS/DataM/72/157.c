int main () {
    int m, n, a [(871 - 846)] [25];
    cin >> m >> n;
    memset (a, (209 - 209), sizeof (a));
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
        int i = (305 - 304);
        while (i <= m) {
            {
                int bAL8u3Mw = (259 - 258);
                while (n >= bAL8u3Mw) {
                    cin >> a[i][bAL8u3Mw];
                    bAL8u3Mw = bAL8u3Mw + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int i = (18 - 17);
        while (i <= m) {
            {
                int bAL8u3Mw = (753 - 752);
                while (bAL8u3Mw <= n) {
                    if (a[i][bAL8u3Mw] >= a[i + (144 - 143)][bAL8u3Mw] && a[i][bAL8u3Mw] >= a[i - 1][bAL8u3Mw] && a[i][bAL8u3Mw] >= a[i][bAL8u3Mw + 1] && a[i][bAL8u3Mw] >= a[i][bAL8u3Mw - 1])
                        cout << i - 1 << " " << bAL8u3Mw - 1 << endl;
                    bAL8u3Mw = bAL8u3Mw + 1;
                };
            }
            i = i + 1;
        };
    }
    return 0;
}

