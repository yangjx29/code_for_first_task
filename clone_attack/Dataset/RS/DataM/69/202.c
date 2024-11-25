int main () {
    int CUeBAIhpo3;
    int X4l52ZO0MkFR;
    int zip9u5l;
    int a [(886 - 586)] = {(202 - 202)};
    char coyti41Jf [2] [(511 - 211)] = {'0'};
    scanf ("%s", coyti41Jf[0]);
    scanf ("%s", coyti41Jf[(30 - 29)]);
    X4l52ZO0MkFR = strlen (coyti41Jf[0]);
    zip9u5l = strlen (coyti41Jf[(249 - 248)]);
    if (X4l52ZO0MkFR <= zip9u5l) {
        {
            CUeBAIhpo3 = 0;
            while (CUeBAIhpo3 < X4l52ZO0MkFR) {
                a[CUeBAIhpo3] = (coyti41Jf[0][X4l52ZO0MkFR -CUeBAIhpo3-1] - '0') + (coyti41Jf[1][zip9u5l - CUeBAIhpo3 -1] - '0');
                CUeBAIhpo3++;
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
        {
            CUeBAIhpo3 = X4l52ZO0MkFR;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (CUeBAIhpo3 < zip9u5l) {
                a[CUeBAIhpo3] = coyti41Jf[1][zip9u5l - CUeBAIhpo3 -1] - '0';
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
                CUeBAIhpo3++;
            };
        };
    }
    else {
        {
            CUeBAIhpo3 = 0;
            while (CUeBAIhpo3 < zip9u5l) {
                a[CUeBAIhpo3] = (coyti41Jf[0][X4l52ZO0MkFR -CUeBAIhpo3-1] - '0') + (coyti41Jf[1][zip9u5l - CUeBAIhpo3 -1] - '0');
                CUeBAIhpo3++;
            };
        }
        {
            CUeBAIhpo3 = zip9u5l;
            while (CUeBAIhpo3 < X4l52ZO0MkFR) {
                a[CUeBAIhpo3] = coyti41Jf[0][X4l52ZO0MkFR -CUeBAIhpo3-1] - '0';
                CUeBAIhpo3++;
            };
        };
    }
    {
        CUeBAIhpo3 = 0;
        while (CUeBAIhpo3 <= (815 - 564)) {
            if (a[CUeBAIhpo3] >= (707 - 697)) {
                a[CUeBAIhpo3] = a[CUeBAIhpo3] % 10;
                a[CUeBAIhpo3 +1] = a[CUeBAIhpo3 +1] + 1;
            }
            CUeBAIhpo3++;
        };
    }
    {
        CUeBAIhpo3 = 251;
        while (CUeBAIhpo3 > 0) {
            if (a[CUeBAIhpo3] != 0)
                break;
            CUeBAIhpo3--;
        };
    }
    for (; CUeBAIhpo3 >= 0; CUeBAIhpo3--) {
        printf ("%d", a[CUeBAIhpo3]);
    };
}

