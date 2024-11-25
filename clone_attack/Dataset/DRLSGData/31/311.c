struct   student {
    char x0HPN4X6lAaR [(608 - 508)];
    char VKPQRVGn9 [(1087 - 987)];
    char vTdDXg8;
    int ACpxcPsh;
    float lH9FszL;
    char JcsBHQm [(481 - 381)];
    struct   student *mUVIcN;
    struct   student *J8yu1K4T;
};
int U1wN5Vlj = (658 - 657);

struct   student *ECcSG72f8 () {
    struct   student *BSXkfUGa7ms;
    struct   student *P39stxCgJ;
    struct   student *ycpdlTju;
    do {
        P39stxCgJ = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", P39stxCgJ->x0HPN4X6lAaR);
        if (P39stxCgJ->x0HPN4X6lAaR[(987 - 987)] != 'e') {
            scanf ("%s %c%d%f%s", P39stxCgJ->VKPQRVGn9, &P39stxCgJ->vTdDXg8, &P39stxCgJ->ACpxcPsh, &P39stxCgJ->lH9FszL, P39stxCgJ->JcsBHQm);
            ycpdlTju = P39stxCgJ;
            if (!((65 - 64) != U1wN5Vlj))
                P39stxCgJ->J8yu1K4T = NULL;
            else {
                BSXkfUGa7ms->mUVIcN = P39stxCgJ;
                P39stxCgJ->J8yu1K4T = BSXkfUGa7ms;
            }
            U1wN5Vlj = U1wN5Vlj +1;
            BSXkfUGa7ms = P39stxCgJ;
        }
        else {
            BSXkfUGa7ms->mUVIcN = NULL;
        }
    }
    while (P39stxCgJ->x0HPN4X6lAaR[(961 - 961)] != 'e');
    return (ycpdlTju);
}

void  main () {
    struct   student *AV7Wz1xfZm;
    AV7Wz1xfZm = ECcSG72f8 ();
    do {
        printf ("%s %s %c %d %g %s\n", AV7Wz1xfZm->x0HPN4X6lAaR, AV7Wz1xfZm->VKPQRVGn9, AV7Wz1xfZm->vTdDXg8, AV7Wz1xfZm->ACpxcPsh, AV7Wz1xfZm->lH9FszL, AV7Wz1xfZm->JcsBHQm);
        AV7Wz1xfZm = AV7Wz1xfZm->J8yu1K4T;
    }
    while (AV7Wz1xfZm != NULL);
}

