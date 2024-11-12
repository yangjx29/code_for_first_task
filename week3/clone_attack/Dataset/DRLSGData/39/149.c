struct   student {
    char C2JhavocTHn [20];
    int NnKRceG8b73;
    int CRkTzA5YvC;
    char GIS0VJj;
    char R9k80QGxeKg;
    int GWv58sehBl1a;
};
int main () {
    int NZEehN, TtHeBD, FJ6xzm, pwDFbJ2mSa, KG2m4zjaPNb = (318 - 318), diK72Lk3 [100] = {(694 - 694)};
    struct   student hpEeZ67SWkV [100];
    pwDFbJ2mSa = (789 - 789);
    scanf ("%d", &NZEehN);
    for (TtHeBD = 0; TtHeBD < NZEehN; TtHeBD = TtHeBD +1) {
        scanf ("%s %d %d %c %c %d", hpEeZ67SWkV[TtHeBD].C2JhavocTHn, &hpEeZ67SWkV[TtHeBD].NnKRceG8b73, &hpEeZ67SWkV[TtHeBD].CRkTzA5YvC, &hpEeZ67SWkV[TtHeBD].GIS0VJj, &hpEeZ67SWkV[TtHeBD].R9k80QGxeKg, &hpEeZ67SWkV[TtHeBD].GWv58sehBl1a);
    }
    for (TtHeBD = 0; TtHeBD < NZEehN; TtHeBD++) {
        if (hpEeZ67SWkV[TtHeBD].NnKRceG8b73 > (709 - 629) && hpEeZ67SWkV[TtHeBD].GWv58sehBl1a > 0) {
            diK72Lk3[TtHeBD] = diK72Lk3[TtHeBD] + (8911 - 911);
        }
        if (hpEeZ67SWkV[TtHeBD].NnKRceG8b73 > (950 - 865) && hpEeZ67SWkV[TtHeBD].CRkTzA5YvC > 80) {
            diK72Lk3[TtHeBD] = diK72Lk3[TtHeBD] + (4396 - 396);
        }
        if (hpEeZ67SWkV[TtHeBD].NnKRceG8b73 > 90) {
            diK72Lk3[TtHeBD] = diK72Lk3[TtHeBD] + 2000;
        }
        if (hpEeZ67SWkV[TtHeBD].NnKRceG8b73 > 85 && hpEeZ67SWkV[TtHeBD].R9k80QGxeKg == 'Y') {
            diK72Lk3[TtHeBD] = diK72Lk3[TtHeBD] + (1992 - 992);
        }
        if (hpEeZ67SWkV[TtHeBD].CRkTzA5YvC > 80 && hpEeZ67SWkV[TtHeBD].GIS0VJj == 'Y') {
            diK72Lk3[TtHeBD] = diK72Lk3[TtHeBD] + 850;
        }
    }
    FJ6xzm = diK72Lk3[0];
    for (TtHeBD = 0; TtHeBD < NZEehN; TtHeBD++) {
        if (diK72Lk3[TtHeBD] > FJ6xzm) {
            FJ6xzm = diK72Lk3[TtHeBD];
            pwDFbJ2mSa = TtHeBD;
        }
        KG2m4zjaPNb = KG2m4zjaPNb +diK72Lk3[TtHeBD];
    }
    printf ("%s\n%d\n%d\n", hpEeZ67SWkV[pwDFbJ2mSa].C2JhavocTHn, diK72Lk3[pwDFbJ2mSa], KG2m4zjaPNb);
}

