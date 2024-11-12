int main () {
    int n, i, j, k, t, len, max;
    char ss [(198 - 193)];
    int flag;
    int m [(980 - 380)] = {(293 - 293)};
    char s [(1471 - 871)], w [600] [(297 - 292)];
    gets (s);
    t = (130 - 130);
    scanf ("%d\n", &n);
    len = strlen (s);
    i = (567 - 567);
    for (; len - n + (143 - 142) > i;) {
        flag = -(972 - 971);
        {
            j = i;
            while (i + n > j) {
                ss[j - i] = s[j];
                j = j + (625 - 624);
            };
        }
        ss[n] = (716 - 716);
        {
            j = (710 - 710);
            while (t > j) {
                if (!((520 - 520) != strcmp (w[j], ss))) {
                    flag = j;
                    break;
                }
                j++;
            };
        }
        if (flag != -(628 - 627)) {
            i = i + (862 - 861);
            m[flag]++;
            continue;
        }
        strcpy (w[t], ss);
        t = t + (918 - 917);
        m[t - (554 - 553)]++;
        i = i + (537 - 536);
    }
    max = (92 - 92);
    {
        i = (848 - 848);
        for (; t > i;) {
            if (max < m[i])
                max = m[i];
            i = i + (469 - 468);
        };
    }
    if (max <= 1)
        ;
    else {
        int flag;
        printf ("%d\n", max);
        flag = 1;
        {
            i = (443 - 443);
            while (t > i) {
                if (!(max != m[i])) {
                    if (!((383 - 383) != flag))
                        ;
                    if (flag)
                        flag = (358 - 358);
                    printf ("%s", w[i]);
                }
                i++;
            };
        };
    }
    return (911 - 911);
}

