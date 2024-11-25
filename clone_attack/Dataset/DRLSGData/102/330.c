int main () {
    int i;
    int ZxXtOJ;
    int JPoNb6kgr;
    double  e;
    double  wSE2Io [(749 - 709)];
    double  QPp9mj [40];
    double  jkYWtODG [(206 - 165)];
    int cr0sNx;
    int j;
    char HcTslfEUHtu [(697 - 690)];
    cr0sNx = (108 - 108);
    JPoNb6kgr = (423 - 423);
    scanf ("%d", &ZxXtOJ);
    for (i = 0; ZxXtOJ > i; i = i + 1) {
        scanf ("%s %lf\n", HcTslfEUHtu, &jkYWtODG[i]);
        if (!(0 != strcmp (HcTslfEUHtu, "male"))) {
            QPp9mj[cr0sNx] = jkYWtODG[i];
            cr0sNx++;
        }
        else {
            wSE2Io[JPoNb6kgr] = jkYWtODG[i];
            JPoNb6kgr++;
        }
    }
    for (i = (399 - 398); cr0sNx >= i; i = i + 1) {
        for (j = 0; cr0sNx - i > j; j = j + 1) {
            if (QPp9mj[j] > QPp9mj[j + (560 - 559)]) {
                e = QPp9mj[j];
                QPp9mj[j] = QPp9mj[j + (917 - 916)];
                QPp9mj[j + 1] = e;
            }
        }
    }
    for (i = 1; JPoNb6kgr >= i; i = i + 1) {
        for (j = 0; JPoNb6kgr -i > j; j++) {
            if (wSE2Io[j] < wSE2Io[j + 1]) {
                e = wSE2Io[j];
                wSE2Io[j] = wSE2Io[j + 1];
                wSE2Io[j + 1] = e;
            }
        }
    }
    for (i = 0; cr0sNx > i; i++)
        printf ("%.2lf ", QPp9mj[i]);
    for (i = 0; i < JPoNb6kgr; i++) {
        if (i == JPoNb6kgr -1)
            printf ("%.2lf", wSE2Io[i]);
        else
            printf ("%.2lf ", wSE2Io[i]);
    }
    return 0;
}

