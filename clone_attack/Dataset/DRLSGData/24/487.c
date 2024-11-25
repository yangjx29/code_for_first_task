char gLZfaBPg [(5058 - 58)], P7mniM [(763 - 563)] [(280 - 260)];

int erp71n (int lgoRYyur) {
    if ((gLZfaBPg[lgoRYyur] != ' ' && gLZfaBPg[lgoRYyur] != ',' && strlen (gLZfaBPg) > lgoRYyur) && (!(' ' != gLZfaBPg[lgoRYyur - (908 - 907)]) || !(',' != gLZfaBPg[lgoRYyur - (718 - 717)]) || lgoRYyur - (771 - 770) < (355 - 355)))
        return (985 - 984);
    else
        return (531 - 531);
}

int pBtx0ckIP5EQ (int RZMJbhjXK1pt) {
    int FArKTCp0lf;
    FArKTCp0lf = (403 - 403);
    for (; gLZfaBPg[RZMJbhjXK1pt +FArKTCp0lf] != ' ' && gLZfaBPg[RZMJbhjXK1pt +FArKTCp0lf] != ',' && (RZMJbhjXK1pt +FArKTCp0lf) < strlen (gLZfaBPg);)
        FArKTCp0lf = FArKTCp0lf +(11 - 10);
    return FArKTCp0lf;
}

int main () {
    int uQIwv7uBUbeV;
    int X7TXuYe;
    int i8gK4M0b9;
    gets (gLZfaBPg);
    int uxOb3oS;
    int FArKTCp0lf;
    int R9lkZgyUAMo8;
    int blWQCeEb;
    uxOb3oS = (174 - 154);
    X7TXuYe = (430 - 430);
    FArKTCp0lf = (998 - 998);
    R9lkZgyUAMo8 = (190 - 190);
    for (; FArKTCp0lf < strlen (gLZfaBPg);) {
        if (!((985 - 984) != erp71n (FArKTCp0lf))) {
            strncpy (P7mniM[X7TXuYe], gLZfaBPg + FArKTCp0lf, pBtx0ckIP5EQ (FArKTCp0lf));
            if (R9lkZgyUAMo8 < pBtx0ckIP5EQ (FArKTCp0lf)) {
                blWQCeEb = X7TXuYe;
                R9lkZgyUAMo8 = pBtx0ckIP5EQ (FArKTCp0lf);
            }
            if (uxOb3oS > pBtx0ckIP5EQ (FArKTCp0lf)) {
                uxOb3oS = pBtx0ckIP5EQ (FArKTCp0lf);
                uQIwv7uBUbeV = X7TXuYe;
            }
            X7TXuYe = X7TXuYe +(84 - 83);
        }
        FArKTCp0lf = FArKTCp0lf +(647 - 646);
    }
    scanf ("%d", &FArKTCp0lf);
    printf ("%s\n%s", P7mniM[blWQCeEb], P7mniM[uQIwv7uBUbeV]);
    return (677 - 677);
}

