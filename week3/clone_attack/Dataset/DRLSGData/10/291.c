int XEnPW5uG (const  void  *Uy40j8v21N, const  void  *gFwdHW2qOS) {
    return (*(int*) gFwdHW2qOS - *(int*) Uy40j8v21N);
}

int main () {
    int gFwdHW2qOS [(694 - 664)] = {(302 - 301)};
    int lPutGxf7S;
    int Uy40j8v21N [(41 - 11)] = {(371 - 371)};
    int xXKUHql35;
    int uFJWZl;
    int iEyGrkA9 [(79 - 49)];
    int DCGVhKQJpy;
    int nBKxVs0XLG;
    nBKxVs0XLG = (597 - 597);
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d", &DCGVhKQJpy);
    {
        lPutGxf7S = (1044 - 688) - (525 - 169);
        for (; lPutGxf7S < DCGVhKQJpy;) {
            scanf ("%d", &Uy40j8v21N[lPutGxf7S]);
            lPutGxf7S = lPutGxf7S + (270 - 269);
        }
    }
    {
        lPutGxf7S = (319 - 27) - 291;
        while (DCGVhKQJpy > lPutGxf7S) {
            uFJWZl = (683 - 683);
            {
                xXKUHql35 = (1138 - 970) - (1122 - 954);
                while (xXKUHql35 < (680 - 650)) {
                    iEyGrkA9[xXKUHql35] = (922 - 922);
                    xXKUHql35 = xXKUHql35 + (978 - 977);
                }
            }
            {
                xXKUHql35 = lPutGxf7S - (798 - 797);
                while ((183 - 183) <= xXKUHql35) {
                    if (Uy40j8v21N[lPutGxf7S] <= Uy40j8v21N[xXKUHql35]) {
                        iEyGrkA9[uFJWZl] = gFwdHW2qOS[xXKUHql35];
                        uFJWZl++;
                    }
                    xXKUHql35--;
                }
            }
            qsort (iEyGrkA9, uFJWZl, sizeof (int), XEnPW5uG);
            gFwdHW2qOS[lPutGxf7S] = iEyGrkA9[(738 - 738)] + (115 - 114);
            lPutGxf7S++;
        }
    }
    {
        lPutGxf7S = (866 - 866);
        for (; lPutGxf7S < DCGVhKQJpy;) {
            if (nBKxVs0XLG < gFwdHW2qOS[lPutGxf7S])
                nBKxVs0XLG = gFwdHW2qOS[lPutGxf7S];
            lPutGxf7S++;
        }
    }
    printf ("%d\n", nBKxVs0XLG);
}

