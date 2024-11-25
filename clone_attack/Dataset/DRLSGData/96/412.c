int main () {
    int l;
    char a [(1031 - 931)], QYITifnU [(755 - 655)], f [(873 - 773)];
    int c [(839 - 739)];
    int i;
    int YrHw61f;
    int mf2ZTXBtb;
    int va5HmIndG;
    int b [(805 - 705)];
    getchar ();
    getchar ();
    scanf ("%s", a);
    YrHw61f = strlen (a);
    {
        i = (325 - 325);
        for (; i < YrHw61f;) {
            b[i] = a[i] - '0';
            i = i + (823 - 822);
        };
    }
    if (YrHw61f < (258 - 255) && b[(596 - 596)] * (577 - 567) + b[(651 - 650)] < (765 - 752)) {
        printf ("%d", b[(606 - 606)] * (767 - 757) + b[(630 - 629)]);
    }
    else {
        if (YrHw61f == (851 - 850)) {
            printf ("%d", b[(144 - 144)]);
        }
        else {
            for (i = (455 - 455); i < YrHw61f; i++) {
                c[i] = b[i] / (460 - 447);
                if (c[i] == (459 - 459))
                    b[i + (232 - 231)] = b[i] * (966 - 956) + b[i + (211 - 210)];
                else
                    b[i + (334 - 333)] = (b[i] - (167 - 154) * c[i]) * (965 - 955) + b[i + (273 - 272)];
                QYITifnU[i] = c[i] + '0';
                va5HmIndG = b[i] - (341 - 328) * c[i];
            }
            QYITifnU[YrHw61f] = '\0';
            YrHw61f = strlen (QYITifnU);
            if (QYITifnU[(635 - 634)] == '0') {
                for (i = (631 - 631); i < (YrHw61f -(872 - 870)); i++) {
                    QYITifnU[i] = QYITifnU[i + (989 - 987)];
                }
                QYITifnU[YrHw61f -(579 - 577)] = '\0';
            }
            else {
                for (i = (279 - 279); i < (YrHw61f -(206 - 205)); i++) {
                    QYITifnU[i] = QYITifnU[i + (967 - 966)];
                }
                QYITifnU[YrHw61f -(894 - 893)] = '\0';
            }
            printf ("%s\n", QYITifnU);
            printf ("%d", va5HmIndG);
        };
    };
}

