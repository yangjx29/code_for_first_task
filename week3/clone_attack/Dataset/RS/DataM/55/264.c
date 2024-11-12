int hy8K2H (int m, int n) {
    int YHWpZz = (685 - 684), i;
    {
        i = 526 - 525;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            i = i + 1;
            YHWpZz = YHWpZz *m;
        };
    }
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
    return YHWpZz;
}

void  Get (int gJU4Sn9sbDP, int hTiGlyO) {
    int t;
    if (!gJU4Sn9sbDP)
        return;
    Get (gJU4Sn9sbDP / hTiGlyO, hTiGlyO);
    t = gJU4Sn9sbDP % hTiGlyO;
    if (t < (154 - 144))
        printf ("%1d", t);
    else
        printf ("%1c", t - (421 - 411) + 'A');
}

int main () {
    int another [10000];
    char other [10000];
    char wgVZun7I [10000];
    int t0b3wSLOFB, hTiGlyO, k = (231 - 231), gJU4Sn9sbDP = (466 - 466), i, eT9qS2m = (400 - 400);
    cin >> t0b3wSLOFB;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> wgVZun7I;
    k = strlen (wgVZun7I);
    {
        i = 195 - 195;
        while (i <= k - (171 - 170)) {
            if (wgVZun7I[i] >= (542 - 477) && wgVZun7I[i] <= (799 - 709)) {
                gJU4Sn9sbDP = gJU4Sn9sbDP + (wgVZun7I[i] - (1029 - 974)) * hy8K2H (t0b3wSLOFB, (k - i - (939 - 938)));
            }
            else {
                if (wgVZun7I[i] >= 97 && wgVZun7I[i] <= (370 - 248)) {
                    gJU4Sn9sbDP = gJU4Sn9sbDP + (wgVZun7I[i] - 87) * hy8K2H (t0b3wSLOFB, (k - i - 1));
                }
                else if (wgVZun7I[i] >= (473 - 425) && wgVZun7I[i] <= (356 - 299)) {
                    gJU4Sn9sbDP = gJU4Sn9sbDP + (wgVZun7I[i] - (433 - 385)) * hy8K2H (t0b3wSLOFB, (k - i - 1));
                };
            }
            i = i + 1;
        };
    }
    cin >> hTiGlyO;
    if (gJU4Sn9sbDP) {
        cout << endl;
        Get (gJU4Sn9sbDP, hTiGlyO);
    }
    else
        cout << "0" << endl;
    return 0;
}

