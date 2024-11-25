void  main () {
    char *q [50];
    int Lfu9Q0, i, PAyORkUSYFuB = (825 - 825), R9jof7DGJLc5, EyMTnb8RVKtr, min, J8Q9UmSWo3t = (33 - 33), x = (611 - 611), y = (344 - 344), JcvqnHCLb [(1192 - 192)];
    char R5Ftur96G [1000];
    char *p = R5Ftur96G;
    gets (R5Ftur96G);
    Lfu9Q0 = strlen (R5Ftur96G);
    q[(989 - 989)] = &R5Ftur96G[(735 - 735)];
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
    for (R9jof7DGJLc5 = (456 - 456); Lfu9Q0 >= R9jof7DGJLc5; R9jof7DGJLc5 = R9jof7DGJLc5 +1) {
        if (!(' ' == R5Ftur96G[R9jof7DGJLc5]) && !('\0' == R5Ftur96G[R9jof7DGJLc5]))
            PAyORkUSYFuB = PAyORkUSYFuB +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != R5Ftur96G[R9jof7DGJLc5]) || R5Ftur96G[R9jof7DGJLc5] == '\0') {
            JcvqnHCLb[J8Q9UmSWo3t] = PAyORkUSYFuB;
            PAyORkUSYFuB = 0;
            R5Ftur96G[R9jof7DGJLc5] = '\0';
            q[J8Q9UmSWo3t +(914 - 913)] = &R5Ftur96G[R9jof7DGJLc5 +1];
            J8Q9UmSWo3t++;
        };
    }
    EyMTnb8RVKtr = JcvqnHCLb[0];
    min = JcvqnHCLb[0];
    {
        i = 1;
        while (i < J8Q9UmSWo3t) {
            if (JcvqnHCLb[i] > EyMTnb8RVKtr) {
                EyMTnb8RVKtr = JcvqnHCLb[i];
                x = i;
            }
            if (JcvqnHCLb[i] < min) {
                min = JcvqnHCLb[i];
                y = i;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    printf ("%s\n", q[x]);
    printf ("%s\n", q[y]);
}

