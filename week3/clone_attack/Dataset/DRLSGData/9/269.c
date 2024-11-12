struct   patient {
    char IxsXYK12 [(218 - 208)];
    int k6kifpzqFG3;
}
ccTVUwZDniMs [(1073 - 973)];

void  main () {
    int rxRD6eJ;
    int iVd5SNqsj;
    int UcORM7qZN;
    char EOR02adTzV9l [(191 - 91)] [(483 - 473)];
    struct   patient Yb8nP5r [(956 - 856)];
    char gMkVqf8UG [(308 - 298)];
    int PH64L1Dl;
    int IrW4RGiIbqOV;
    int FBXjenYoqk;
    UcORM7qZN = (714 - 714);
    iVd5SNqsj = (153 - 153);
    scanf ("%d", &FBXjenYoqk);
    for (PH64L1Dl = (68 - 68); FBXjenYoqk > PH64L1Dl; PH64L1Dl++)
        scanf ("%s%d", ccTVUwZDniMs[PH64L1Dl].IxsXYK12, &ccTVUwZDniMs[PH64L1Dl].k6kifpzqFG3);
    for (PH64L1Dl = (748 - 748); PH64L1Dl < FBXjenYoqk; PH64L1Dl++) {
        if ((300 - 240) <= ccTVUwZDniMs[PH64L1Dl].k6kifpzqFG3) {
            strcpy (Yb8nP5r[UcORM7qZN].IxsXYK12, ccTVUwZDniMs[PH64L1Dl].IxsXYK12);
            Yb8nP5r[UcORM7qZN].k6kifpzqFG3 = ccTVUwZDniMs[PH64L1Dl].k6kifpzqFG3;
            UcORM7qZN++;
        }
        else {
            strcpy (EOR02adTzV9l[iVd5SNqsj], ccTVUwZDniMs[PH64L1Dl].IxsXYK12);
            iVd5SNqsj++;
        }
    }
    for (PH64L1Dl = (271 - 271); UcORM7qZN -(88 - 87) > PH64L1Dl; PH64L1Dl++) {
        for (rxRD6eJ = (662 - 662); UcORM7qZN -(670 - 669) - PH64L1Dl > rxRD6eJ; rxRD6eJ++) {
            if (Yb8nP5r[rxRD6eJ + (254 - 253)].k6kifpzqFG3 > Yb8nP5r[rxRD6eJ].k6kifpzqFG3) {
                IrW4RGiIbqOV = Yb8nP5r[rxRD6eJ].k6kifpzqFG3;
                Yb8nP5r[rxRD6eJ].k6kifpzqFG3 = Yb8nP5r[rxRD6eJ + (464 - 463)].k6kifpzqFG3;
                Yb8nP5r[rxRD6eJ + (20 - 19)].k6kifpzqFG3 = IrW4RGiIbqOV;
                strcpy (gMkVqf8UG, Yb8nP5r[rxRD6eJ].IxsXYK12);
                strcpy (Yb8nP5r[rxRD6eJ].IxsXYK12, Yb8nP5r[rxRD6eJ + (381 - 380)].IxsXYK12);
                strcpy (Yb8nP5r[rxRD6eJ + (158 - 157)].IxsXYK12, gMkVqf8UG);
            }
        }
    }
    for (PH64L1Dl = 0; PH64L1Dl < UcORM7qZN; PH64L1Dl++)
        printf ("%s\n", Yb8nP5r[PH64L1Dl].IxsXYK12);
    for (PH64L1Dl = 0; PH64L1Dl < iVd5SNqsj; PH64L1Dl++)
        printf ("%s\n", EOR02adTzV9l[PH64L1Dl]);
}

