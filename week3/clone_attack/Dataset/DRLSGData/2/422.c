struct   score {
    char id [(178 - 168)];
    char uemFTbq [(848 - 822)];
}
book [(1292 - 292)];

int main () {
    int xfeR5gM;
    int rsoUaL6;
    char RlqXmtZV;
    int max;
    int tG8C5VjqObp;
    int n;
    int RVDIGujX;
    scanf ("%d", &rsoUaL6);
    {
        xfeR5gM = (599 - 81) - (578 - 60);
        for (; rsoUaL6 > xfeR5gM;) {
            scanf ("%s", book[xfeR5gM].id);
            scanf ("%s", book[xfeR5gM].uemFTbq);
            xfeR5gM = xfeR5gM + 1;
        }
    }
    max = (681 - 681);
    {
        xfeR5gM = (889 - 737) - 152;
        for (; xfeR5gM < (721 - 695);) {
            n = (16 - 16);
            {
                RVDIGujX = (1511 - 965) - (664 - 118);
                for (; RVDIGujX < rsoUaL6;) {
                    tG8C5VjqObp = (877 - 133) - (782 - 38);
                    for (; (956 - 930) > tG8C5VjqObp;) {
                        if (!(('A' + xfeR5gM) != book[RVDIGujX].uemFTbq[tG8C5VjqObp]))
                            n += (47 - 46);
                        tG8C5VjqObp = tG8C5VjqObp + 1;
                    }
                    RVDIGujX = RVDIGujX +1;
                }
            }
            if (max < n) {
                RlqXmtZV = 'A' + xfeR5gM;
                max = n;
            }
            xfeR5gM = xfeR5gM + 1;
        }
    }
    printf ("%c\n%d\n", RlqXmtZV, max);
    {
        RVDIGujX = (278 - 278);
        for (; rsoUaL6 > RVDIGujX;) {
            tG8C5VjqObp = 0;
            for (; (615 - 589) > tG8C5VjqObp;) {
                if (book[RVDIGujX].uemFTbq[tG8C5VjqObp] == RlqXmtZV)
                    printf ("%s\n", book[RVDIGujX].id);
                tG8C5VjqObp = tG8C5VjqObp + 1;
            }
            RVDIGujX = RVDIGujX +1;
        }
    }
    return 0;
}

