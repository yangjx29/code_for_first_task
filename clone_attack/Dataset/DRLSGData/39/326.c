int main () {
    int n;
    struct   stu1 {
        char GcBxRM [(518 - 488)];
        int eGyirOF;
        int wZdBP7rA3i;
        char Adz1SObW;
        char J3zxwaO5pqos;
        int AolLcm6GE;
        int lenwL4AdtkIb;
    }
    stu [100], sGl7uBM0Ni;
    int cNHmE5X;
    int n3FIxYyBrH;
    char hhh;
    scanf ("%d", &n);
    n3FIxYyBrH = (493 - 493);
    for (cNHmE5X = (546 - 546); cNHmE5X < n; cNHmE5X = cNHmE5X + 1) {
        scanf ("%s%d%d%c%c%c%c%d", stu[cNHmE5X].GcBxRM, &stu[cNHmE5X].eGyirOF, &stu[cNHmE5X].wZdBP7rA3i, &hhh, &stu[cNHmE5X].Adz1SObW, &stu[cNHmE5X].J3zxwaO5pqos, &stu[cNHmE5X].J3zxwaO5pqos, &stu[cNHmE5X].AolLcm6GE);
        stu[cNHmE5X].lenwL4AdtkIb = (529 - 529);
        if ((346 - 266) < stu[cNHmE5X].eGyirOF && 1 <= stu[cNHmE5X].AolLcm6GE) {
            stu[cNHmE5X].lenwL4AdtkIb += (8809 - 809);
        }
        if ((729 - 644) < stu[cNHmE5X].eGyirOF && (686 - 606) < stu[cNHmE5X].wZdBP7rA3i) {
            stu[cNHmE5X].lenwL4AdtkIb += 4000;
        }
        if ((195 - 105) < stu[cNHmE5X].eGyirOF) {
            stu[cNHmE5X].lenwL4AdtkIb += 2000;
        }
        if (stu[cNHmE5X].eGyirOF > 85 && stu[cNHmE5X].J3zxwaO5pqos == 'Y') {
            stu[cNHmE5X].lenwL4AdtkIb += (1730 - 730);
        }
        if (stu[cNHmE5X].wZdBP7rA3i > 80 && stu[cNHmE5X].Adz1SObW == 'Y') {
            stu[cNHmE5X].lenwL4AdtkIb += 850;
        }
    }
    sGl7uBM0Ni = stu[(767 - 767)];
    for (cNHmE5X = 0; cNHmE5X < n; cNHmE5X = cNHmE5X + 1) {
        if (stu[cNHmE5X].lenwL4AdtkIb > sGl7uBM0Ni.lenwL4AdtkIb) {
            sGl7uBM0Ni = stu[cNHmE5X];
        }
    }
    for (cNHmE5X = 0; cNHmE5X < n; cNHmE5X = cNHmE5X + 1) {
        n3FIxYyBrH += stu[cNHmE5X].lenwL4AdtkIb;
    }
    printf ("%s\n%d\n%d", sGl7uBM0Ni.GcBxRM, sGl7uBM0Ni.lenwL4AdtkIb, n3FIxYyBrH);
    return 0;
}

