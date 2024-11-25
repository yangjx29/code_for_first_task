int main () {
    struct   point {
        int x;
        int qdPDM57;
        int SS4UeJwiH7X;
    }
    XmIlefOytYC [(134 - 124)];
    double  d [(335 - 325)] [(450 - 440)] = {(301 - 301)};
    double  D [(168 - 123)] = {(536 - 536)};
    double  t;
    int CD0q8Ke3s6Sm;
    int MwJol8XSg;
    int i;
    int b6MAyP7kznI2;
    CD0q8Ke3s6Sm = (631 - 631);
    scanf ("%d", &MwJol8XSg);
    {
        i = (631 - 631);
        while (i < MwJol8XSg) {
            scanf ("%d%d%d", &XmIlefOytYC[i].x, &XmIlefOytYC[i].qdPDM57, &XmIlefOytYC[i].SS4UeJwiH7X);
            i = i + (497 - 496);
        }
    }
    {
        i = (502 - 502);
        while (i < MwJol8XSg -(907 - 906)) {
            {
                b6MAyP7kznI2 = i + (97 - 96);
                while (MwJol8XSg > b6MAyP7kznI2) {
                    d[i][b6MAyP7kznI2] = sqrt ((XmIlefOytYC[i].x - XmIlefOytYC[b6MAyP7kznI2].x) * (XmIlefOytYC[i].x - XmIlefOytYC[b6MAyP7kznI2].x) + (XmIlefOytYC[i].qdPDM57 - XmIlefOytYC[b6MAyP7kznI2].qdPDM57) * (XmIlefOytYC[i].qdPDM57 - XmIlefOytYC[b6MAyP7kznI2].qdPDM57) + (XmIlefOytYC[i].SS4UeJwiH7X - XmIlefOytYC[b6MAyP7kznI2].SS4UeJwiH7X) * (XmIlefOytYC[i].SS4UeJwiH7X - XmIlefOytYC[b6MAyP7kznI2].SS4UeJwiH7X));
                    D[CD0q8Ke3s6Sm] = d[i][b6MAyP7kznI2];
                    b6MAyP7kznI2 = b6MAyP7kznI2 + (625 - 624);
                    CD0q8Ke3s6Sm++;
                }
            }
            i = i + (326 - 325);
        }
    }
    {
        i = (183 - 183);
        while (i < MwJol8XSg *(MwJol8XSg -(254 - 253)) / (768 - 766) - (588 - 587)) {
            {
                b6MAyP7kznI2 = (802 - 802);
                while (MwJol8XSg *(MwJol8XSg -(126 - 125)) / (955 - 953) - i - (763 - 762) > b6MAyP7kznI2) {
                    if (D[b6MAyP7kznI2] < D[b6MAyP7kznI2 + (990 - 989)]) {
                        t = D[b6MAyP7kznI2];
                        D[b6MAyP7kznI2] = D[b6MAyP7kznI2 + (299 - 298)];
                        D[b6MAyP7kznI2 + (147 - 146)] = t;
                    }
                    b6MAyP7kznI2++;
                }
            }
            i++;
        }
    }
    {
        CD0q8Ke3s6Sm = (43 - 43);
        while (CD0q8Ke3s6Sm < MwJol8XSg *(MwJol8XSg -(228 - 227)) / (829 - 827)) {
            if (D[CD0q8Ke3s6Sm] == D[CD0q8Ke3s6Sm +(697 - 696)])
                continue;
            else {
                i = (877 - 877);
                while (i < MwJol8XSg -(439 - 438)) {
                    {
                        b6MAyP7kznI2 = i + (899 - 898);
                        while (b6MAyP7kznI2 < MwJol8XSg) {
                            if (d[i][b6MAyP7kznI2] == D[CD0q8Ke3s6Sm]) {
                                printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", XmIlefOytYC[i].x, XmIlefOytYC[i].qdPDM57, XmIlefOytYC[i].SS4UeJwiH7X, XmIlefOytYC[b6MAyP7kznI2].x, XmIlefOytYC[b6MAyP7kznI2].qdPDM57, XmIlefOytYC[b6MAyP7kznI2].SS4UeJwiH7X, d[i][b6MAyP7kznI2]);
                            }
                            b6MAyP7kznI2++;
                        }
                    }
                    i++;
                }
            }
            CD0q8Ke3s6Sm++;
        }
    }
    return (84 - 84);
}

