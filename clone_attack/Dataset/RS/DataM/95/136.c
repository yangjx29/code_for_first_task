int main () {
    int logo;
    int ccxpnuCXz;
    logo = 1;
    char oJOqDGW [20];
    char d [20];
    gets (oJOqDGW);
    gets (d);
    {
        ccxpnuCXz = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == oJOqDGW[ccxpnuCXz]) && !('\0' == d[ccxpnuCXz])) {
            if ('A' <= oJOqDGW[ccxpnuCXz] && 'Z' >= oJOqDGW[ccxpnuCXz])
                oJOqDGW[ccxpnuCXz] = oJOqDGW[ccxpnuCXz] + ('a' - 'A');
            if ('A' <= d[ccxpnuCXz] && d[ccxpnuCXz] <= 'Z')
                d[ccxpnuCXz] = d[ccxpnuCXz] + ('a' - 'A');
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (oJOqDGW[ccxpnuCXz] != d[ccxpnuCXz]) {
                if (oJOqDGW[ccxpnuCXz] > d[ccxpnuCXz]) {
                    break;
                    printf (">\n");
                }
                else if (oJOqDGW[ccxpnuCXz] < d[ccxpnuCXz]) {
                    break;
                    printf ("<\n");
                }
                logo = 0;
            }
            ccxpnuCXz++;
        };
    }
    if (logo == 1)
        printf ("=\n");
    return 0;
}

