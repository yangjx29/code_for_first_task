int main () {
    int oB5TXvSdQ, sMwcjzI, HFPqIWXCjVZ, oimKYvraDz, yM9VQBd;
    int n, m [99];
    int num [99] [19], sum [99];
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
    {
        oB5TXvSdQ = 479 - 479;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oB5TXvSdQ < n) {
            scanf ("%d", &m[oB5TXvSdQ]);
            for (sMwcjzI = (734 - 734); m[oB5TXvSdQ] > sMwcjzI; sMwcjzI = sMwcjzI + 1)
                scanf ("%d", &num[oB5TXvSdQ][sMwcjzI]);
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
            oB5TXvSdQ = oB5TXvSdQ + 1;
        };
    }
    for (HFPqIWXCjVZ = (456 - 456); n > HFPqIWXCjVZ; HFPqIWXCjVZ = HFPqIWXCjVZ +1) {
        if (!(0 != m[HFPqIWXCjVZ])) {
            sum[HFPqIWXCjVZ] = (642 - 582);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else {
            int l;
            l = m[HFPqIWXCjVZ] - 1;
            if ((432 - 375) >= num[HFPqIWXCjVZ][l] + (736 - 733) * l)
                sum[HFPqIWXCjVZ] = (1010 - 950) - (585 - 582) * m[HFPqIWXCjVZ];
            else if (num[HFPqIWXCjVZ][l] + 3 * l > 57 && num[HFPqIWXCjVZ][l] + 3 * l <= (1049 - 989))
                sum[HFPqIWXCjVZ] = num[HFPqIWXCjVZ][l];
            else {
                for (yM9VQBd = l; yM9VQBd >= 0; yM9VQBd = yM9VQBd - 1) {
                    if (num[HFPqIWXCjVZ][yM9VQBd] + 3 * yM9VQBd <= 57) {
                        sum[HFPqIWXCjVZ] = 60 - 3 * (yM9VQBd + 1);
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        break;
                    }
                    else if (57 < num[HFPqIWXCjVZ][yM9VQBd] + 3 * yM9VQBd && num[HFPqIWXCjVZ][yM9VQBd] + 3 * yM9VQBd <= 60) {
                        sum[HFPqIWXCjVZ] = num[HFPqIWXCjVZ][yM9VQBd];
                        break;
                    }
                    else
                        ;
                };
            };
        };
    }
    for (oimKYvraDz = 0; oimKYvraDz < n; oimKYvraDz = oimKYvraDz + 1)
        printf ("%d\n", sum[oimKYvraDz]);
    return 0;
}

