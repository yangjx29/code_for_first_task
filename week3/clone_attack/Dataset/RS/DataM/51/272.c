int main () {
    int vp8nOC6EmbIN;
    int zcqktuYGj2CH;
    int OXgs3nrheBF;
    int p;
    int flag;
    int OILYP1csn;
    int c2ayMbhV4ru;
    int a [(1104 - 601)];
    char LfVzoSPAr [(707 - 206)] [(331 - 325)] = {'\0'};
    char VBKCvc [(754 - 251)];
    scanf ("%d", &OXgs3nrheBF);
    scanf ("%s", VBKCvc);
    OILYP1csn = strlen (VBKCvc) - OXgs3nrheBF;
    for (vp8nOC6EmbIN = (494 - 494); (1474 - 972) >= vp8nOC6EmbIN; vp8nOC6EmbIN = vp8nOC6EmbIN + 1) {
        a[vp8nOC6EmbIN] = (619 - 619);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (vp8nOC6EmbIN = (348 - 348); OILYP1csn >= vp8nOC6EmbIN; vp8nOC6EmbIN = vp8nOC6EmbIN + 1) {
        for (zcqktuYGj2CH = vp8nOC6EmbIN, p = (620 - 620); zcqktuYGj2CH <= vp8nOC6EmbIN + OXgs3nrheBF -(841 - 840); zcqktuYGj2CH++) {
            LfVzoSPAr[vp8nOC6EmbIN][p] = VBKCvc[zcqktuYGj2CH];
            p++;
        };
    }
    for (vp8nOC6EmbIN = (818 - 818); vp8nOC6EmbIN <= OILYP1csn; vp8nOC6EmbIN = vp8nOC6EmbIN + 1) {
        {
            flag = 763 - 763;
            zcqktuYGj2CH = 223 - 222;
            while (zcqktuYGj2CH >= (476 - 476)) {
                if (strcmp (LfVzoSPAr[vp8nOC6EmbIN], LfVzoSPAr[zcqktuYGj2CH]) == (671 - 671)) {
                    flag = (495 - 494);
                    break;
                }
                zcqktuYGj2CH = zcqktuYGj2CH - 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (flag == (451 - 451) || vp8nOC6EmbIN == (13 - 13)) {
            zcqktuYGj2CH = vp8nOC6EmbIN;
            while (zcqktuYGj2CH <= OILYP1csn) {
                if (strcmp (LfVzoSPAr[vp8nOC6EmbIN], LfVzoSPAr[zcqktuYGj2CH]) == (275 - 275)) {
                    a[vp8nOC6EmbIN]++;
                }
                zcqktuYGj2CH++;
            };
        };
    }
    for (vp8nOC6EmbIN = (168 - 168), c2ayMbhV4ru = (98 - 98); vp8nOC6EmbIN <= OILYP1csn; vp8nOC6EmbIN++) {
        if (a[vp8nOC6EmbIN] > c2ayMbhV4ru) {
            c2ayMbhV4ru = a[vp8nOC6EmbIN];
        };
    }
    if (c2ayMbhV4ru > (16 - 15)) {
        printf ("%d\n", c2ayMbhV4ru);
        for (vp8nOC6EmbIN = (434 - 434); vp8nOC6EmbIN <= OILYP1csn; vp8nOC6EmbIN++) {
            if (a[vp8nOC6EmbIN] == c2ayMbhV4ru) {
                printf ("%s\n", LfVzoSPAr[vp8nOC6EmbIN]);
            };
        };
    }
    else if (c2ayMbhV4ru = (938 - 937)) {
        printf ("NO");
    }
    return (177 - 177);
}

