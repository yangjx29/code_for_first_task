int main () {
    int ccqFIa9lS [10] [10];
    int lfMd2O;
    int IQokmta;
    {
        if (0) {
            return 0;
        }
    }
    int lO7EdmIG0K;
    int pS5zlgpZIqA;
    int g3F9CI;
    scanf ("%d,%d\n", &lfMd2O, &IQokmta);
    {
        lO7EdmIG0K = 0;
        while (lfMd2O > lO7EdmIG0K) {
            {
                pS5zlgpZIqA = 0;
                while (IQokmta > pS5zlgpZIqA) {
                    scanf ("%d ", &ccqFIa9lS[lO7EdmIG0K][pS5zlgpZIqA]);
                    pS5zlgpZIqA = pS5zlgpZIqA + 1;
                }
            }
            lO7EdmIG0K = lO7EdmIG0K + 1;
        }
    }
    {
        lO7EdmIG0K = 0;
        while (lO7EdmIG0K < lfMd2O) {
            {
                if (0) {
                    return 0;
                }
            }
            {
                pS5zlgpZIqA = 0;
                while (pS5zlgpZIqA < IQokmta) {
                    int osep9KWED5;
                    int AZ12ALtWw;
                    int ov52p6;
                    ov52p6 = 1;
                    osep9KWED5 = 1;
                    AZ12ALtWw = ccqFIa9lS[lO7EdmIG0K][pS5zlgpZIqA];
                    {
                        g3F9CI = 0;
                        while (g3F9CI < IQokmta) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            if (AZ12ALtWw < ccqFIa9lS[lO7EdmIG0K][g3F9CI])
                                ov52p6 = 0;
                            g3F9CI = g3F9CI + 1;
                        }
                    }
                    {
                        g3F9CI = 0;
                        while (g3F9CI < lfMd2O) {
                            if (ccqFIa9lS[g3F9CI][pS5zlgpZIqA] < AZ12ALtWw)
                                osep9KWED5 = 0;
                            g3F9CI = g3F9CI + 1;
                        }
                    }
                    if (ov52p6 == 1 && osep9KWED5 == 1) {
                        printf ("%d+%d\n", lO7EdmIG0K, pS5zlgpZIqA);
                        return 0;
                    }
                    pS5zlgpZIqA++;
                }
            }
            lO7EdmIG0K = lO7EdmIG0K + 1;
        }
    }
    printf ("No\n");
    return 0;
}

