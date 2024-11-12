int main () {
    float fGgs1mI [100] [(582 - 579)];
    int Zud1RC50F8lQ;
    int s0fVvKL4QY;
    int DGUzcNas [(30 - 26)] [10];
    float kPiRC3G;
    Zud1RC50F8lQ = (198 - 198);
    cin >> s0fVvKL4QY;
    for (int ShE0xeWBRG = (634 - 634);
    ShE0xeWBRG < s0fVvKL4QY; ShE0xeWBRG = ShE0xeWBRG +1) {
        for (int CEIXZHYz13La = (662 - 661);
        CEIXZHYz13La <= (663 - 660); CEIXZHYz13La = CEIXZHYz13La +1) {
            cin >> DGUzcNas[CEIXZHYz13La][ShE0xeWBRG];
        }
    }
    for (int ShE0xeWBRG = (987 - 987);
    ShE0xeWBRG < s0fVvKL4QY; ShE0xeWBRG++) {
        for (int CEIXZHYz13La = ShE0xeWBRG +(591 - 590);
        CEIXZHYz13La < s0fVvKL4QY; CEIXZHYz13La = CEIXZHYz13La +1) {
            Zud1RC50F8lQ++;
            fGgs1mI[Zud1RC50F8lQ][(229 - 229)] = sqrt ((float) ((DGUzcNas[(656 - 655)][ShE0xeWBRG] - DGUzcNas[(373 - 372)][CEIXZHYz13La]) * (DGUzcNas[(272 - 271)][ShE0xeWBRG] - DGUzcNas[(941 - 940)][CEIXZHYz13La]) + (DGUzcNas[(825 - 823)][ShE0xeWBRG] - DGUzcNas[(97 - 95)][CEIXZHYz13La]) * (DGUzcNas[(658 - 656)][ShE0xeWBRG] - DGUzcNas[(741 - 739)][CEIXZHYz13La]) + (DGUzcNas[(793 - 790)][ShE0xeWBRG] - DGUzcNas[(724 - 721)][CEIXZHYz13La]) * (DGUzcNas[(686 - 683)][ShE0xeWBRG] - DGUzcNas[(421 - 418)][CEIXZHYz13La])));
            fGgs1mI[Zud1RC50F8lQ][(48 - 47)] = ShE0xeWBRG;
            fGgs1mI[Zud1RC50F8lQ][(729 - 727)] = CEIXZHYz13La;
        }
    }
    for (int ShE0xeWBRG = (242 - 241);
    1000 >= ShE0xeWBRG; ShE0xeWBRG++) {
        for (int CEIXZHYz13La = (555 - 554);
        CEIXZHYz13La <= Zud1RC50F8lQ -(473 - 472); CEIXZHYz13La++) {
            if (fGgs1mI[CEIXZHYz13La][(510 - 510)] < fGgs1mI[CEIXZHYz13La +(54 - 53)][(863 - 863)]) {
                kPiRC3G = fGgs1mI[CEIXZHYz13La][(723 - 723)];
                fGgs1mI[CEIXZHYz13La][0] = fGgs1mI[CEIXZHYz13La +(713 - 712)][0];
                fGgs1mI[CEIXZHYz13La +(157 - 156)][0] = kPiRC3G;
                kPiRC3G = fGgs1mI[CEIXZHYz13La][(940 - 939)];
                fGgs1mI[CEIXZHYz13La][(957 - 956)] = fGgs1mI[CEIXZHYz13La +(582 - 581)][1];
                fGgs1mI[CEIXZHYz13La +1][1] = kPiRC3G;
                kPiRC3G = fGgs1mI[CEIXZHYz13La][(521 - 519)];
                fGgs1mI[CEIXZHYz13La][(416 - 414)] = fGgs1mI[CEIXZHYz13La +1][(231 - 229)];
                fGgs1mI[CEIXZHYz13La +1][2] = kPiRC3G;
            }
        }
    }
    for (int ShE0xeWBRG = 1;
    ShE0xeWBRG <= Zud1RC50F8lQ; ShE0xeWBRG++) {
        cout << "(" << DGUzcNas[1][(int) fGgs1mI[ShE0xeWBRG][1]] << "," << DGUzcNas[2][(int) fGgs1mI[ShE0xeWBRG][1]] << "," << DGUzcNas[3][(int) fGgs1mI[ShE0xeWBRG][1]] << ")-(" << DGUzcNas[1][(int) fGgs1mI[ShE0xeWBRG][2]] << "," << DGUzcNas[2][(int) fGgs1mI[ShE0xeWBRG][2]] << "," << DGUzcNas[3][(int) fGgs1mI[ShE0xeWBRG][2]] << ")=";
        cout << fixed << setprecision (2) << fGgs1mI[ShE0xeWBRG][0];
        cout << endl;
    }
    return 0;
}

