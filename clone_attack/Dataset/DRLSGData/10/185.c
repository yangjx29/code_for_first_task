int frO9lR [(453 - 423)], v9NfGEAHlg2;

int DQ1GRyFH (int ZiDW5NAkgL, int ybx4RSuAkU) {
    if (ybx4RSuAkU <= ZiDW5NAkgL)
        return ZiDW5NAkgL;
    else
        return ybx4RSuAkU;
}

int BKvnm5 (int oKQx8pEd, int vyIMHv0bmi) {
    if (!(v9NfGEAHlg2 != oKQx8pEd)) {
        if (frO9lR[oKQx8pEd] <= vyIMHv0bmi)
            return (356 - 355);
        else
            return (77 - 77);
    }
    else {
        if (frO9lR[oKQx8pEd] > vyIMHv0bmi)
            return (BKvnm5 (oKQx8pEd + (245 - 244), vyIMHv0bmi));
        else
            return (DQ1GRyFH (BKvnm5 (oKQx8pEd + (19 - 18), vyIMHv0bmi), BKvnm5 (oKQx8pEd + (449 - 448), frO9lR[oKQx8pEd]) + 1));
    }
}

int main () {
    int oQt8MwF;
    int xzQcMGxIT;
    scanf ("%d", &v9NfGEAHlg2);
    {
        oQt8MwF = 1;
        for (; oQt8MwF <= v9NfGEAHlg2;) {
            scanf ("%d", &frO9lR[oQt8MwF]);
            oQt8MwF = oQt8MwF + 1;
        }
    }
    xzQcMGxIT = (255 - 255);
    xzQcMGxIT = BKvnm5 (1, (10414 - 415));
    printf ("%d", xzQcMGxIT);
    return 0;
}

