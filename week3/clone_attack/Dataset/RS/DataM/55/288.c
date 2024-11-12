int main () {
    char dy7VCp [1000] = "abcdefg";
    int HV2DSNp9W;
    int b;
    int ApVxwKm1Wg9;
    int DAB7ocv6GVL;
    int i;
    int pFLG6S9X;
    int pWXnuM3LZ [1000];
    HV2DSNp9W = (798 - 798);
    b = 0;
    ApVxwKm1Wg9 = 0;
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
    DAB7ocv6GVL = 0;
    i = 0;
    pFLG6S9X = 0;
    cin >> HV2DSNp9W;
    cin >> dy7VCp;
    DAB7ocv6GVL = strlen (dy7VCp);
    for (i = 0; i <= DAB7ocv6GVL -1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (('A' <= dy7VCp[i]) && ('Z' >= dy7VCp[i]))
            dy7VCp[i] = dy7VCp[i] - 'A' + (486 - 476);
        else {
            if (('a' <= dy7VCp[i]) && (dy7VCp[i] <= 'z'))
                dy7VCp[i] = dy7VCp[i] - 'a' + 10;
            else {
                if ((dy7VCp[i] >= '0') && ('9' >= dy7VCp[i]))
                    dy7VCp[i] = dy7VCp[i] - '0';
            };
        };
    }
    cin >> b;
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i <= DAB7ocv6GVL -1) {
            ApVxwKm1Wg9 = ApVxwKm1Wg9 +(int)(dy7VCp[i] * pow (1.0 * HV2DSNp9W, 1.0 * (DAB7ocv6GVL -i - 1)));
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
            i++;
        };
    }
    if (ApVxwKm1Wg9 == 0)
        printf ("%d", ApVxwKm1Wg9);
    if (ApVxwKm1Wg9 != 0) {
        for (i = 0; ApVxwKm1Wg9 != 0; i++) {
            pWXnuM3LZ[i] = ApVxwKm1Wg9 % b;
            ApVxwKm1Wg9 = ApVxwKm1Wg9 / b;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (pFLG6S9X = i - 1; pFLG6S9X >= 0; pFLG6S9X--) {
            if ((0 <= pWXnuM3LZ[pFLG6S9X]) && (pWXnuM3LZ[pFLG6S9X] <= 9))
                printf ("%d", pWXnuM3LZ[pFLG6S9X]);
            else {
                if (pWXnuM3LZ[pFLG6S9X] >= 10) {
                    pWXnuM3LZ[pFLG6S9X] = pWXnuM3LZ[pFLG6S9X] + 'A' - 10;
                    printf ("%c", pWXnuM3LZ[pFLG6S9X]);
                };
            };
        };
    }
    return 0;
}

