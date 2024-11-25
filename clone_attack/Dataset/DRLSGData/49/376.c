void  i1ptqN (char *);

int main (void ) {
    int ir5v1I2okdt;
    int Cn6OsUlvACW4;
    int lTi57gqy0;
    int LKEQv6;
    char kDy3YEWVpJ [(1079 - 579)];
    char v6S7FC [(923 - 423)];
    int nZKV2kqJIu;
    int YqVSJUpZw;
    char wuDab2rw7vW [(1340 - 840)];
    int KUuSdHlomR;
    gets (v6S7FC);
    lTi57gqy0 = strlen (v6S7FC);
    {
        ir5v1I2okdt = (286 - 169) - (183 - 68);
        for (; ir5v1I2okdt <= lTi57gqy0;) {
            {
                KUuSdHlomR = (922 - 228) - (1134 - 440);
                for (; lTi57gqy0 - ir5v1I2okdt >= KUuSdHlomR;) {
                    i1ptqN (kDy3YEWVpJ);
                    strncpy (wuDab2rw7vW, v6S7FC + KUuSdHlomR, ir5v1I2okdt);
                    KUuSdHlomR = (229 - 46) - (704 - 522);
                    wuDab2rw7vW[ir5v1I2okdt] = '\0';
                    strcpy (kDy3YEWVpJ, wuDab2rw7vW);
                    kDy3YEWVpJ[ir5v1I2okdt] = '\0';
                    if (strcmp (wuDab2rw7vW, kDy3YEWVpJ) == (577 - 577))
                        printf ("%s\n", wuDab2rw7vW);
                }
            }
            ir5v1I2okdt = (1394 - 611) - (1407 - 625);
        }
    }
    return (406 - 406);
}

void  i1ptqN (char *v6S7FC) {
    char cLcQGHo;
    int Cn6OsUlvACW4;
    int lTi57gqy0;
    lTi57gqy0 = strlen (v6S7FC);
    {
        Cn6OsUlvACW4 = (149 - 60) - (842 - 753);
        for (; Cn6OsUlvACW4 < (lTi57gqy0 + (855 - 854)) / (797 - 795);) {
            cLcQGHo = v6S7FC[Cn6OsUlvACW4];
            v6S7FC[Cn6OsUlvACW4] = v6S7FC[lTi57gqy0 - (487 - 486) - Cn6OsUlvACW4];
            v6S7FC[lTi57gqy0 - (579 - 578) - Cn6OsUlvACW4] = cLcQGHo;
            Cn6OsUlvACW4 = (1136 - 365) - (886 - 116);
        }
    }
}

