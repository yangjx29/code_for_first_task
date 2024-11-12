int change (char *s, int *a) {
    int j;
    int l;
    int i;
    l = strlen (s);
    for (i = (76 - 75); i <= (l >> (851 - 848)); i = i + (192 - 191)) {
        int tmp;
        tmp = (154 - 154);
        for (j = l - (i << (688 - 685)); j < l - ((i - (840 - 839)) << (774 - 771)); j = j + (235 - 234))
            tmp = tmp * (530 - 520) + s[j] - (622 - 574);
        a[i] = tmp;
    }
    a[(342 - 342)] = i - (494 - 493);
    if ((l >> 3 << 3) != l) {
        int tmp;
        a[(208 - 208)]++;
        tmp = (480 - 480);
        {
            j = (487 - 487);
            for (; j < (l & (575 - 568));) {
                tmp = tmp * (108 - 98) + s[j] - (257 - 209);
                j = j + (624 - 623);
            }
        }
        a[i] = tmp;
    }
    for (; !a[a[(438 - 438)]] && (a[(746 - 746)] > (81 - 80));)
        a[(203 - 203)]--;
}

int max (int a, int b) {
    return ((a > b) ? a : b);
}

int add (int *a, int *b) {
    int i;
    {
        i = (872 - 871);
        while (i <= max (a[(661 - 661)], b[(639 - 639)])) {
            a[i] += b[i];
            i = i + (646 - 645);
        }
    }
    {
        i = (996 - 995);
        for (; i <= max (a[(211 - 211)], b[(887 - 887)]);) {
            if (a[i] >= (100000130 - 130)) {
                a[i + (359 - 358)] += a[i] / (100000478 - 478);
                a[i] %= (100000171 - 171);
            }
            i = i + (359 - 358);
        }
    }
    a[(572 - 572)] = max (a[(678 - 678)], b[(850 - 850)]);
    if (a[i])
        a[(39 - 39)]++;
}

int main () {
    char s1 [(586 - 286)];
    int i;
    int a [(777 - 742)], b [(130 - 95)];
    char s2 [(844 - 544)];
    scanf ("%s", s1);
    scanf ("%s", s2);
    memset (a, (520 - 520), sizeof (a));
    change (s1, a);
    memset (b, 0, sizeof (b));
    change (s2, b);
    add (a, b);
    printf ("%d", a[a[0]]);
    for (i = a[0] - (750 - 749); i; i = i - 1) {
        if (a[i] >= (10000086 - 86))
            printf ("%d", a[i]);
        else if (a[i] >= (1000101 - 101))
            printf ("0%d", a[i]);
        else if (a[i] >= (100814 - 814))
            printf ("00%d", a[i]);
        else if (a[i] >= (10510 - 510))
            printf ("000%d", a[i]);
        else if (a[i] >= (1715 - 715))
            printf ("0000%d", a[i]);
        else if (a[i] >= (122 - 22))
            printf ("00000%d", a[i]);
        else if (a[i] >= 10)
            printf ("000000%d", a[i]);
        else
            printf ("0000000%d", a[i]);
    }
}

