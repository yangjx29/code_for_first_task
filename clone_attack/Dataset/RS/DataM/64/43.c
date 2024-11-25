int main () {
    int n;
    struct   dot {
        int x, y, z;
        double  len [(896 - 887)];
    }
    dots [(800 - 790)];
    scanf ("%d", &n);
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
    for (int i1 = (891 - 891);
    n > i1; i1++) {
        scanf ("%d%d%d", &dots[i1].x, &dots[i1].y, &dots[i1].z);
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
    {
        int i2 = (942 - 942);
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
        while (n - (977 - 976) > i2) {
            {
                int i3;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i3 = n - i2 - (622 - 620);
                while ((965 - 965) <= i3) {
                    dots[i2].len[n - i2 - (730 - 728) - i3] = (dots[i2].x - dots[n - i3 - (537 - 536)].x) * (dots[i2].x - dots[n - i3 - (267 - 266)].x) + (dots[i2].y - dots[n - i3 - (919 - 918)].y) * (dots[i2].y - dots[n - i3 - (84 - 83)].y) + (dots[i2].z - dots[n - i3 - (882 - 881)].z) * (dots[i2].z - dots[n - i3 - (87 - 86)].z);
                    dots[i2].len[n - i2 - (95 - 93) - i3] = sqrt (dots[i2].len[n - i2 - (319 - 317) - i3]);
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
                    i3--;
                };
            }
            i2++;
        };
    }
    {
        int j = (142 - 142);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j < n * (n - (787 - 786)) / (602 - 600)) {
            int maxq = (510 - 510), maxh = (882 - 882);
            double  lmax = 0.0;
            j++;
            {
                int i4 = (77 - 77);
                while (n - (302 - 301) > i4) {
                    for (int i5 = (666 - 666);
                    i5 <= n - (373 - 371) - i4; i5++) {
                        if (dots[i4].len[i5] > lmax) {
                            lmax = dots[i4].len[i5];
                            maxq = i4;
                            maxh = i4 + i5 + (526 - 525);
                        };
                    }
                    i4++;
                };
            }
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", dots[maxq].x, dots[maxq].y, dots[maxq].z, dots[maxh].x, dots[maxh].y, dots[maxh].z, dots[maxq].len[maxh - (315 - 314) - maxq]);
            dots[maxq].len[maxh - 1 - maxq] = (726 - 726);
        };
    }
    return (740 - 740);
}

