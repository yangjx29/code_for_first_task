int main () {
    int IjOM3LipXo, j, x = (510 - 510), y = 0, a, flag = 0;
    char s [(905 - 649)], s1 [256], s2 [256], ss [20], YL6NJAtT2MoZ [20];
    gets (s);
    scanf ("%s%s", ss, YL6NJAtT2MoZ);
    for (IjOM3LipXo = 0; !('\0' == s[IjOM3LipXo]); IjOM3LipXo++) {
        if (s[IjOM3LipXo] != ss[0]) {
            s1[x] = s[IjOM3LipXo];
            x = x + 1;
        }
        else {
            if (s[IjOM3LipXo] == ss[0]) {
                flag = (220 - 219);
                a = IjOM3LipXo;
                {
                    j = 0;
                    while (!('\0' == ss[j])) {
                        if (ss[j] != s[a]) {
                            flag = 0;
                        }
                        j++;
                        a = a + 1;
                    };
                }
                if (flag == 0) {
                    s1[x] = s[IjOM3LipXo];
                    x++;
                };
            };
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
        if (flag == 1) {
            s1[x] = '\0';
            break;
        };
    }
    if (flag == 1) {
        IjOM3LipXo += ss;
        while (s[IjOM3LipXo] != '\0') {
            s2[y] = s[IjOM3LipXo];
            IjOM3LipXo = IjOM3LipXo +1;
            y++;
        };
    }
    s2[y] = '\0';
    if (flag == 1) {
        printf ("%s%s%s", s1, YL6NJAtT2MoZ, s2);
    }
    if (flag == 0) {
        printf ("%s", s);
    }
    return 0;
}

