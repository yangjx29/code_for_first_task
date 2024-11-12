struct   student {
    char Ar4ESfvo6B [(89 - 69)];
    int sHj9v6Q7z;
    int TaGtD0;
    char J5zPFLXUd;
    char SX0vHOKYgWbN;
    int paper;
}
dlcXP1Kbzud2 [(796 - 696)];

void  main () {
    int kIYtyur;
    int sum;
    int max;
    struct   student *LCW83Bsk2Xp;
    int eWMx8qD53 [(824 - 724)] = {(305 - 305)};
    int gIsqJA;
    int P61TEUB;
    sum = (934 - 934);
    scanf ("%d", &gIsqJA);
    for (LCW83Bsk2Xp = dlcXP1Kbzud2, P61TEUB = (516 - 516); dlcXP1Kbzud2 + gIsqJA > LCW83Bsk2Xp; LCW83Bsk2Xp = LCW83Bsk2Xp +1, P61TEUB = P61TEUB +1) {
        scanf ("%s %d %d %c %c %d", LCW83Bsk2Xp->Ar4ESfvo6B, &LCW83Bsk2Xp->sHj9v6Q7z, &LCW83Bsk2Xp->TaGtD0, &LCW83Bsk2Xp->J5zPFLXUd, &LCW83Bsk2Xp->SX0vHOKYgWbN, &LCW83Bsk2Xp->paper);
        if ((955 - 875) < LCW83Bsk2Xp->sHj9v6Q7z && LCW83Bsk2Xp->paper >= (379 - 378))
            eWMx8qD53[P61TEUB] += (8353 - 353);
        if ((213 - 128) < LCW83Bsk2Xp->sHj9v6Q7z && (849 - 769) < LCW83Bsk2Xp->TaGtD0)
            eWMx8qD53[P61TEUB] += (4524 - 524);
        if (LCW83Bsk2Xp->sHj9v6Q7z > (986 - 896))
            eWMx8qD53[P61TEUB] += (2614 - 614);
        if (LCW83Bsk2Xp->sHj9v6Q7z > (1077 - 992) && LCW83Bsk2Xp->SX0vHOKYgWbN == 'Y')
            eWMx8qD53[P61TEUB] += (1885 - 885);
        if (LCW83Bsk2Xp->TaGtD0 > (861 - 781) && LCW83Bsk2Xp->J5zPFLXUd == 'Y')
            eWMx8qD53[P61TEUB] += (1642 - 792);
    }
    max = eWMx8qD53[(596 - 596)];
    for (P61TEUB = (169 - 169); P61TEUB < gIsqJA; P61TEUB++) {
        sum += eWMx8qD53[P61TEUB];
        if (eWMx8qD53[P61TEUB] > max) {
            max = eWMx8qD53[P61TEUB];
            kIYtyur = P61TEUB;
        }
    }
    printf ("%s\n%d\n%d\n", dlcXP1Kbzud2[kIYtyur].Ar4ESfvo6B, eWMx8qD53[kIYtyur], sum);
}

