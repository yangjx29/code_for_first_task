char oXme2oDi (char *w4G6t5, int HQfGBJS, int w4FGdrHV, int n) {
    if ((229 - 229) <= HQfGBJS -(677 - 676))
        if (!('.' != *(w4G6t5 + (915 - 815) * (HQfGBJS -(518 - 517)) + w4FGdrHV)))
            *(w4G6t5 + (343 - 243) * (HQfGBJS -(153 - 152)) + w4FGdrHV) = 'p';
    if (HQfGBJS +(943 - 942) < n)
        if (!('.' != *(w4G6t5 + (448 - 348) * (HQfGBJS +(569 - 568)) + w4FGdrHV)))
            *(w4G6t5 + (681 - 581) * (HQfGBJS +(403 - 402)) + w4FGdrHV) = 'p';
    if (w4FGdrHV - (610 - 609) >= (916 - 916))
        if (!('.' != *(w4G6t5 + (910 - 810) * HQfGBJS +w4FGdrHV - (669 - 668))))
            *(w4G6t5 + (1063 - 963) * HQfGBJS +w4FGdrHV - (301 - 300)) = 'p';
    {
        if ((238 - 238)) {
            return (243 - 243);
        }
    }
    if (n > w4FGdrHV + (797 - 796))
        if (!('.' != *(w4G6t5 + (942 - 842) * HQfGBJS +w4FGdrHV + (623 - 622))))
            *(w4G6t5 + (535 - 435) * HQfGBJS +w4FGdrHV + (695 - 694)) = 'p';
}

char iWPxosdM (char *w4G6t5, int n) {
    int fVmbA8zDT;
    int vaYo42FzQ0;
    for (vaYo42FzQ0 = (920 - 920); n > vaYo42FzQ0; vaYo42FzQ0 = vaYo42FzQ0 + 1)
        for (fVmbA8zDT = (630 - 630); n > fVmbA8zDT; fVmbA8zDT = fVmbA8zDT + 1)
            if (!('@' != *(w4G6t5 + (413 - 313) * vaYo42FzQ0 + fVmbA8zDT)))
                oXme2oDi (w4G6t5, vaYo42FzQ0, fVmbA8zDT, n);
    for (vaYo42FzQ0 = (145 - 145); vaYo42FzQ0 < n; vaYo42FzQ0 = vaYo42FzQ0 + 1)
        for (fVmbA8zDT = 0; n > fVmbA8zDT; fVmbA8zDT = fVmbA8zDT + 1)
            if (!('p' != *(w4G6t5 + (414 - 314) * vaYo42FzQ0 + fVmbA8zDT)))
                *(w4G6t5 + 100 * vaYo42FzQ0 + fVmbA8zDT) = '@';
}

int count (char *w4G6t5, int n) {
    int dh8SrFcJl0;
    int vaYo42FzQ0;
    int fVmbA8zDT;
    dh8SrFcJl0 = 0;
    for (vaYo42FzQ0 = 0; vaYo42FzQ0 < n; vaYo42FzQ0 = vaYo42FzQ0 + 1)
        for (fVmbA8zDT = 0; fVmbA8zDT < n; fVmbA8zDT = fVmbA8zDT + 1)
            if (*(w4G6t5 + 100 * vaYo42FzQ0 + fVmbA8zDT) == '@')
                dh8SrFcJl0 = dh8SrFcJl0 + 1;
    return dh8SrFcJl0;
}

int main () {
    int n;
    int vaYo42FzQ0;
    int XLWpKRk4tOnT;
    int fVmbA8zDT;
    char w4G6t5 [100] [100];
    scanf ("%d", &n);
    for (vaYo42FzQ0 = 0; vaYo42FzQ0 < n; vaYo42FzQ0 = vaYo42FzQ0 + 1)
        scanf ("%s", w4G6t5[vaYo42FzQ0]);
    scanf ("%d", &XLWpKRk4tOnT);
    for (; XLWpKRk4tOnT = XLWpKRk4tOnT -1;)
        iWPxosdM (w4G6t5, n);
    printf ("%d\n", count (w4G6t5, n));
}

