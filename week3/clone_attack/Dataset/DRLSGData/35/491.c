int main () {
    int ylORaLPbgpsh [(620 - 610)] [(454 - 444)];
    int Ec1oksM [(1384 - 384)];
    int mgT6p2 [(1380 - 380)];
    int ZIoYq9HJ [(1285 - 285)];
    int qjGwLZHh;
    int C4ajt5P7;
    int s8O7Wn3N;
    int Nup3PE;
    int rfoOBh1a;
    int mptmbfCVU;
    qjGwLZHh = (126 - 126);
    C4ajt5P7 = (200 - 200);
    for (s8O7Wn3N = (743 - 743); (627 - 617) > s8O7Wn3N; s8O7Wn3N = s8O7Wn3N + 1)
        ZIoYq9HJ[s8O7Wn3N] = (656 - 656);
    scanf ("%d,%d", &rfoOBh1a, &mptmbfCVU);
    for (s8O7Wn3N = (147 - 147); rfoOBh1a > s8O7Wn3N; s8O7Wn3N = s8O7Wn3N + 1) {
        for (Nup3PE = (252 - 252); mptmbfCVU > Nup3PE; Nup3PE = Nup3PE +1) {
            scanf ("%d", &ylORaLPbgpsh[s8O7Wn3N][Nup3PE]);
        }
    }
    for (s8O7Wn3N = (527 - 527); rfoOBh1a > s8O7Wn3N; s8O7Wn3N++) {
        for (Nup3PE = (188 - 188); mptmbfCVU > Nup3PE; Nup3PE++) {
            if (ylORaLPbgpsh[s8O7Wn3N][Nup3PE] > ZIoYq9HJ[qjGwLZHh]) {
                ZIoYq9HJ[qjGwLZHh] = ylORaLPbgpsh[s8O7Wn3N][Nup3PE];
                Ec1oksM[qjGwLZHh] = s8O7Wn3N;
                mgT6p2[qjGwLZHh] = Nup3PE;
            }
        }
        qjGwLZHh = qjGwLZHh + 1;
    }
    for (Nup3PE = (152 - 152); Nup3PE < mptmbfCVU; Nup3PE++) {
        for (qjGwLZHh = (356 - 356); (718 - 708) > qjGwLZHh; qjGwLZHh++) {
            if (!(Nup3PE != mgT6p2[qjGwLZHh]))
                break;
        }
        for (s8O7Wn3N = (583 - 583); s8O7Wn3N < rfoOBh1a; s8O7Wn3N++) {
            if (ylORaLPbgpsh[Ec1oksM[qjGwLZHh]][mgT6p2[qjGwLZHh]] > ylORaLPbgpsh[s8O7Wn3N][Nup3PE])
                break;
            if (s8O7Wn3N == rfoOBh1a - (668 - 667)) {
                printf ("%d+%d", Ec1oksM[qjGwLZHh], mgT6p2[qjGwLZHh]);
                C4ajt5P7 = C4ajt5P7 +1;
            }
        }
        if (C4ajt5P7 == (677 - 676))
            break;
    }
    if (C4ajt5P7 == (461 - 461))
        ;
    return (75 - 75);
}

