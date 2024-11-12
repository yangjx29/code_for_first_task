struct   stu {
    char xuehao [(784 - 684)];
    struct   stu *lMYn9G;
};
void  main () {
    struct   stu *dvZ01wcXG = NULL;
    struct   stu *kBPzXV = NULL;
    struct   stu *oJIAkf = NULL;
    int n;
    n = (38 - 38);
    kBPzXV = oJIAkf = (struct   stu *) malloc (LEN);
    gets (kBPzXV->xuehao);
    while (strcmp (kBPzXV->xuehao, "end") != 0) {
        n++;
        if (n == 1) {
            kBPzXV->lMYn9G = NULL;
        }
        else
            kBPzXV->lMYn9G = oJIAkf;
        oJIAkf = kBPzXV;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        kBPzXV = (struct   stu *) malloc (LEN);
        gets (kBPzXV->xuehao);
    }
    while (oJIAkf->lMYn9G != NULL) {
        printf ("%s\n", oJIAkf->xuehao);
        oJIAkf = oJIAkf->lMYn9G;
    }
    printf ("%s\n", oJIAkf->xuehao);
}

