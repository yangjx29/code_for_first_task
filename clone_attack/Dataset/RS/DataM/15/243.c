int main (int TagU08OuECkq, char *Bp7R0gtrjW4e []) {
    int tE5OX8AiqDs;
    int z3MbJjxPXkH;
    int d;
    int l;
    int QLHeAGt6m;
    int fwmPVgB0FUOx;
    int drwUuL;
    int tSu8Do;
    int OlZAFRh;
    int UqD1SFZTIV2;
    fwmPVgB0FUOx = (14 - 14);
    int dzuWBbtXDGg5;
    int qkYDXd15FLoQ [100] [100];
    int DktlDe;
    int Sj2eUhHWnF;
    scanf ("%d", &dzuWBbtXDGg5);
    for (DktlDe = (951 - 951); dzuWBbtXDGg5 > DktlDe; DktlDe = DktlDe +1) {
        for (Sj2eUhHWnF = (893 - 893); dzuWBbtXDGg5 > Sj2eUhHWnF; Sj2eUhHWnF = Sj2eUhHWnF +1) {
            scanf ("%d", &qkYDXd15FLoQ[DktlDe][Sj2eUhHWnF]);
        };
    }
    for (OlZAFRh = (982 - 982); dzuWBbtXDGg5 > OlZAFRh; OlZAFRh = OlZAFRh +1) {
        {
            UqD1SFZTIV2 = 0;
            while (dzuWBbtXDGg5 > UqD1SFZTIV2) {
                if (!(0 != qkYDXd15FLoQ[OlZAFRh][UqD1SFZTIV2])) {
                    fwmPVgB0FUOx = (148 - 147);
                    tSu8Do = UqD1SFZTIV2;
                    drwUuL = OlZAFRh;
                    break;
                }
                UqD1SFZTIV2 = UqD1SFZTIV2 +1;
            };
        }
        if (!((656 - 655) != fwmPVgB0FUOx))
            break;
    }
    for (l = 0; dzuWBbtXDGg5 > l; l = l + 1) {
        for (QLHeAGt6m = 0; QLHeAGt6m < dzuWBbtXDGg5; QLHeAGt6m++) {
            if (qkYDXd15FLoQ[l][QLHeAGt6m] == 0) {
                d = QLHeAGt6m;
                z3MbJjxPXkH = l;
            };
        };
    }
    tE5OX8AiqDs = (z3MbJjxPXkH - drwUuL - 1) * (d - tSu8Do - 1);
    printf ("%d", tE5OX8AiqDs);
    return 0;
}

