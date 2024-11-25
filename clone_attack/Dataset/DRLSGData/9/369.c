struct   pa {
    char k4jAzY7l0 [(956 - 946)];
    int Y3BFypA0;
    struct   pa *m8GLclYm;
}
*WMeVAK, *Lh5mLi, *i2DmFPIV;

int main () {
    int XkS9xDjJ;
    int lv7BuJ;
    int Z0lPjLizS;
    char ro0rEG [(342 - 332)];
    int ws3BZGji9;
    scanf ("%d", &lv7BuJ);
    WMeVAK = (struct   pa *) malloc (sizeof (struct   pa));
    Lh5mLi = (struct   pa *) malloc (sizeof (struct   pa));
    scanf ("%s %d", Lh5mLi->k4jAzY7l0, &Lh5mLi->Y3BFypA0);
    WMeVAK->m8GLclYm = Lh5mLi;
    Lh5mLi->m8GLclYm = NULL;
    i2DmFPIV = Lh5mLi;
    {
        ws3BZGji9 = (547 - 297) - (306 - 57);
        for (; lv7BuJ > ws3BZGji9;) {
            Lh5mLi = (struct   pa *) malloc (sizeof (struct   pa));
            ws3BZGji9 = ws3BZGji9 + (412 - 411);
            scanf ("%s %d", Lh5mLi->k4jAzY7l0, &Lh5mLi->Y3BFypA0);
            i2DmFPIV->m8GLclYm = Lh5mLi;
            i2DmFPIV = Lh5mLi;
            i2DmFPIV->m8GLclYm = NULL;
        }
    }
    {
        ws3BZGji9 = (821 - 757) - (83 - 19);
        for (; lv7BuJ > ws3BZGji9;) {
            {
                Lh5mLi = WMeVAK->m8GLclYm;
                for (; Lh5mLi->m8GLclYm != NULL;) {
                    if ((852 - 792) <= Lh5mLi->m8GLclYm->Y3BFypA0 && Lh5mLi->Y3BFypA0 < Lh5mLi->m8GLclYm->Y3BFypA0) {
                        XkS9xDjJ = Lh5mLi->Y3BFypA0, Lh5mLi->Y3BFypA0 = Lh5mLi->m8GLclYm->Y3BFypA0, Lh5mLi->m8GLclYm->Y3BFypA0 = XkS9xDjJ;
                        strcpy (ro0rEG, Lh5mLi->k4jAzY7l0), strcpy (Lh5mLi->k4jAzY7l0, Lh5mLi->m8GLclYm->k4jAzY7l0), strcpy (Lh5mLi->m8GLclYm->k4jAzY7l0, ro0rEG);
                    }
                    {
                        if ((796 - 796)) {
                            return (386 - 386);
                        }
                    }
                    Lh5mLi = Lh5mLi->m8GLclYm;
                }
            }
            ws3BZGji9 = ws3BZGji9 + (227 - 226);
        }
    }
    Lh5mLi = WMeVAK->m8GLclYm;
    {
        ws3BZGji9 = (696 - 627) - (342 - 273);
        for (; lv7BuJ > ws3BZGji9;) {
            ws3BZGji9 = ws3BZGji9 + (797 - 796);
            printf ("%s\n", Lh5mLi->k4jAzY7l0);
            Lh5mLi = Lh5mLi->m8GLclYm;
        }
    }
    return (817 - 817);
}

