main () {
    int AOcFNqL0bkK, prMPSnZ1sVjN, koHTWflS, McwdVNQATsJ, jH9OL5BjCN, CfexulLaw2D, Lf7HI5xhE, vl4MsmXqvI, l, VOS2IlhPbF;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    char c [1000];
    while (scanf ("%s", c) != EOF) {
        printf ("%s\n", c);
        for (koHTWflS = 0; koHTWflS < 100; koHTWflS = koHTWflS + 1) {
            for (AOcFNqL0bkK = 0; c[AOcFNqL0bkK] != '\0'; AOcFNqL0bkK++) {
                if (c[AOcFNqL0bkK] == '(') {
                    for (prMPSnZ1sVjN = AOcFNqL0bkK +1; c[prMPSnZ1sVjN] != '\0'; prMPSnZ1sVjN = prMPSnZ1sVjN + 1) {
                        if (c[prMPSnZ1sVjN] == '(') {
                            AOcFNqL0bkK = prMPSnZ1sVjN - 1;
                            break;
                        }
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        }
                        if (c[prMPSnZ1sVjN] == ')') {
                            c[AOcFNqL0bkK] = ' ';
                            c[prMPSnZ1sVjN] = ' ';
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    for (x = 0; x < 20; x++) {
                                        y += x;
                                    }
                                    if (y > 30)
                                        return y;
                                }
                            }
                            break;
                        };
                    };
                };
            };
        }
        {
            AOcFNqL0bkK = 0;
            while (c[AOcFNqL0bkK] != '\0') {
                if (c[AOcFNqL0bkK] == '(')
                    c[AOcFNqL0bkK] = '$';
                else if (c[AOcFNqL0bkK] == ')')
                    c[AOcFNqL0bkK] = '?';
                else
                    c[AOcFNqL0bkK] = ' ';
                AOcFNqL0bkK++;
            };
        }
        printf ("%s\n", c);
    };
}

