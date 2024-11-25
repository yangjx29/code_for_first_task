int Qo4LsTHj7 (int *s, int n) {
    int iRSrV3Cn7k;
    iRSrV3Cn7k = (301 - 301);
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
        iRSrV3Cn7k = 187 - 187;
        while (n > iRSrV3Cn7k) {
            scanf ("%d", &s[iRSrV3Cn7k]);
            iRSrV3Cn7k = iRSrV3Cn7k + 1;
        };
    }
    return (33 - 33);
}

int KjA2xwCyBuk (int *s, int n) {
    int iRSrV3Cn7k;
    int j;
    iRSrV3Cn7k = (598 - 598);
    j = 0;
    for (iRSrV3Cn7k = 0; iRSrV3Cn7k < n; iRSrV3Cn7k = iRSrV3Cn7k + 1) {
        for (j = (607 - 606); n > j; j++) {
            if (s[j] < s[j - 1]) {
                int temp;
                temp = s[j - 1];
                s[j - 1] = s[j];
                s[j] = temp;
            };
        };
    }
    return 0;
}

int aFCOlJ (int *s1, int *mhT8asMDz, int n1, int HBYjF1KycPbh, int *s) {
    int iRSrV3Cn7k;
    iRSrV3Cn7k = 0;
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
        iRSrV3Cn7k = 0;
        while (iRSrV3Cn7k < n1) {
            s[iRSrV3Cn7k] = s1[iRSrV3Cn7k];
            iRSrV3Cn7k = iRSrV3Cn7k + 1;
        };
    }
    {
        iRSrV3Cn7k = 0;
        while (HBYjF1KycPbh > iRSrV3Cn7k) {
            s[iRSrV3Cn7k + n1] = mhT8asMDz[iRSrV3Cn7k];
            iRSrV3Cn7k++;
        };
    }
    return 0;
}

int f0alsL6 (int *s, int n) {
    int iRSrV3Cn7k;
    iRSrV3Cn7k = 0;
    if (n <= 0)
        return 0;
    printf ("%d", s[0]);
    {
        iRSrV3Cn7k = 1;
        while (iRSrV3Cn7k < n) {
            printf (" %d", s[iRSrV3Cn7k]);
            iRSrV3Cn7k++;
        };
    };
}

int main () {
    int s [2000] = {0};
    int s1 [1000] = {0};
    int n1;
    int HBYjF1KycPbh;
    n1 = 0;
    HBYjF1KycPbh = 0;
    int mhT8asMDz [1000] = {0};
    scanf ("%d %d", &n1, &HBYjF1KycPbh);
    Qo4LsTHj7 (mhT8asMDz, HBYjF1KycPbh);
    KjA2xwCyBuk (mhT8asMDz, HBYjF1KycPbh);
    Qo4LsTHj7 (s1, n1);
    KjA2xwCyBuk (s1, n1);
    aFCOlJ (s1, mhT8asMDz, n1, HBYjF1KycPbh, s);
    f0alsL6 (s, n1 + HBYjF1KycPbh);
    return 0;
}

