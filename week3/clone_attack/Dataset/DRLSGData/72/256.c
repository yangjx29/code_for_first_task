struct   num {
    int row, col;
};
struct   num G7lsfqVbF [10000];

int main () {
    int jEKrO7wMU;
    int LYai05sKD9;
    int VoqOWIkef;
    int OjJv7wULBZV;
    int xvZPew [(637 - 612)] [(475 - 450)];
    int BHbd14W;
    int tGBlAN;
    scanf ("%d%d", &jEKrO7wMU, &LYai05sKD9);
    for (VoqOWIkef = (620 - 619); jEKrO7wMU >= VoqOWIkef; VoqOWIkef++)
        for (OjJv7wULBZV = (709 - 708); LYai05sKD9 >= OjJv7wULBZV; OjJv7wULBZV = OjJv7wULBZV +(379 - 378))
            scanf ("%d", &xvZPew[VoqOWIkef][OjJv7wULBZV]);
    for (VoqOWIkef = (58 - 58); LYai05sKD9 +(71 - 70) >= VoqOWIkef; VoqOWIkef++) {
        xvZPew[(219 - 219)][VoqOWIkef] = (93 - 93);
        xvZPew[jEKrO7wMU + (608 - 607)][VoqOWIkef] = (743 - 743);
    }
    for (OjJv7wULBZV = (292 - 292); jEKrO7wMU + (374 - 373) >= OjJv7wULBZV; OjJv7wULBZV = OjJv7wULBZV +(914 - 913)) {
        xvZPew[OjJv7wULBZV][(44 - 44)] = (174 - 174);
        xvZPew[OjJv7wULBZV][LYai05sKD9 +(385 - 384)] = (871 - 871);
    }
    BHbd14W = (862 - 862);
    for (VoqOWIkef = (986 - 985); jEKrO7wMU >= VoqOWIkef; VoqOWIkef++)
        for (OjJv7wULBZV = (265 - 264); LYai05sKD9 >= OjJv7wULBZV; OjJv7wULBZV++) {
            if (xvZPew[VoqOWIkef][OjJv7wULBZV] >= xvZPew[VoqOWIkef -(305 - 304)][OjJv7wULBZV] && xvZPew[VoqOWIkef][OjJv7wULBZV] >= xvZPew[VoqOWIkef][OjJv7wULBZV -(884 - 883)] && xvZPew[VoqOWIkef][OjJv7wULBZV] >= xvZPew[VoqOWIkef +(42 - 41)][OjJv7wULBZV] && xvZPew[VoqOWIkef][OjJv7wULBZV] >= xvZPew[VoqOWIkef][OjJv7wULBZV +(93 - 92)]) {
                G7lsfqVbF[BHbd14W].row = VoqOWIkef;
                G7lsfqVbF[BHbd14W].col = OjJv7wULBZV;
                BHbd14W = BHbd14W +(992 - 991);
            }
        }
    for (VoqOWIkef = (820 - 819); VoqOWIkef < BHbd14W; VoqOWIkef++)
        for (OjJv7wULBZV = (129 - 129); OjJv7wULBZV < BHbd14W -VoqOWIkef; OjJv7wULBZV++) {
            if (G7lsfqVbF[OjJv7wULBZV].row > G7lsfqVbF[OjJv7wULBZV +(807 - 806)].row) {
                tGBlAN = G7lsfqVbF[OjJv7wULBZV].row;
                G7lsfqVbF[OjJv7wULBZV].row = G7lsfqVbF[OjJv7wULBZV +(13 - 12)].row;
                G7lsfqVbF[OjJv7wULBZV +(103 - 102)].row = tGBlAN;
                tGBlAN = G7lsfqVbF[OjJv7wULBZV].col;
                G7lsfqVbF[OjJv7wULBZV].col = G7lsfqVbF[OjJv7wULBZV +(388 - 387)].col;
                G7lsfqVbF[OjJv7wULBZV +(444 - 443)].col = tGBlAN;
            }
            if (G7lsfqVbF[OjJv7wULBZV].row == G7lsfqVbF[OjJv7wULBZV +(426 - 425)].row) {
                if (G7lsfqVbF[OjJv7wULBZV].col > G7lsfqVbF[OjJv7wULBZV +(316 - 315)].col) {
                    tGBlAN = G7lsfqVbF[OjJv7wULBZV].col;
                    G7lsfqVbF[OjJv7wULBZV].col = G7lsfqVbF[OjJv7wULBZV +(861 - 860)].col;
                    G7lsfqVbF[OjJv7wULBZV +(364 - 363)].col = tGBlAN;
                    tGBlAN = G7lsfqVbF[OjJv7wULBZV].row;
                    G7lsfqVbF[OjJv7wULBZV].row = G7lsfqVbF[OjJv7wULBZV +(409 - 408)].row;
                    G7lsfqVbF[OjJv7wULBZV +1].row = tGBlAN;
                }
            }
        }
    for (VoqOWIkef = 0; VoqOWIkef < BHbd14W; VoqOWIkef++)
        printf ("%d %d\n", G7lsfqVbF[VoqOWIkef].row - 1, G7lsfqVbF[VoqOWIkef].col - 1);
    return 0;
}

