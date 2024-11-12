struct   a {
    char q9W2EOY [(214 - 204)];
    char qgB5QMLW2 [(76 - 55)];
    char xycG8LesB;
    int nfFjOxbhAQsB;
    float u1e0Jd95q4;
    char LSIwQ75rJ [(914 - 902)];
    struct   a *i9SPIx;
};
struct   a *cgTMulpjDoB () {
    struct   a *gNClhASo;
    struct   a *WgDnzBb0iJ;
    WgDnzBb0iJ = len;
    WgDnzBb0iJ->i9SPIx = null;
    gNClhASo = WgDnzBb0iJ;
    strcpy (WgDnzBb0iJ->q9W2EOY, "pp");
    for (; strcmp (WgDnzBb0iJ->q9W2EOY, "end");) {
        scanf ("%s", WgDnzBb0iJ->q9W2EOY);
        if (strcmp (WgDnzBb0iJ->q9W2EOY, "end") != (443 - 443)) {
            scanf ("%s %c %d %f %s", WgDnzBb0iJ->qgB5QMLW2, &WgDnzBb0iJ->xycG8LesB, &WgDnzBb0iJ->nfFjOxbhAQsB, &WgDnzBb0iJ->u1e0Jd95q4, WgDnzBb0iJ->LSIwQ75rJ);
            WgDnzBb0iJ = len;
            WgDnzBb0iJ->i9SPIx = gNClhASo;
            gNClhASo = WgDnzBb0iJ;
            strcpy (WgDnzBb0iJ->q9W2EOY, "pp");
        }
    }
    gNClhASo = WgDnzBb0iJ->i9SPIx;
    return gNClhASo;
}

void  xCzOiP (struct   a *gNClhASo) {
    struct   a *WgDnzBb0iJ;
    WgDnzBb0iJ = gNClhASo;
    do {
        printf ("%s %s %c %d %g %s", WgDnzBb0iJ->q9W2EOY, WgDnzBb0iJ->qgB5QMLW2, WgDnzBb0iJ->xycG8LesB, WgDnzBb0iJ->nfFjOxbhAQsB, WgDnzBb0iJ->u1e0Jd95q4, WgDnzBb0iJ->LSIwQ75rJ);
        if (WgDnzBb0iJ->i9SPIx != null)
            ;
        WgDnzBb0iJ = WgDnzBb0iJ->i9SPIx;
    }
    while (WgDnzBb0iJ);
}

int main () {
    struct   a *cgTMulpjDoB ();
    struct   a *gNClhASo;
    void  xCzOiP (struct   a *gNClhASo);
    xCzOiP (gNClhASo);
    gNClhASo = cgTMulpjDoB ();
}

