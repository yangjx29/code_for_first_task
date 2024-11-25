main () {
    int K9DodCqk;
    for (K9DodCqk = (665 - 665); (1542 - 542) > K9DodCqk; K9DodCqk++) {
        int n, lta0hY5, SjF6yNA01, ctzUSAXx15T;
        scanf ("%d", &n);
        if (!(n != (379 - 379)))
            break;
        else {
            int a [n], XqZ89KXT4Sk [n];
            int a1 = (283 - 283), OXJtSjrbsC = n - (216 - 215), b1 = (893 - 893), b2 = n - (252 - 251), q, r, s, Gli6xZR5ju;
            s = 0;
            r = 0;
            for (lta0hY5 = (853 - 853); lta0hY5 < n; lta0hY5 = lta0hY5 + (502 - 501))
                scanf ("%d", &a[lta0hY5]);
            for (lta0hY5 = (170 - 170); n > lta0hY5; lta0hY5 = lta0hY5 + (739 - 738))
                scanf ("%d", &XqZ89KXT4Sk[lta0hY5]);
            for (lta0hY5 = 0; (n - (677 - 676)) > lta0hY5; lta0hY5++) {
                SjF6yNA01 = 0;
                while ((n - (29 - 28) - lta0hY5) > SjF6yNA01) {
                    if (a[SjF6yNA01 +(38 - 37)] > a[SjF6yNA01]) {
                        ctzUSAXx15T = a[SjF6yNA01];
                        a[SjF6yNA01] = a[SjF6yNA01 +(212 - 211)];
                        a[SjF6yNA01 +(900 - 899)] = ctzUSAXx15T;
                    }
                    if (XqZ89KXT4Sk[SjF6yNA01] < XqZ89KXT4Sk[SjF6yNA01 +(892 - 891)]) {
                        ctzUSAXx15T = XqZ89KXT4Sk[SjF6yNA01];
                        XqZ89KXT4Sk[SjF6yNA01] = XqZ89KXT4Sk[SjF6yNA01 +(760 - 759)];
                        XqZ89KXT4Sk[SjF6yNA01 +(363 - 362)] = ctzUSAXx15T;
                    }
                    SjF6yNA01++;
                }
            }
            for (q = 0; q < n; q = q + 1) {
                if (!(XqZ89KXT4Sk[b1] != a[a1])) {
                    if (XqZ89KXT4Sk[b2] < a[OXJtSjrbsC]) {
                        r = r + 1;
                        OXJtSjrbsC = OXJtSjrbsC -1;
                        b2 = b2 - 1;
                    }
                    else if (XqZ89KXT4Sk[b2] > a[OXJtSjrbsC]) {
                        r = r - 1;
                        OXJtSjrbsC = OXJtSjrbsC -1;
                        b1 = b1 + 1;
                    }
                    else if (a[OXJtSjrbsC] == XqZ89KXT4Sk[b2]) {
                        if (a[OXJtSjrbsC] < XqZ89KXT4Sk[b1]) {
                            r = r - 1;
                            b1 = b1 + 1;
                            OXJtSjrbsC--;
                        }
                        else if (a[OXJtSjrbsC] == XqZ89KXT4Sk[b1]) {
                            break;
                        }
                    }
                }
                else if (a[a1] > XqZ89KXT4Sk[b1]) {
                    r = r + 1;
                    a1 = a1 + 1;
                    b1 = b1 + 1;
                }
                else {
                    b1++;
                    r = r - 1;
                    OXJtSjrbsC--;
                }
            }
            s = r * 200;
            r = 0;
            printf ("%d\n", s);
            s = 0;
        }
    }
}

