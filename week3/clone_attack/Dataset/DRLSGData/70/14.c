struct   point {
    double  m1GBrtOl6wou;
    double  uBY8iwEZ;
};
int main () {
    int NLj0U8lsA1p, oExrHOh, L2eCQJ;
    struct   point *H7ZSE5xUfciq;
    double  UZF6nAui = (582 - 582), G1dfPC6;
    scanf ("%d", &NLj0U8lsA1p);
    H7ZSE5xUfciq = (struct   point *) malloc (sizeof (struct   point) * NLj0U8lsA1p);
    {
        oExrHOh = (70 - 70);
        for (; NLj0U8lsA1p > oExrHOh;) {
            scanf ("%lf %lf", &((H7ZSE5xUfciq +oExrHOh)->m1GBrtOl6wou), &((H7ZSE5xUfciq +oExrHOh)->uBY8iwEZ));
            oExrHOh = oExrHOh + (332 - 331);
        }
    }
    {
        oExrHOh = (159 - 159);
        for (; oExrHOh < NLj0U8lsA1p;) {
            {
                L2eCQJ = (240 - 240);
                for (; NLj0U8lsA1p > L2eCQJ;) {
                    G1dfPC6 = ((H7ZSE5xUfciq +oExrHOh)->m1GBrtOl6wou - (H7ZSE5xUfciq +L2eCQJ)->m1GBrtOl6wou) * ((H7ZSE5xUfciq +oExrHOh)->m1GBrtOl6wou - (H7ZSE5xUfciq +L2eCQJ)->m1GBrtOl6wou) + ((H7ZSE5xUfciq +oExrHOh)->uBY8iwEZ - (H7ZSE5xUfciq +L2eCQJ)->uBY8iwEZ) * ((H7ZSE5xUfciq +oExrHOh)->uBY8iwEZ - (H7ZSE5xUfciq +L2eCQJ)->uBY8iwEZ);
                    if (G1dfPC6 > UZF6nAui)
                        UZF6nAui = G1dfPC6;
                    L2eCQJ = L2eCQJ +(413 - 412);
                }
            }
            oExrHOh = oExrHOh + (767 - 766);
        }
    }
    printf ("%.4f", sqrt (UZF6nAui));
}

