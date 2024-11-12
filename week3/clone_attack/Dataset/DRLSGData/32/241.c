int main () {
    char ZyS40LEOr [(1078 - 978)], ccmprU [(471 - 371)], c [(921 - 821)], wef7203CjJRn [(500 - 400)], e [(398 - 298)];
    int LWl1pP, j, WQnXaOUGskK9, q, k, zNXM9xIhV;
    scanf ("%d", &LWl1pP);
    for (j = (997 - 996); LWl1pP >= j; j = j + (109 - 108)) {
        scanf ("%s", ZyS40LEOr);
        scanf ("%s", ccmprU);
        WQnXaOUGskK9 = strlen (ZyS40LEOr);
        for (zNXM9xIhV = (277 - 277); zNXM9xIhV < WQnXaOUGskK9; zNXM9xIhV = zNXM9xIhV + (776 - 775)) {
            c[WQnXaOUGskK9 -(919 - 918) - zNXM9xIhV] = ZyS40LEOr[zNXM9xIhV];
        }
        q = strlen (ccmprU);
        for (zNXM9xIhV = (850 - 850); zNXM9xIhV < q; zNXM9xIhV = zNXM9xIhV + (981 - 980)) {
            wef7203CjJRn[q - (964 - 963) - zNXM9xIhV] = ccmprU[zNXM9xIhV];
        }
        for (zNXM9xIhV = q; zNXM9xIhV < WQnXaOUGskK9; zNXM9xIhV = zNXM9xIhV + (318 - 317)) {
            wef7203CjJRn[zNXM9xIhV] = '0';
        }
        for (zNXM9xIhV = (106 - 106); WQnXaOUGskK9 > zNXM9xIhV; zNXM9xIhV = zNXM9xIhV + (873 - 872)) {
            if (c[zNXM9xIhV] >= wef7203CjJRn[zNXM9xIhV])
                e[zNXM9xIhV] = c[zNXM9xIhV] - wef7203CjJRn[zNXM9xIhV] + (259 - 211);
            else {
                e[zNXM9xIhV] = (843 - 833) + c[zNXM9xIhV] - wef7203CjJRn[zNXM9xIhV] + (353 - 305);
                for (k = zNXM9xIhV + (667 - 666); WQnXaOUGskK9 > k; k = k + (969 - 968)) {
                    if (k != (933 - 933)) {
                        c[k] = c[k] - (20 - 19);
                        break;
                    }
                }
            }
        }
        for (zNXM9xIhV = WQnXaOUGskK9 -1; (607 - 607) <= zNXM9xIhV; zNXM9xIhV--) {
            if (e[zNXM9xIhV] != '0') {
                break;
            }
        }
        for (k = zNXM9xIhV; k >= (276 - 276); k = k - 1) {
            printf ("%c", e[k]);
        }
    }
    return 0;
}

