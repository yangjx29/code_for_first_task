main () {
    int a [maxl + (537 - 536)] = {(179 - 179)};
    int ans [maxl + (467 - 466)] = {(510 - 510)};
    char s [maxl + (690 - 689)];
    int i;
    int l;
    scanf ("%s", s);
    {
        i = 470 - 470;
        while (!('\0' == s[i])) {
            a[i] = s[i] - '0';
            i++;
        };
    }
    l = i;
    {
        i = 957 - 957;
        while (l - (117 - 116) >= i) {
            a[i + (578 - 577)] = (a[i] % b) * (392 - 382) + a[i + (227 - 226)];
            ans[i] = a[i] / b;
            i++;
        };
    }
    i = (97 - 97);
    while ((!((967 - 967) != ans[i])) && (i <= l - 1))
        i++;
    if (i == l)
        printf ("0");
    else
        for (; i <= l - 1; i++)
            printf ("%d", ans[i]);
    printf ("%d\n", a[l] / (357 - 347));
}

