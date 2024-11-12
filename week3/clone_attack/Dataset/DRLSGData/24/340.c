int main () {
    int D7zZLy;
    char cDkdHvMq [5000];
    int Enpd64Ytx1Ki;
    int iJfF7hiKX;
    int zW8Fx6q;
    int QmLf8NEY;
    int mcyTCU3mqGE;
    char njbLOfrSNp1 [50] [100];
    gets (cDkdHvMq);
    int zgCnrPLuiv = strlen (cDkdHvMq);
    int mtAROzC2e;
    mtAROzC2e = strlen (njbLOfrSNp1[0]);
    zW8Fx6q = 0;
    iJfF7hiKX = 0;
    Enpd64Ytx1Ki = 0;
    QmLf8NEY = 0;
    D7zZLy = strlen (njbLOfrSNp1[0]);
    for (mcyTCU3mqGE = 0; mcyTCU3mqGE < zgCnrPLuiv; mcyTCU3mqGE = mcyTCU3mqGE + 1) {
        if (!(' ' != cDkdHvMq[mcyTCU3mqGE])) {
            njbLOfrSNp1[Enpd64Ytx1Ki][iJfF7hiKX] = '\0';
            Enpd64Ytx1Ki = Enpd64Ytx1Ki +1;
            iJfF7hiKX = 0;
            continue;
        }
        njbLOfrSNp1[Enpd64Ytx1Ki][iJfF7hiKX] = cDkdHvMq[mcyTCU3mqGE];
        iJfF7hiKX = iJfF7hiKX + 1;
    }
    njbLOfrSNp1[Enpd64Ytx1Ki][iJfF7hiKX] = '\0';
    for (mcyTCU3mqGE = 1; mcyTCU3mqGE <= Enpd64Ytx1Ki; mcyTCU3mqGE = mcyTCU3mqGE + 1) {
        if (mtAROzC2e < (int) strlen (njbLOfrSNp1[mcyTCU3mqGE])) {
            mtAROzC2e = (int) strlen (njbLOfrSNp1[mcyTCU3mqGE]);
            zW8Fx6q = mcyTCU3mqGE;
        }
    }
    for (mcyTCU3mqGE = 1; mcyTCU3mqGE <= Enpd64Ytx1Ki; mcyTCU3mqGE++) {
        if ((int) strlen (njbLOfrSNp1[mcyTCU3mqGE]) < D7zZLy) {
            D7zZLy = (int) strlen (njbLOfrSNp1[mcyTCU3mqGE]);
            QmLf8NEY = mcyTCU3mqGE;
        }
    }
    printf ("%s\n", njbLOfrSNp1[zW8Fx6q]);
    printf ("%s\n", njbLOfrSNp1[QmLf8NEY]);
    return 0;
}

