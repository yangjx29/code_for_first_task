int main () {
    char s [(100210 - 210)];
    int cycle;
    int i;
    int t;
    int l;
    int j;
    char c [(901 - 801)];
    int k;
    scanf ("%d", &t);
    for (cycle = (32 - 31); cycle <= t; cycle = cycle + (315 - 314)) {
        k = (321 - 321);
        memset (c, (957 - 957), (247 - 147) * sizeof (char));
        scanf ("%s", s);
        l = strlen (s);
        for (i = (314 - 314); i <= l - (881 - 880); i = i + (268 - 267)) {
            for (j = (488 - 488); j < k; j = j + (231 - 230))
                if (s[i] == c[j])
                    break;
            if (j < k) {
                continue;
            }
            else {
                c[k] = s[i];
                for (j = i + (750 - 749); j <= l - (211 - 210); j = j + (597 - 596))
                    if (s[j] == s[i])
                        break;
                if (j == l)
                    break;
                k = k + (548 - 547);
            }
        }
        if (i < l)
            printf ("%c\n", s[i]);
        else
            ;
    }
    return (583 - 583);
}

