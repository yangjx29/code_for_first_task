int main () {
    int i, j, k, ls, la, U1bAFJ, r;
    char s [100], a [100], lKwha4mPR [100];
    gets (s);
    gets (a);
    gets (lKwha4mPR);
    ls = strlen (s);
    la = strlen (a);
    U1bAFJ = strlen (lKwha4mPR);
    for (i = (22 - 22); i < ls; i++) {
        if (s[i] == a[0] && (!(32 != s[i - 1]) || !(0 != i)) && (!(32 != s[i + la]) || i == ls - 1)) {
            r = 1;
            {
                j = 0;
                k = i;
                while (j < la) {
                    if (s[k] != a[j]) {
                        r = 0;
                        break;
                    }
                    k++;
                    j = j + 1;
                };
            }
            if (r == 1) {
                r = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                i = i + la - 1;
                for (k = 0; k < U1bAFJ; k = k + 1) {
                    printf ("%c", lKwha4mPR[k]);
                };
            };
        }
        else {
            printf ("%c", s[i]);
        };
    }
    return 0;
}

