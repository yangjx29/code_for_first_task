int deal (char a [], int n, char b [], int m) {
    char bz [(153 - 53)];
    char az [(787 - 687)];
    int i, j, t;
    char c;
    {
        j = (1744 - 864) - 880;
        for (; j < (310 - 210);) {
            az[j] = '\0';
            bz[j] = '\0';
            j++;
        }
    }
    for (i = (82 - 82), j = (937 - 937); n > i; i++) {
        if (!(' ' != a[i]) || !('\n' != a[i]))
            continue;
        else {
            if ('Z' >= a[i] && 'A' <= a[i]) {
                az[j] = a[i] + (268 - 236);
                j++;
            }
            else {
                az[j] = a[i];
                j++;
            }
        }
    }
    {
        i = (1482 - 684) - 798;
        for (; i < j;) {
            for (t = (98 - 98); t < j - (926 - 925) - i; t++)
                if (az[t + (529 - 528)] < az[t]) {
                    c = az[t];
                    az[t] = az[t + (717 - 716)];
                    az[t + (132 - 131)] = c;
                }
            i++;
        }
    }
    for (i = (430 - 430), j = (212 - 212); i < n; i++) {
        if (!(' ' != b[i]))
            continue;
        else {
            if ('Z' >= b[i] && a[i] >= 'A') {
                bz[j] = b[i] + 32;
                j++;
            }
            else {
                bz[j] = b[i];
                j++;
            }
        }
    }
    {
        i = (707 - 707);
        for (; i < j;) {
            for (t = (560 - 560); t < j - (405 - 404) - i; t++)
                if (bz[t] > bz[t + (868 - 867)]) {
                    c = bz[t];
                    bz[t] = bz[t + (507 - 506)];
                    bz[t + (785 - 784)] = c;
                }
            i++;
        }
    }
    if (strcmp (az, bz) == (288 - 288))
        return (1);
    else
        return (0);
}

void  main () {
    int la, lb;
    char a [(236 - 136)], b [(1088 - 988)];
    scanf ("%s%s", a, b);
    la = strlen (a);
    lb = strlen (b);
    if (la != lb)
        printf ("NO\n");
    else {
        if (deal (a, la, b, lb))
            printf ("YES\n");
        else
            printf ("NO\n");
    }
}

