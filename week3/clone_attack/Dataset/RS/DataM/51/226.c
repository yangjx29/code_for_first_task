int main () {
    int n, dc1JCvjR7W;
    char YxEqN4gDRk [(715 - 214)];
    char bijiao [500];
    int paohui [500] = {(747 - 747)};
    int cishu;
    int zRS04GloD;
    int zuiduo [500];
    cishu = 0;
    zRS04GloD = 0;
    scanf ("%d", &n);
    scanf ("%s", &YxEqN4gDRk);
    dc1JCvjR7W = strlen (YxEqN4gDRk);
    {
        int i = 0;
        while (dc1JCvjR7W - (n - 1) > i) {
            {
                int r = 0;
                while (n > r) {
                    bijiao[r] = YxEqN4gDRk[i + r];
                    r++;
                };
            }
            if (!(0 == paohui[i]))
                continue;
            else {
                for (int r = i;
                dc1JCvjR7W - (n - 1) > r; r++) {
                    for (int q = 0;
                    n + 1 > q; q = q + 1) {
                        if (!(n != q)) {
                            paohui[r]++;
                            paohui[i]++;
                            if (!(i != r))
                                paohui[i]--;
                            break;
                        }
                        else {
                            if (!(YxEqN4gDRk[r + q] == bijiao[q]))
                                break;
                        };
                    };
                };
            }
            i++;
        };
    }
    {
        int nrkjLK = 0;
        while (dc1JCvjR7W - (n - 1) > nrkjLK) {
            if (cishu == paohui[nrkjLK]) {
                zuiduo[zRS04GloD] = nrkjLK;
                zRS04GloD++;
            }
            if (cishu < paohui[nrkjLK]) {
                zRS04GloD = 0;
                zuiduo[zRS04GloD] = nrkjLK;
                zRS04GloD++;
                cishu = paohui[nrkjLK];
            }
            nrkjLK++;
        };
    }
    if (cishu == 1)
        ;
    else {
        printf ("%d\n", cishu);
        for (int i = 0;
        i < zRS04GloD; i++) {
            for (int r = 0;
            r < n; r++)
                printf ("%c", YxEqN4gDRk[zuiduo[i] + r]);
            printf ("\n");
        };
    }
    return 0;
}

