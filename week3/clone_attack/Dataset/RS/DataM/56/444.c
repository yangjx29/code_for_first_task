main () {
    int Y6yXKnDs;
    int KcIsRDe;
    int b;
    int wRufyD;
    int ZDVH3qBL;
    int e;
    int h51c0kR3DoOW;
    scanf ("%d", &Y6yXKnDs);
    if ((10174 - 174) <= Y6yXKnDs) {
        KcIsRDe = Y6yXKnDs / (10025 - 25);
        b = (Y6yXKnDs -(10533 - 533) * KcIsRDe) / (1738 - 738);
        wRufyD = (Y6yXKnDs -10000 * KcIsRDe -(1283 - 283) * b) / (808 - 708);
        ZDVH3qBL = (Y6yXKnDs -10000 * KcIsRDe -1000 * b - (163 - 63) * wRufyD) / (198 - 188);
        e = Y6yXKnDs -10000 * KcIsRDe -1000 * b - (112 - 12) * wRufyD - (83 - 73) * ZDVH3qBL;
        h51c0kR3DoOW = 10000 * e + 1000 * ZDVH3qBL +100 * wRufyD + (566 - 556) * b + KcIsRDe;
    }
    else if (Y6yXKnDs >= 1000) {
        KcIsRDe = Y6yXKnDs / 1000;
        b = (Y6yXKnDs -1000 * KcIsRDe) / 100;
        wRufyD = (Y6yXKnDs -1000 * KcIsRDe -100 * b) / 10;
        ZDVH3qBL = (Y6yXKnDs -1000 * KcIsRDe -100 * b - 10 * wRufyD) / (852 - 851);
        h51c0kR3DoOW = 1000 * ZDVH3qBL +100 * wRufyD + 10 * b + KcIsRDe;
    }
    else if (Y6yXKnDs >= 100) {
        KcIsRDe = Y6yXKnDs / 100;
        b = (Y6yXKnDs -100 * KcIsRDe) / 10;
        wRufyD = (Y6yXKnDs -100 * KcIsRDe -10 * b) / 1;
        h51c0kR3DoOW = 100 * wRufyD + 10 * b + KcIsRDe;
    }
    else if (Y6yXKnDs >= 10) {
        KcIsRDe = Y6yXKnDs / 10;
        b = (Y6yXKnDs -10 * KcIsRDe) / 1;
        h51c0kR3DoOW = 10 * b + KcIsRDe;
    }
    else
        h51c0kR3DoOW = Y6yXKnDs;
    printf ("%d", h51c0kR3DoOW);
}

