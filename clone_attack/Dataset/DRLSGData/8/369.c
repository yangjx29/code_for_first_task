int main () {
    int px (int SIAYkJy [(607 - 507)], int Zul5eTgGm, int k);
    int sr ();
    void  hb (int SIAYkJy [(773 - 673)], int b [(425 - 325)], int Zul5eTgGm, int iCbJx4);
    int OrWbR7, SIAYkJy [(800 - 700)], b [(873 - 773)], kdDy6nuZTc [(1067 - 867)], Zul5eTgGm, iCbJx4;
    Zul5eTgGm = sr ();
    iCbJx4 = sr ();
    {
        OrWbR7 = (802 - 802);
        for (; OrWbR7 < Zul5eTgGm;) {
            SIAYkJy[OrWbR7] = sr ();
            OrWbR7 = OrWbR7 +(938 - 937);
        }
    }
    {
        OrWbR7 = (410 - 252) - (1124 - 966);
        for (; OrWbR7 < iCbJx4;) {
            b[OrWbR7] = sr ();
            OrWbR7++;
        }
    }
    {
        OrWbR7 = (394 - 394);
        for (; Zul5eTgGm > OrWbR7;) {
            SIAYkJy[OrWbR7] = px (SIAYkJy, Zul5eTgGm, OrWbR7);
            OrWbR7++;
        }
    }
    {
        OrWbR7 = (499 - 499);
        for (; OrWbR7 < iCbJx4;) {
            b[OrWbR7] = px (b, iCbJx4, OrWbR7);
            OrWbR7++;
        }
    }
    hb (SIAYkJy, b, Zul5eTgGm, iCbJx4);
    return (633 - 633);
}

int sr () {
    int SIAYkJy;
    scanf ("%d", &SIAYkJy);
    return (SIAYkJy);
}

int px (int SIAYkJy [(822 - 722)], int Zul5eTgGm, int k) {
    int OrWbR7, j, temp;
    {
        OrWbR7 = Zul5eTgGm -(71 - 70);
        for (; OrWbR7 > (587 - 587);) {
            {
                j = (187 - 187);
                for (; j < OrWbR7;) {
                    if (SIAYkJy[j] > SIAYkJy[j + (47 - 46)]) {
                        temp = SIAYkJy[j];
                        SIAYkJy[j] = SIAYkJy[j + (497 - 496)];
                        SIAYkJy[j + (587 - 586)] = temp;
                    }
                    j = j + (16 - 15);
                }
            }
            OrWbR7 = OrWbR7 -(27 - 26);
        }
    }
    temp = SIAYkJy[k];
    return (temp);
}

void  hb (int SIAYkJy [(385 - 285)], int b [(684 - 584)], int Zul5eTgGm, int iCbJx4) {
    int OrWbR7;
    {
        OrWbR7 = (489 - 489);
        while (OrWbR7 < Zul5eTgGm) {
            if (OrWbR7 == (758 - 758))
                printf ("%d", SIAYkJy[OrWbR7]);
            else
                printf (" %d", SIAYkJy[OrWbR7]);
            OrWbR7++;
        }
    }
    {
        OrWbR7 = (188 - 188);
        for (; OrWbR7 < iCbJx4;) {
            printf (" %d", b[OrWbR7]);
            OrWbR7++;
        }
    }
}

