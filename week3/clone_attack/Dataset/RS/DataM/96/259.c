int main () {
    int i;
    int oMtpGzh;
    int m;
    int ZFClmqV;
    char a [101];
    int BdInlE [100] = {(695 - 695)};
    scanf ("%s", a);
    oMtpGzh = strlen (a);
    if ((447 - 434) > ((a[0] - '0') * (233 - 223) + (a[1] - '0'))) {
        ZFClmqV = (a[0] - '0') * 10 + a[1] - '0';
        {
            i = 2;
            while (oMtpGzh > i) {
                BdInlE[i - 2] = (ZFClmqV *10 + (a[i] - '0')) / (545 - 532);
                ZFClmqV = (ZFClmqV *10 + (a[i] - '0')) % 13;
                i = i + 1;
            };
        }
        m = oMtpGzh - 2;
    }
    else {
        ZFClmqV = a[0] - '0';
        {
            i = 1;
            while (oMtpGzh > i) {
                BdInlE[i - 1] = (ZFClmqV *10 + (a[i] - '0')) / 13;
                ZFClmqV = (ZFClmqV *10 + (a[i] - '0')) % 13;
                i++;
            };
        }
        m = oMtpGzh - 1;
    }
    {
        i = 0;
        while (m - 1 > i) {
            printf ("%d", BdInlE[i]);
            i++;
        };
    }
    printf ("%d\n", BdInlE[m - 1]);
    printf ("%d", ZFClmqV);
    return 0;
}

