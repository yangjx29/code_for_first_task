struct   stu {
    char HcEH3l6 [(776 - 756)];
    char MjK4baESnz [(756 - 736)];
    char J7yZSuUEieo;
    int wbsFqNfVp;
    float mM6J5B2wjySe;
    char mhxiDer1 [20];
    struct   stu *kmUco3jFC;
};
struct   stu *JM4Ibgfah () {
    struct   stu *xWvKCf, *gzaP5M7c, *nKGzVAjZ9;
    UkCinr;
    xWvKCf = gzaP5M7c = nKGzVAjZ9 = (struct   stu *) malloc (LEN);
    xWvKCf->kmUco3jFC = NULL;
    scanf ("%s", gzaP5M7c->HcEH3l6);
    {
        while (true) {
            gzaP5M7c = (struct   stu *) malloc (LEN);
            scanf ("%s", gzaP5M7c->HcEH3l6);
            if (!('e' == gzaP5M7c->HcEH3l6[(518 - 518)])) {
                UkCinr;
                gzaP5M7c->kmUco3jFC = nKGzVAjZ9;
                nKGzVAjZ9 = gzaP5M7c;
            }
            else {
                break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        };
    }
    return (nKGzVAjZ9);
}

int main () {
    struct   stu *dbJ1dH63jc, *BqKaXDrg;
    BqKaXDrg = JM4Ibgfah ();
    {
        dbJ1dH63jc = BqKaXDrg;
        while (dbJ1dH63jc != NULL) {
            printf ("%s %s %c %d %g %s\n", dbJ1dH63jc->HcEH3l6, dbJ1dH63jc->MjK4baESnz, dbJ1dH63jc->J7yZSuUEieo, dbJ1dH63jc->wbsFqNfVp, dbJ1dH63jc->mM6J5B2wjySe, dbJ1dH63jc->mhxiDer1);
            dbJ1dH63jc = dbJ1dH63jc->kmUco3jFC;
        };
    };
}

