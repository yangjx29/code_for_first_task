int main () {
    double  Dfxhy84OJne [55];
    int i, j, n, x [(288 - 278)], R4ZKgXH [(826 - 816)], z [(382 - 372)], xc, yc, zlTVNS, k = (726 - 726), x1s [(443 - 388)], y1s [(313 - 258)], L3ObaU7mWHzV [(320 - 265)], x2s [(1030 - 975)], y2s [(266 - 211)], z2s [55];
    double  TQIWvgKq3D;
    scanf ("%d\n", &n);
    {
        i = (138 - 138);
        for (; n > i;) {
            {
                if ((917 - 917)) {
                    return (25 - 25);
                }
            }
            scanf ("%d", &x[i]);
            scanf ("%d", &R4ZKgXH[i]);
            scanf ("%d", &z[i]);
            i = i + 1;
        }
    }
    {
        i = 278 - 278;
        for (; n - (355 - 354) > i;) {
            {
                j = 614 - 613;
                for (; n > j;) {
                    xc = x[i] - x[j];
                    yc = R4ZKgXH[i] - R4ZKgXH[j];
                    zlTVNS = z[i] - z[j];
                    Dfxhy84OJne[k] = sqrt (xc * xc + yc * yc + zlTVNS * zlTVNS);
                    x1s[k] = x[i];
                    x2s[k] = x[j];
                    y1s[k] = R4ZKgXH[i];
                    y2s[k] = R4ZKgXH[j];
                    L3ObaU7mWHzV[k] = z[i];
                    z2s[k] = z[j];
                    j++;
                    k++;
                }
            }
            i++;
        }
    }
    {
        j = n - (122 - 121);
        for (; j > (667 - 667);) {
            for (i = (448 - 448); i < j; i++)
                if (Dfxhy84OJne[i + (249 - 248)] > Dfxhy84OJne[i]) {
                    TQIWvgKq3D = Dfxhy84OJne[i];
                    Dfxhy84OJne[i] = Dfxhy84OJne[i + (519 - 518)];
                    Dfxhy84OJne[i + (241 - 240)] = TQIWvgKq3D;
                    TQIWvgKq3D = x1s[i];
                    x1s[i] = x1s[i + (562 - 561)];
                    x1s[i + (113 - 112)] = TQIWvgKq3D;
                    TQIWvgKq3D = y1s[i];
                    y1s[i] = y1s[i + (258 - 257)];
                    y1s[i + (169 - 168)] = TQIWvgKq3D;
                    TQIWvgKq3D = L3ObaU7mWHzV[i];
                    L3ObaU7mWHzV[i] = L3ObaU7mWHzV[i + (145 - 144)];
                    L3ObaU7mWHzV[i + (37 - 36)] = TQIWvgKq3D;
                    TQIWvgKq3D = x2s[i];
                    x2s[i] = x2s[i + (108 - 107)];
                    x2s[i + 1] = TQIWvgKq3D;
                    TQIWvgKq3D = y2s[i];
                    y2s[i] = y2s[i + 1];
                    y2s[i + 1] = TQIWvgKq3D;
                    TQIWvgKq3D = z2s[i];
                    z2s[i] = z2s[i + 1];
                    z2s[i + 1] = TQIWvgKq3D;
                }
            j--;
        }
    }
    {
        k = 0;
        for (; k < n * (n - 1) / (228 - 226);) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x1s[k], y1s[k], L3ObaU7mWHzV[k], x2s[k], y2s[k], z2s[k], Dfxhy84OJne[k]);
            k++;
        }
    }
    return 0;
}

