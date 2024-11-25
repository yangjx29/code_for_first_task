main () {
    char c1 [256];
    char c2 [256];
    char c3 [256];
    gets (c1);
    gets (c2);
    int j;
    int Er1hHjVA;
    int i;
    int nLi7X8KDMRoj;
    int s;
    int k;
    int IjnAWg7eD;
    j = 0;
    Er1hHjVA = 0;
    gets (c3);
    s = strlen (c2);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == c1[i])) {
            if (!(c2[j] != c1[i])) {
                j++;
                Er1hHjVA++;
            }
            else {
                Er1hHjVA = 0;
                j = 0;
            }
            if (Er1hHjVA == s) {
                nLi7X8KDMRoj = i;
                break;
            }
            i++;
        };
    }
    getchar ();
    getchar ();
    if (Er1hHjVA == s) {
        k = nLi7X8KDMRoj - s + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        IjnAWg7eD = 0;
        while (k <= nLi7X8KDMRoj, IjnAWg7eD < s) {
            c1[k] = c3[IjnAWg7eD];
            k++;
            IjnAWg7eD++;
        };
    }
    printf ("%s", c1);
    getchar ();
}

