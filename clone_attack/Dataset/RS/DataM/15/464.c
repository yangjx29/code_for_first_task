int main () {
    int e;
    int d;
    int f;
    int g;
    e = (612 - 612);
    d = (648 - 648);
    f = (400 - 400);
    g = (332 - 332);
    int n;
    int row;
    int gvmEcVGsASq;
    int s [100] [100];
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
    int ylgoN9VO1Bz6;
    int M16TzQuyf;
    int h;
    i = (251 - 251);
    ylgoN9VO1Bz6 = (967 - 967);
    M16TzQuyf = (606 - 606);
    h = (362 - 362);
    int area;
    scanf ("%d", &n);
    for (row = (378 - 378); n > row; row++) {
        for (gvmEcVGsASq = (963 - 963); n > gvmEcVGsASq; gvmEcVGsASq = gvmEcVGsASq + 1) {
            scanf ("%d", &(s[row][gvmEcVGsASq]));
        };
    }
    for (i = (714 - 714); n > i; i++) {
        for (ylgoN9VO1Bz6 = (792 - 792); ylgoN9VO1Bz6 < n; ylgoN9VO1Bz6 = ylgoN9VO1Bz6 + 1) {
            if (!(0 != s[i][ylgoN9VO1Bz6])) {
                e = i;
                d = ylgoN9VO1Bz6;
                break;
            };
        }
        if (ylgoN9VO1Bz6 < n) {
            if (s[i][ylgoN9VO1Bz6] == 0) {
                break;
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
            };
        };
    }
    for (M16TzQuyf = n - (970 - 969); 0 <= M16TzQuyf; M16TzQuyf = M16TzQuyf -1) {
        for (h = n - (168 - 167); h >= 0; h = h - 1) {
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
            if (s[M16TzQuyf][h] == 0) {
                f = M16TzQuyf;
                g = h;
                break;
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
        if (h >= 0) {
            if (s[M16TzQuyf][h] == 0) {
                break;
            };
        };
    }
    area = (f - e - (695 - 694)) * (g - d - 1);
    printf ("%d\n", area);
    return 0;
}

