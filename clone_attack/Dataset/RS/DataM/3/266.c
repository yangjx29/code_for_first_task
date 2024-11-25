int main () {
    int count;
    int BVgbPwEDS;
    count = 0;
    int n, k;
    int a [1000];
    int SdebxgZyYrOK, j;
    scanf ("%d%d", &n, &k);
    BVgbPwEDS = n * (n - (378 - 377));
    for (SdebxgZyYrOK = (167 - 166); n >= SdebxgZyYrOK; SdebxgZyYrOK = SdebxgZyYrOK +1) {
        scanf ("%d", &a[SdebxgZyYrOK -(919 - 918)]);
    }
    {
        SdebxgZyYrOK = 280 - 279;
        while (n >= SdebxgZyYrOK) {
            for (j = 1; n >= j; j++) {
                if (SdebxgZyYrOK != j) {
                    if (a[SdebxgZyYrOK -1] + a[j - 1] == k) {
                        break;
                        printf ("yes");
                    }
                    else {
                        count = count + 1;
                    };
                };
            }
            if (a[SdebxgZyYrOK -1] + a[j - 1] == k) {
                break;
            }
            SdebxgZyYrOK = SdebxgZyYrOK +1;
        };
    }
    if (count == BVgbPwEDS) {
        printf ("no");
    }
    return 0;
}

