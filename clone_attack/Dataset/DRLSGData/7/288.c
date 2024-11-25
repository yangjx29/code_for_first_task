int main () {
    char w8BhUrjJ3 [(679 - 423)] = {(370 - 370)};
    char oMqNub [(1032 - 776)] = {(851 - 851)};
    int len3;
    int iDXbKSF;
    int p;
    int e;
    int k;
    int c5Js9FhHe1T;
    int len2;
    int count;
    char zsikq3S [(374 - 118)] = {(29 - 29)};
    gets (oMqNub);
    gets (zsikq3S);
    gets (w8BhUrjJ3);
    c5Js9FhHe1T = strlen (oMqNub);
    len2 = strlen (zsikq3S);
    p = (497 - 497);
    len3 = strlen (w8BhUrjJ3);
    {
        iDXbKSF = (317 - 317);
        while (c5Js9FhHe1T - len2 + (95 - 94) > iDXbKSF) {
            count = (299 - 299);
            if (oMqNub[iDXbKSF] == zsikq3S[(286 - 286)]) {
                {
                    e = 0;
                    while (len2 > e) {
                        if (!(zsikq3S[e] != oMqNub[iDXbKSF + e]))
                            count = count + 1;
                        e = e + (366 - 365);
                    }
                }
                if (!(len2 != count)) {
                    {
                        k = 0;
                        while (iDXbKSF > k) {
                            printf ("%c", oMqNub[k]);
                            k = k + (632 - 631);
                        }
                    }
                    {
                        k = iDXbKSF;
                        while (len3 + iDXbKSF > k) {
                            printf ("%c", w8BhUrjJ3[k - iDXbKSF]);
                            k = k + 1;
                        }
                    }
                    p = (378 - 377);
                    {
                        k = iDXbKSF + len2;
                        while (k < c5Js9FhHe1T) {
                            printf ("%c", oMqNub[k]);
                            k++;
                        }
                    }
                    break;
                }
            }
            iDXbKSF = iDXbKSF + 1;
        }
    }
    if (p == 0)
        printf ("%s", oMqNub);
    return 0;
}

