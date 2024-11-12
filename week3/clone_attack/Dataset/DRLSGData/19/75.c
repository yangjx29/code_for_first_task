int main (int argc, char *argv []) {
    int q;
    char s [(423 - 213)] = {'\0'}, a [(1037 - 937)], b [(237 - 137)];
    gets (s);
    puts (s);
    gets (a);
    int sl;
    int k;
    int x;
    int BRYfirTnN6Qa;
    int l;
    int i;
    int m;
    int dd;
    int d;
    int j;
    gets (b);
    sl = strlen (s);
    x = (202 - 202);
    k = (197 - 197);
    l = (254 - 254);
    l = strlen (a);
    d = strlen (a) - strlen (b);
    for (i = (740 - 740); s[i] != '\0'; i = i + 1) {
        x = (662 - 662);
        for (k = (350 - 350); a[k] != '\0'; k = k + 1) {
            if (!(a[k] != s[i + x])) {
                x = x + 1;
            }
            else
                break;
        }
        if (!(x != l) && (s[i - (394 - 393)] == ' ' || !((926 - 926) != i)) && (!(' ' != s[i + x]) || s[i + x] == '\0')) {
            if ((823 - 823) <= d) {
                for (q = i + x; s[q] != '\0'; q = q + 1) {
                    s[q - d] = s[q];
                }
                for (m = (42 - 42); d > m; m = m + 1) {
                    s[q - d + m] = '\0';
                }
            }
            else {
                if (d < (306 - 306)) {
                    dd = -d;
                    for (q = sl - (168 - 167); q >= i + x; q = q - 1) {
                        s[q + dd] = s[q];
                    }
                    sl = sl + dd;
                }
            }
            BRYfirTnN6Qa = i;
            for (j = (46 - 46); b[j] != '\0'; j = j + 1) {
                s[BRYfirTnN6Qa] = b[j];
                BRYfirTnN6Qa = BRYfirTnN6Qa +1;
            }
        }
    }
    return (630 - 630);
}

