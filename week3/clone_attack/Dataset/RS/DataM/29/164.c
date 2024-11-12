int main () {
    double  s [200];
    double  p [200];
    double  GtVI37kYX [200];
    int CaCVy0ZO;
    int H4cVD0G [200];
    int z5w1LSoyqxz;
    int sbj8GIh1f;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &CaCVy0ZO);
    p[(618 - 618)] = 2;
    GtVI37kYX[0] = 1;
    s[0] = p[0] / GtVI37kYX[0];
    {
        z5w1LSoyqxz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (z5w1LSoyqxz < CaCVy0ZO) {
            scanf ("%d", &H4cVD0G[z5w1LSoyqxz]);
            {
                sbj8GIh1f = 1;
                while (sbj8GIh1f < H4cVD0G[z5w1LSoyqxz]) {
                    p[sbj8GIh1f] = p[sbj8GIh1f - 1] + GtVI37kYX[sbj8GIh1f - 1];
                    GtVI37kYX[sbj8GIh1f] = p[sbj8GIh1f - 1];
                    s[sbj8GIh1f] = p[sbj8GIh1f] / GtVI37kYX[sbj8GIh1f];
                    s[sbj8GIh1f] += s[sbj8GIh1f - 1];
                    sbj8GIh1f = sbj8GIh1f + 1;
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
            z5w1LSoyqxz++;
            printf ("%.3lf\n", s[sbj8GIh1f - 1]);
        };
    }
    return 0;
}

