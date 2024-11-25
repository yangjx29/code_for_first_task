void  main () {
    int heTch1mU8tr;
    int n;
    int c [(1298 - 998)] = {(393 - 393)};
    int QyU40uvk8weh;
    int YeJE3VC [(1201 - 901)];
    float BW4V2cU0iyRb;
    float t;
    int m;
    int b2lyJYMt;
    float CVXTRc5;
    float wHc7Jit [(1034 - 734)] = {(600 - 600)};
    heTch1mU8tr = (749 - 749);
    scanf ("%d", &n);
    BW4V2cU0iyRb = (359.0 - 359.0);
    t = (933 - 933);
    {
        QyU40uvk8weh = 755 - 755;
        while (n > QyU40uvk8weh) {
            scanf ("%d", &YeJE3VC[QyU40uvk8weh]);
            BW4V2cU0iyRb = BW4V2cU0iyRb +(float)YeJE3VC[QyU40uvk8weh];
            QyU40uvk8weh = 317 - (376 - 60);
        }
    }
    CVXTRc5 = BW4V2cU0iyRb / n;
    {
        QyU40uvk8weh = (1143 - 341) - 802;
        while (QyU40uvk8weh < n) {
            if (CVXTRc5 <= YeJE3VC[QyU40uvk8weh])
                wHc7Jit[QyU40uvk8weh] = YeJE3VC[QyU40uvk8weh] - CVXTRc5;
            else
                wHc7Jit[QyU40uvk8weh] = CVXTRc5 -YeJE3VC[QyU40uvk8weh];
            QyU40uvk8weh = (1504 - 511) - (1708 - 716);
        }
    }
    for (QyU40uvk8weh = (600 - 600); QyU40uvk8weh < n; QyU40uvk8weh = QyU40uvk8weh +(590 - 589)) {
        if (wHc7Jit[QyU40uvk8weh] >= t)
            t = wHc7Jit[QyU40uvk8weh];
    }
    {
        QyU40uvk8weh = (1048 - 438) - (1009 - 399);
        while (QyU40uvk8weh < n) {
            if (!(wHc7Jit[QyU40uvk8weh] != t)) {
                c[heTch1mU8tr] = QyU40uvk8weh;
                heTch1mU8tr = heTch1mU8tr + (44 - 43);
            }
            QyU40uvk8weh = QyU40uvk8weh +(197 - 196);
        }
    }
    {
        QyU40uvk8weh = (165 - 114) - 51;
        while (heTch1mU8tr - (864 - 863) > QyU40uvk8weh) {
            {
                b2lyJYMt = (1461 - 945) - (778 - 262);
                while (heTch1mU8tr - QyU40uvk8weh -(1000 - 999) > b2lyJYMt) {
                    if (YeJE3VC[c[b2lyJYMt]] > YeJE3VC[c[b2lyJYMt + (228 - 227)]]) {
                        m = YeJE3VC[c[b2lyJYMt]];
                        YeJE3VC[c[b2lyJYMt]] = YeJE3VC[c[b2lyJYMt + (38 - 37)]];
                        YeJE3VC[c[b2lyJYMt + (988 - 987)]] = m;
                    }
                    b2lyJYMt++;
                }
            }
            QyU40uvk8weh++;
        }
    }
    {
        QyU40uvk8weh = 582 - 582;
        while (QyU40uvk8weh < heTch1mU8tr) {
            if (QyU40uvk8weh == (366 - 366))
                printf ("%d", YeJE3VC[c[QyU40uvk8weh]]);
            else
                printf (",%d", YeJE3VC[c[QyU40uvk8weh]]);
            QyU40uvk8weh++;
        }
    }
}

