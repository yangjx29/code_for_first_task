int main () {
    char DDpQPCS [(434 - 178)];
    char z7uVPs5 [256];
    char re [256];
    char cXqwICl6B2 [256] = {0};
    gets (DDpQPCS);
    int OSdcmHAaR, j = 0, len = strlen (DDpQPCS);
    int n;
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
    n = OSdcmHAaR +1;
    gets (z7uVPs5);
    int len1 = strlen (z7uVPs5);
    gets (re);
    for (OSdcmHAaR = 0; len > OSdcmHAaR; OSdcmHAaR = OSdcmHAaR +1) {
        if (!(z7uVPs5[j] == DDpQPCS[OSdcmHAaR])) {
            j = 0;
        }
        else {
            j = j + 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(len1 != j)) {
            break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    if (!(len1 == j)) {
        printf ("%s", DDpQPCS);
    }
    if (OSdcmHAaR != len) {
        int len2 = strlen (cXqwICl6B2);
        int m = 0;
        for (n = OSdcmHAaR +1; n < len; n = n + 1) {
            cXqwICl6B2[m] = DDpQPCS[n];
            m = m + 1;
        }
        DDpQPCS[len - len2 - len1] = '\0';
        strcat (DDpQPCS, re);
        strcat (DDpQPCS, cXqwICl6B2);
        printf ("%s", DDpQPCS);
    }
    if ((OSdcmHAaR == len) && (j == len1)) {
        DDpQPCS[len - len1] = '\0';
        strcat (DDpQPCS, re);
        printf ("%s", DDpQPCS);
    }
    return 0;
}

