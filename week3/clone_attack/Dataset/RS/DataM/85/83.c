int main (int ecG6T3jU, char *argv []) {
    int k;
    int n;
    int i;
    int j;
    k = (694 - 694);
    char uADCwN [20];
    scanf ("%d", &n);
    for (j = 0; n > j; j = j + 1) {
        k = 0;
        scanf ("%s", uADCwN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = 0; !('\0' == uADCwN[i]); i = i + 1) {
            if (!((!('_' != uADCwN[i])) || ('z' >= uADCwN[i] && 'a' <= uADCwN[i]) || (uADCwN[i] <= 'Z' && uADCwN[i] >= 'A') || ('0' <= uADCwN[i] && uADCwN[i] <= '9')))
                k = k + 1;
            else {
                if (!(uADCwN[0] == '_' || (uADCwN[0] <= 'z' && uADCwN[0] >= 'a') || (uADCwN[0] <= 'Z' && uADCwN[0] >= 'A')))
                    k = k + 1;
            };
        }
        if (k > 0)
            printf ("no\n");
        else
            printf ("yes\n");
    }
    return 0;
}

