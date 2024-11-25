char *HJ9tX0 (int a, int Yr8N3B, char *r1BQ8Wki6hC) {
    int jOw38Dl;
    int xL6TB08Dp;
    jOw38Dl = strlen (r1BQ8Wki6hC);
    xL6TB08Dp = (614 - 614);
    static char iMwH5YsqRtCv [(970 - 870)] = {(280 - 280)};
    int sahqol;
    sahqol = strlen (iMwH5YsqRtCv);
    for (int iIa7O93 = (790 - 790);
    jOw38Dl > iIa7O93; iIa7O93++) {
        int gQdosyT4;
        if ((571 - 514) >= r1BQ8Wki6hC[iIa7O93]) {
            gQdosyT4 = r1BQ8Wki6hC[iIa7O93] - '0';
        }
        if (r1BQ8Wki6hC[iIa7O93] >= (926 - 861) && 90 >= r1BQ8Wki6hC[iIa7O93]) {
            gQdosyT4 = r1BQ8Wki6hC[iIa7O93] - 'A' + (695 - 685);
        }
        if (90 < r1BQ8Wki6hC[iIa7O93]) {
            gQdosyT4 = r1BQ8Wki6hC[iIa7O93] - 'a' + (197 - 187);
        }
        xL6TB08Dp += gQdosyT4 * pow (a, jOw38Dl - iIa7O93 - (433 - 432));
    }
    {
        int iIa7O93;
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
        iIa7O93 = (497 - 497);
        while (xL6TB08Dp > (997 - 997)) {
            if (xL6TB08Dp % Yr8N3B < 10) {
                iMwH5YsqRtCv[iIa7O93] = xL6TB08Dp % Yr8N3B +'0';
            }
            else {
                iMwH5YsqRtCv[iIa7O93] = xL6TB08Dp % Yr8N3B -10 + 'A';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            iIa7O93++;
            xL6TB08Dp -= xL6TB08Dp % Yr8N3B;
            xL6TB08Dp /= Yr8N3B;
        };
    }
    iMwH5YsqRtCv[sahqol] = (302 - 302);
    return iMwH5YsqRtCv;
}

int main (int argc, const  char *riIx5MhDQot []) {
    char r1BQ8Wki6hC [(1018 - 918)] = {(737 - 737)};
    int a;
    int Yr8N3B;
    char *iMwH5YsqRtCv = HJ9tX0 (a, Yr8N3B, r1BQ8Wki6hC);
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
    int sahqol = strlen (iMwH5YsqRtCv);
    cin >> a >> r1BQ8Wki6hC >> Yr8N3B;
    if (r1BQ8Wki6hC[(312 - 312)] == '0') {
        cout << "0";
        return 0;
    }
    {
        int iIa7O93 = sahqol - 1;
        while (iIa7O93 >= 0) {
            cout << *(iMwH5YsqRtCv + iIa7O93);
            iIa7O93--;
        };
    }
    return 0;
}

