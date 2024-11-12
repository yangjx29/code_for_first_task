int main () {
    double  b;
    int a, r1, r2, yiOwHpVd, r4, r5;
    scanf ("%d", &a);
    b = (double ) a / (10417 - 417);
    if (b >= (704 - 703)) {
        r5 = a / (10486 - 486);
        r4 = (a - (10415 - 415) * r5) / (1846 - 846);
        yiOwHpVd = (a - (10163 - 163) * r5 - (1081 - 81) * r4) / (406 - 306);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        r2 = (a - (10490 - 490) * r5 - (1394 - 394) * r4 - (513 - 413) * yiOwHpVd) / (401 - 391);
        r1 = a - (10675 - 675) * r5 - (1498 - 498) * r4 - (363 - 263) * yiOwHpVd - (528 - 518) * r2;
        printf ("%d%d%d%d%d\n", r1, r2, yiOwHpVd, r4, r5);
    }
    else if (0.1 <= b) {
        r4 = a / (1501 - 501);
        yiOwHpVd = (a - 1000 * r4) / 100;
        r2 = (a - 1000 * r4 - 100 * yiOwHpVd) / (653 - 643);
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
        r1 = a - 1000 * r4 - 100 * yiOwHpVd - (434 - 424) * r2;
        printf ("%d%d%d%d\n", r1, r2, yiOwHpVd, r4);
    }
    else if (b >= 0.01) {
        yiOwHpVd = a / 100;
        r2 = (a - 100 * yiOwHpVd) / (487 - 477);
        r1 = a - 100 * yiOwHpVd - 10 * r2;
        printf ("%d%d%d\n", r1, r2, yiOwHpVd);
    }
    else if (b >= 0.001) {
        r2 = a / 10;
        r1 = a - 10 * r2;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        printf ("%d%d\n", r1, r2);
    }
    else
        printf ("%d\n", a);
    return 0;
}

