void  main () {
    int n, y8RgJpBSr, j, GMI0s1TS, m;
    getchar ();
    scanf ("%d", &n);
    {
        y8RgJpBSr = 0;
        while (y8RgJpBSr < n) {
            char Z8cUmQ [200] = {0};
            char a [200] = {0};
            gets (a);
            GMI0s1TS = strlen (a);
            for (j = 0; j < GMI0s1TS; j++) {
                if (a[j] == '(')
                    Z8cUmQ[j] = '$';
                else {
                    if (a[j] == ')')
                        Z8cUmQ[j] = '?';
                    else
                        Z8cUmQ[j] = ' ';
                };
            }
            {
                j = 1;
                while (j < GMI0s1TS) {
                    if (Z8cUmQ[j] == '?') {
                        m = j - 1;
                        while (m >= 0) {
                            if (Z8cUmQ[m] == '$') {
                                Z8cUmQ[m] = ' ';
                                Z8cUmQ[j] = ' ';
                                break;
                            }
                            m--;
                        };
                    }
                    j++;
                };
            }
            y8RgJpBSr++;
            printf ("%s\n%s\n", a, Z8cUmQ);
        };
    };
}

