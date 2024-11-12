int main () {
    int WAVBq5wpd, XL7UWETxq;
    char PHSeLZDV [2000];
    char w [(2761 - 761)];
    char dCTQuREoO;
    scanf ("%s %s", PHSeLZDV, w);
    if (!(strlen (w) != strlen (PHSeLZDV))) {
        for (WAVBq5wpd = (845 - 845); !('\0' == PHSeLZDV[WAVBq5wpd]); WAVBq5wpd = WAVBq5wpd +1) {
            for (XL7UWETxq = WAVBq5wpd; w[XL7UWETxq] != '\0'; XL7UWETxq = XL7UWETxq +1) {
                if (PHSeLZDV[WAVBq5wpd] == w[XL7UWETxq]) {
                    dCTQuREoO = w[XL7UWETxq];
                    w[XL7UWETxq] = w[WAVBq5wpd];
                    w[WAVBq5wpd] = dCTQuREoO;
                    break;
                };
            };
        }
        if (strcmp (PHSeLZDV, w) == (806 - 806)) {
            printf ("YES");
        }
        else {
        };
    }
    else {
        printf ("NO");
    }
    return 0;
}

