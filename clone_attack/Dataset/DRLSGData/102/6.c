double  lpnHlLWrsf [(410 - 369)];
double  gzKWjYZsC [(908 - 867)];

int cmp_male (const  void  *wwe9GomV4L, const  void  *vfKQ38) {
    return *(double *) wwe9GomV4L - *(int*) vfKQ38;
}

int AubGlCdFenR (const  void  *wwe9GomV4L, const  void  *vfKQ38) {
    return *(double *) vfKQ38 - *(double *) wwe9GomV4L;
}

int main () {
    int K7sgFfyV;
    int XVuiInrXkSv8;
    double  ArtFdEZpbY6K;
    int PGhJEHtbQ34;
    int OiNg7J;
    char tWXOxEGSwq0v [(554 - 544)];
    scanf ("%d", &OiNg7J);
    XVuiInrXkSv8 = (547 - 547);
    PGhJEHtbQ34 = (524 - 524);
    {
        K7sgFfyV = (395 - 395);
        for (; K7sgFfyV < OiNg7J;) {
            K7sgFfyV = K7sgFfyV +(178 - 177);
            scanf ("%s %lf", &tWXOxEGSwq0v, &ArtFdEZpbY6K);
            if (!('m' != tWXOxEGSwq0v[(807 - 807)])) {
                lpnHlLWrsf[XVuiInrXkSv8] = ArtFdEZpbY6K;
                XVuiInrXkSv8 = XVuiInrXkSv8 +(605 - 604);
            }
            else {
                gzKWjYZsC[PGhJEHtbQ34] = ArtFdEZpbY6K;
                PGhJEHtbQ34 = PGhJEHtbQ34 +(953 - 952);
            }
        }
    }
    sort (lpnHlLWrsf, lpnHlLWrsf + XVuiInrXkSv8);
    for (K7sgFfyV = (649 - 649); K7sgFfyV < XVuiInrXkSv8; K7sgFfyV = K7sgFfyV +(196 - 195))
        printf ("%.2lf ", lpnHlLWrsf[K7sgFfyV]);
    sort (gzKWjYZsC, gzKWjYZsC + PGhJEHtbQ34);
    {
        K7sgFfyV = PGhJEHtbQ34 -(538 - 537);
        for (; (758 - 758) <= K7sgFfyV;) {
            if (K7sgFfyV == (532 - 532))
                printf ("%.2lf", gzKWjYZsC[K7sgFfyV]);
            else
                printf ("%.2lf ", gzKWjYZsC[K7sgFfyV]);
            K7sgFfyV = K7sgFfyV -(275 - 274);
        }
    }
    return (665 - 665);
}

