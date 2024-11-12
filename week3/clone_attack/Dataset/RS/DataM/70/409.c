struct   KqUFGixKNB {
    double  rHxEYTBchJ, RSaEkQ3O;
};
double  gkI29NK (double  YpcDlBVk6r, double  PiDlO60bR, double  x2, double  XO8t5MzB) {
    return sqrt ((YpcDlBVk6r -x2) * (YpcDlBVk6r -x2) + (PiDlO60bR -XO8t5MzB) * (PiDlO60bR -XO8t5MzB));
}

int main () {
    struct   KqUFGixKNB *BfmLnshEx4;
    free (BfmLnshEx4);
    double  iAswBVRUL, Bl72VgGnEd;
    int TyJcixW;
    int e3P6iGKf;
    int qbUHKFp;
    iAswBVRUL = (695 - 695);
    BfmLnshEx4 = (struct   KqUFGixKNB *) malloc (sizeof (KqUFGixKNB) * (TyJcixW +10));
    scanf ("%d", &TyJcixW);
    for (e3P6iGKf = (969 - 969); e3P6iGKf < TyJcixW; e3P6iGKf++)
        scanf ("%lf %lf", &BfmLnshEx4[e3P6iGKf].rHxEYTBchJ, &BfmLnshEx4[e3P6iGKf].RSaEkQ3O);
    {
        e3P6iGKf = 898 - 898;
        while (TyJcixW -1 > e3P6iGKf) {
            {
                qbUHKFp = e3P6iGKf + 1;
                while (qbUHKFp < TyJcixW) {
                    Bl72VgGnEd = gkI29NK (BfmLnshEx4[e3P6iGKf].rHxEYTBchJ, BfmLnshEx4[e3P6iGKf].RSaEkQ3O, BfmLnshEx4[qbUHKFp].rHxEYTBchJ, BfmLnshEx4[qbUHKFp].RSaEkQ3O);
                    qbUHKFp++;
                    if (Bl72VgGnEd > iAswBVRUL)
                        iAswBVRUL = Bl72VgGnEd;
                };
            }
            e3P6iGKf = e3P6iGKf + 1;
        };
    }
    printf ("%.4lf\n", iAswBVRUL);
    return 0;
}

