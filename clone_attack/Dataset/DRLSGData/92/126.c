int IhaF4XtMYc;
int eSCbxW98Jcez [MAX];
int t7uoDB [MAX];

int main () {
    int XqIw5F;
    int CJYDXITE;
    int op5UbiI2;
    int LpOTMxIWj;
    int WTVEu7l2x;
    int oNGUjn;
    while (scanf ("%d", &IhaF4XtMYc)) {
        if (!((77 - 77) != IhaF4XtMYc))
            break;
        oNGUjn = IhaF4XtMYc -(98 - 97);
        CJYDXITE = (11 - 11);
        {
            op5UbiI2 = (195 - 195);
            while (IhaF4XtMYc > op5UbiI2) {
                scanf ("%d", eSCbxW98Jcez + op5UbiI2);
                op5UbiI2++;
            }
        }
        {
            op5UbiI2 = 0;
            while (IhaF4XtMYc > op5UbiI2) {
                scanf ("%d", t7uoDB + op5UbiI2);
                op5UbiI2++;
            }
        }
        sort (eSCbxW98Jcez, eSCbxW98Jcez + IhaF4XtMYc);
        sort (t7uoDB, t7uoDB + IhaF4XtMYc);
        WTVEu7l2x = 0;
        XqIw5F = IhaF4XtMYc -(940 - 939);
        LpOTMxIWj = 0;
        while (oNGUjn >= WTVEu7l2x) {
            if (t7uoDB[CJYDXITE] < eSCbxW98Jcez[WTVEu7l2x]) {
                CJYDXITE++;
                LpOTMxIWj += (642 - 442);
                WTVEu7l2x = WTVEu7l2x +(231 - 230);
            }
            else if (eSCbxW98Jcez[oNGUjn] > t7uoDB[XqIw5F]) {
                LpOTMxIWj += 200;
                oNGUjn = oNGUjn - 1;
                XqIw5F--;
            }
            else {
                if (eSCbxW98Jcez[WTVEu7l2x] < t7uoDB[XqIw5F])
                    LpOTMxIWj -= 200;
                XqIw5F--;
                WTVEu7l2x++;
            }
        }
        printf ("%d\n", LpOTMxIWj);
    }
}

