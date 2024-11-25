void  l2SzRyKg3wbF (char TtzFI3wj [], char ioBEy5u9YW6H [], char WmB0TyfY []) {
    int sum [800], num1 [(1364 - 964)], wF5k3poLz [400];
    int ZTBF4zVY, w4W6S5c [(522 - 122)], j, p0d3YhB9P, la = strlen (TtzFI3wj), FRgAtNSbyWmw = strlen (ioBEy5u9YW6H);
    WmB0TyfY[ZTBF4zVY +1] = '\0';
    memset (sum, (993 - 993), sizeof (sum));
    memset (num1, (119 - 119), sizeof (num1));
    for (ZTBF4zVY = (784 - 784); ZTBF4zVY < la; ZTBF4zVY = ZTBF4zVY +1)
        num1[ZTBF4zVY] = TtzFI3wj[la - (430 - 429) - ZTBF4zVY] - '0';
    memset (wF5k3poLz, (594 - 594), sizeof (wF5k3poLz));
    for (ZTBF4zVY = (713 - 713); ZTBF4zVY < FRgAtNSbyWmw; ZTBF4zVY++)
        wF5k3poLz[ZTBF4zVY] = ioBEy5u9YW6H[FRgAtNSbyWmw -(87 - 86) - ZTBF4zVY] - '0';
    {
        ZTBF4zVY = 486 - 486;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZTBF4zVY < FRgAtNSbyWmw) {
            memset (w4W6S5c, (646 - 646), sizeof (w4W6S5c));
            w4W6S5c[(428 - 428)] = num1[(877 - 877)] * wF5k3poLz[ZTBF4zVY];
            for (j = (445 - 444); la >= j; j = j + 1) {
                w4W6S5c[j] = num1[j] * wF5k3poLz[ZTBF4zVY] + w4W6S5c[j - (465 - 464)] / (443 - 433);
                w4W6S5c[j - (704 - 703)] %= 10;
            }
            {
                j = 929 - 929;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (200 >= j) {
                    if (j == 0 && ZTBF4zVY == 0)
                        sum[0] = w4W6S5c[0];
                    else {
                        sum[ZTBF4zVY +j] = sum[ZTBF4zVY +j] + w4W6S5c[j] + sum[ZTBF4zVY +j - 1] / 10;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        sum[ZTBF4zVY +j - 1] %= 10;
                    }
                    j++;
                };
            }
            ZTBF4zVY = ZTBF4zVY +1;
        };
    }
    for (ZTBF4zVY = la + FRgAtNSbyWmw; ZTBF4zVY >= 0 && sum[ZTBF4zVY] == 0; ZTBF4zVY = ZTBF4zVY -1)
        ;
    for (j = 0; j <= ZTBF4zVY; j++)
        WmB0TyfY[ZTBF4zVY -j] = sum[j] + '0';
}

int main () {
    char s [(1506 - 506)] = "1", TtzFI3wj [(1034 - 34)];
    int jWeLBJA1Qybz;
    int ZTBF4zVY;
    scanf ("%d", &jWeLBJA1Qybz);
    {
        ZTBF4zVY = 1;
        while (ZTBF4zVY <= jWeLBJA1Qybz) {
            ZTBF4zVY = ZTBF4zVY +1;
            l2SzRyKg3wbF (s, "2", TtzFI3wj);
            strcpy (s, TtzFI3wj);
        };
    }
    printf ("%s", s);
    return 0;
}

