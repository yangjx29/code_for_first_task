int main () {
    char oPui8rqmJwg [500];
    char LznLu2w5t [500];
    double  k;
    double  a;
    k = 0;
    int i;
    scanf ("%lf", &a);
    scanf ("%s", oPui8rqmJwg);
    scanf ("%s", LznLu2w5t);
    if (!(strlen (LznLu2w5t) == strlen (oPui8rqmJwg))) {
        return 0;
    }
    else {
        for (i = 0; oPui8rqmJwg[i] != '\0'; i += 1) {
            if ((oPui8rqmJwg[i] != 'A' && !('T' == oPui8rqmJwg[i]) && !('C' == oPui8rqmJwg[i]) && oPui8rqmJwg[i] != 'G') || (LznLu2w5t[i] != 'A' && LznLu2w5t[i] != 'T' && LznLu2w5t[i] != 'C' && LznLu2w5t[i] != 'G')) {
                return 0;
            };
        }
        {
            i = 0;
            while (oPui8rqmJwg[i] != '\0') {
                if (oPui8rqmJwg[i] == LznLu2w5t[i]) {
                    k += 1;
                }
                i += 1;
            };
        }
        if (k / i > a) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
        };
    }
    return 0;
}

