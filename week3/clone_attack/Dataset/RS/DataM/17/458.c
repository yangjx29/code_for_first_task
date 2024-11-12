int main () {
    char a [(457 - 356)];
    char b [101];
    int Z4YRmLWv0;
    int t;
    int OYt5mZgUaXWD;
    int i;
    int wZPwDgBfTFle;
    int k;
    int l;
    int m;
    int JgbMeL;
    int uWig2azRSw7v;
    int c [(765 - 664)] = {(53 - 53)};
    Z4YRmLWv0 = (454 - 454);
    t = (489 - 489);
    scanf ("%d", &JgbMeL);
    {
        i = 637 - 637;
        while (JgbMeL > i) {
            int c [101] = {(172 - 172)};
            i++;
            scanf ("%s", a);
            uWig2azRSw7v = strlen (a);
            t = (550 - 550);
            Z4YRmLWv0 = (240 - 240);
            {
                wZPwDgBfTFle = 0;
                while (wZPwDgBfTFle < uWig2azRSw7v) {
                    if (!('(' == a[wZPwDgBfTFle]) && !(')' == a[wZPwDgBfTFle]))
                        b[wZPwDgBfTFle] = ' ';
                    if (!('(' != a[wZPwDgBfTFle])) {
                        b[wZPwDgBfTFle] = '$';
                        c[t] = wZPwDgBfTFle;
                        t = t + 1;
                        Z4YRmLWv0++;
                    }
                    if (a[wZPwDgBfTFle] == ')') {
                        if (Z4YRmLWv0 == 0) {
                            b[wZPwDgBfTFle] = '?';
                        }
                        else {
                            Z4YRmLWv0 = Z4YRmLWv0 -1;
                            t = t - 1;
                            b[c[t]] = ' ';
                            b[wZPwDgBfTFle] = ' ';
                        };
                    }
                    wZPwDgBfTFle++;
                };
            }
            printf ("%s\n", a);
            {
                OYt5mZgUaXWD = 0;
                while (OYt5mZgUaXWD < uWig2azRSw7v) {
                    printf ("%c", b[OYt5mZgUaXWD]);
                    OYt5mZgUaXWD = OYt5mZgUaXWD +1;
                };
            }
            printf ("\n");
        };
    }
    return 0;
}

