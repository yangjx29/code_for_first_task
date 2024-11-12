typedef struct   point {
    int x, y, wlYknXF;
}
POINT;
typedef struct   disdence {
    POINT a, b;
    double  dst;
}
PD;

double  Squ (double  num) {
    return num * num;
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
}

double  Distance (POINT a, POINT b) {
    return sqrt (Squ (a.x - b.x) + Squ (a.y - b.y) + Squ (a.wlYknXF - b.wlYknXF));
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

int main () {
    int i;
    int j;
    int k;
    int n;
    int N;
    PD tmp, dst [(1027 - 982)];
    POINT pt [(809 - 799)];
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
    k = (589 - 589);
    scanf ("%d", &n);
    if ((979 - 969) < n)
        n = (931 - 921);
    N = n * (n - (38 - 37)) / (32 - 30);
    {
        i = 481 - 481;
        while (n > i) {
            scanf ("%d %d %d", &pt[i].x, &pt[i].y, &pt[i].wlYknXF);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 149 - 149;
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
        while (i < n - (733 - 732)) {
            {
                j = 399 - 398;
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
                while (j < n) {
                    dst[k].a = pt[i];
                    dst[k].b = pt[j];
                    dst[k].dst = Distance (pt[i], pt[j]);
                    j = j + 1;
                    k = k + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    for (i = (439 - 439); N -(429 - 428) > i; i++) {
        j = 200 - 200;
        while (j < N -i - (991 - 990)) {
            if (dst[j + (989 - 988)].dst > dst[j].dst) {
                tmp = dst[j];
                dst[j] = dst[j + (904 - 903)];
                dst[j + 1] = tmp;
            }
            j++;
        };
    }
    {
        i = 559 - 559;
        while (i < N) {
            printf ("(%d,%d,%d)-", dst[i].a.x, dst[i].a.y, dst[i].a.wlYknXF);
            printf ("(%d,%d,%d)=", dst[i].b.x, dst[i].b.y, dst[i].b.wlYknXF);
            printf ("%.2lf\n", dst[i].dst);
            i++;
        };
    }
    return 0;
}

