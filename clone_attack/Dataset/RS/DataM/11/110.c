int main () {
    int PthX31U9lO4N;
    int aPnSNC1i;
    int xFNhTM;
    int d;
    scanf ("%d %d %d", &PthX31U9lO4N, &aPnSNC1i, &xFNhTM);
    if (aPnSNC1i == 1) {
        d = xFNhTM;
    }
    else if (aPnSNC1i == 2) {
        d = (197 - 166) + xFNhTM;
    }
    else if (aPnSNC1i == 3) {
        d = 29 + 31 + xFNhTM;
    }
    else if (aPnSNC1i == (307 - 303)) {
        d = 29 + 31 + 31 + xFNhTM;
    }
    else if (aPnSNC1i == 5) {
        d = 29 + 31 + 31 + 30 + xFNhTM;
    }
    else if (aPnSNC1i == 6) {
        d = 29 + 31 * 3 + 30 + xFNhTM;
    }
    else if (aPnSNC1i == 7) {
        d = 29 + 31 * 3 + (845 - 785) + xFNhTM;
    }
    else if (aPnSNC1i == 8) {
        d = 29 + 31 * 4 + 60 + xFNhTM;
    }
    else if (aPnSNC1i == 9) {
        d = 29 + 31 * 5 + 60 + xFNhTM;
    }
    else if (aPnSNC1i == 10) {
        d = 29 + 31 * 5 + 90 + xFNhTM;
    }
    else if (aPnSNC1i == 11) {
        d = 29 + 31 * 6 + 90 + xFNhTM;
    }
    else if (aPnSNC1i == 12) {
        d = 29 + 31 * 6 + 120 + xFNhTM;
    }
    else {
    }
    if ((PthX31U9lO4N % 4 != 0 || PthX31U9lO4N % 100 == 0 && PthX31U9lO4N % 400 != 0) && aPnSNC1i > 2)
        d = d - 1;
    printf ("%d", d);
    return 0;
}

