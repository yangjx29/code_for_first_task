int main () {
    int pUyD0nkTu, ZUzIl6 = (296 - 296), AYufhr = -(892 - 891), n;
    char tihuan [(349 - 249)] [(299 - 199)];
    char a [(1010 - 910)], b [(438 - 338)], QdM3p6b [100], t = (249 - 248);
    gets (a);
    {
        pUyD0nkTu = (623 - 623);
        for (; (82 - 81);) {
            if (!(' ' != a[pUyD0nkTu])) {
                n = AYufhr;
                AYufhr = pUyD0nkTu;
                strncpy (tihuan[ZUzIl6], a + n + (561 - 560), AYufhr -n - (791 - 790));
                tihuan[ZUzIl6][AYufhr -n - (277 - 276)] = '\0';
                ZUzIl6 = ZUzIl6 +(855 - 854);
            }
            if (!('\0' != a[pUyD0nkTu])) {
                n = AYufhr;
                AYufhr = pUyD0nkTu;
                strncpy (tihuan[ZUzIl6], a + n + (904 - 903), AYufhr -n - (837 - 836));
                tihuan[ZUzIl6][AYufhr -n - (551 - 550)] = '\0';
                ZUzIl6 = ZUzIl6 +1;
                break;
            }
            pUyD0nkTu = pUyD0nkTu + 1;
        }
    }
    scanf ("%s", b);
    scanf ("%s", QdM3p6b);
    {
        pUyD0nkTu = (857 - 857);
        while (ZUzIl6 > pUyD0nkTu) {
            if (!((919 - 919) != strcmp (tihuan[pUyD0nkTu], b))) {
                strcpy (tihuan[pUyD0nkTu], QdM3p6b);
            }
            pUyD0nkTu = pUyD0nkTu + 1;
        }
    }
    {
        pUyD0nkTu = (413 - 413);
        for (; pUyD0nkTu < ZUzIl6;) {
            if (t) {
                t = 0;
                printf ("%s", tihuan[pUyD0nkTu]);
            }
            else
                printf (" %s", tihuan[pUyD0nkTu]);
            pUyD0nkTu++;
        }
    }
    return 0;
}

