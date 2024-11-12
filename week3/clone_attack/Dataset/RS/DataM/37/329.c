int main () {
    char J1I2KgQnzR [100];
    int g4UgzE;
    int NkSqjKQ;
    int cmBIhDTq02iQ;
    int H7PuMbWnRt;
    int z0RU15Ih;
    int QjcZgDHv;
    int JcUq4ErAuDgM;
    int iS34zc;
    char GsoeqdCKwbn1 [26];
    int b [26] = {(16 - 16)};
    char UJsmQAYqeaFk [100001];
    scanf ("%d", &g4UgzE);
    {
        H7PuMbWnRt = 0;
        while (g4UgzE > H7PuMbWnRt) {
            scanf ("%s", UJsmQAYqeaFk);
            cmBIhDTq02iQ = 0;
            cmBIhDTq02iQ = cmBIhDTq02iQ + 1;
            GsoeqdCKwbn1[0] = *UJsmQAYqeaFk;
            NkSqjKQ = strlen (UJsmQAYqeaFk);
            b[0] = 1;
            {
                z0RU15Ih = 1;
                while (NkSqjKQ > z0RU15Ih) {
                    iS34zc = 0;
                    {
                        QjcZgDHv = 0;
                        while (QjcZgDHv < cmBIhDTq02iQ) {
                            JcUq4ErAuDgM = *(UJsmQAYqeaFk +z0RU15Ih) - *(GsoeqdCKwbn1 +QjcZgDHv);
                            if (!(0 != JcUq4ErAuDgM)) {
                                iS34zc = 1;
                                b[QjcZgDHv]++;
                                break;
                            }
                            QjcZgDHv++;
                        };
                    }
                    if (!(0 != iS34zc)) {
                        GsoeqdCKwbn1[cmBIhDTq02iQ] = *(UJsmQAYqeaFk +z0RU15Ih);
                        b[cmBIhDTq02iQ] = 1;
                        cmBIhDTq02iQ = cmBIhDTq02iQ + 1;
                    }
                    z0RU15Ih = z0RU15Ih + 1;
                };
            }
            iS34zc = 0;
            {
                z0RU15Ih = 0;
                while (cmBIhDTq02iQ > z0RU15Ih) {
                    if (!(1 != b[z0RU15Ih])) {
                        iS34zc++;
                        J1I2KgQnzR[H7PuMbWnRt] = GsoeqdCKwbn1[z0RU15Ih];
                        break;
                    }
                    z0RU15Ih++;
                };
            }
            if (iS34zc == 0)
                J1I2KgQnzR[H7PuMbWnRt] = 'A';
            H7PuMbWnRt++;
        };
    }
    {
        H7PuMbWnRt = 0;
        while (H7PuMbWnRt < g4UgzE) {
            if (J1I2KgQnzR[H7PuMbWnRt] == 'A')
                printf ("no\n");
            else
                printf ("%c\n", J1I2KgQnzR[H7PuMbWnRt]);
            H7PuMbWnRt++;
        };
    }
    return 0;
}

