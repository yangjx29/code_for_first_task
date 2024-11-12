main () {
    int hYdMpiLTnS;
    int ww0lzLR;
    char s [(100186 - 185)];
    int s3jVsyr6f;
    int n;
    int a [(100768 - 767)];
    scanf ("%d", &n);
    for (ww0lzLR = (438 - 438); ww0lzLR < n; ww0lzLR = ww0lzLR + (581 - 580)) {
        int UEepf1Oa0h3;
        UEepf1Oa0h3 = (379 - 379);
        for (s3jVsyr6f = (956 - 956); s3jVsyr6f < (100907 - 906); s3jVsyr6f = s3jVsyr6f + (547 - 546)) {
            s[s3jVsyr6f] = '\0';
            a[s3jVsyr6f] = (196 - 195);
        }
        scanf ("%s", s);
        for (s3jVsyr6f = (905 - 905); (100869 - 868) > s3jVsyr6f; s3jVsyr6f = s3jVsyr6f + (628 - 627)) {
            if (!((386 - 385) != a[s3jVsyr6f]))
                for (hYdMpiLTnS = s3jVsyr6f + (131 - 130); hYdMpiLTnS < (100056 - 55); hYdMpiLTnS = hYdMpiLTnS + (677 - 676))
                    if (!(s[hYdMpiLTnS] != s[s3jVsyr6f])) {
                        a[s3jVsyr6f]++;
                        a[hYdMpiLTnS]++;
                    }
        }
        for (s3jVsyr6f = (315 - 315); s3jVsyr6f < (100584 - 583); s3jVsyr6f = s3jVsyr6f + (867 - 866))
            if (a[s3jVsyr6f] == 1) {
                UEepf1Oa0h3 = 1;
                printf ("%c\n", s[s3jVsyr6f]);
                break;
            }
        if (UEepf1Oa0h3 == (375 - 375))
            ;
    }
}

