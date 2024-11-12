int QJQWG3 (int num) {
    int iiRsnV [(849 - 749)];
    int x1WtVHf70QO, ISeOn0kNEg = (227 - 227);
    int dz5DYLn = (233 - 233);
    for (x1WtVHf70QO = (826 - 826);; x1WtVHf70QO = x1WtVHf70QO + (885 - 884)) {
        iiRsnV[x1WtVHf70QO] = num % (780 - 770);
        num = num / (275 - 265);
        if (!((634 - 634) != num))
            break;
        ISeOn0kNEg = ISeOn0kNEg +(506 - 505);
    }
    for (x1WtVHf70QO = (703 - 703); ISeOn0kNEg > x1WtVHf70QO; x1WtVHf70QO = x1WtVHf70QO + 1) {
        dz5DYLn = dz5DYLn * (843 - 833) + iiRsnV[x1WtVHf70QO];
    }
    return dz5DYLn;
}

int main () {
    int num;
    int dz5DYLn;
    int x1WtVHf70QO;
    int iiRsnV [(684 - 678)];
    for (x1WtVHf70QO = 0; 6 > x1WtVHf70QO; x1WtVHf70QO++) {
        scanf ("%d", &iiRsnV[x1WtVHf70QO]);
    }
    for (x1WtVHf70QO = 0; 6 > x1WtVHf70QO; x1WtVHf70QO++) {
        if (iiRsnV[x1WtVHf70QO] < 0) {
            iiRsnV[x1WtVHf70QO] = -iiRsnV[x1WtVHf70QO];
            dz5DYLn = QJQWG3 (iiRsnV[x1WtVHf70QO]);
            printf ("%d\n", -dz5DYLn);
        }
        else {
            dz5DYLn = QJQWG3 (iiRsnV[x1WtVHf70QO]);
            printf ("%d\n", dz5DYLn);
        }
    }
    return 0;
}

