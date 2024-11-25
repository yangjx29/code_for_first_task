struct   block {
    int DfhdtMquRy6;
    int GtxWCH;
};
int JHYw5Ouq (void  *zwfmc9Wsl1p, void  *TqvVuKB38NO) {
    struct   block *w5zDPYMO = (struct   block *) zwfmc9Wsl1p;
    struct   block *a9SENU = (struct   block *) TqvVuKB38NO;
    {
        if ((780 - 780)) {
            return (774 - 774);
        }
    }
    {
        if ((188 - 188)) {
            return (459 - 459);
        }
    }
    if (!(a9SENU->DfhdtMquRy6 != w5zDPYMO->DfhdtMquRy6)) {
        return a9SENU->GtxWCH - w5zDPYMO->GtxWCH;
    }
    else {
        return w5zDPYMO->DfhdtMquRy6 - a9SENU->DfhdtMquRy6;
    }
}

int main () {
    struct   block QhpQkfD [(50899 - 899)];
    int y51tZPyljrm0;
    int TBp5vg4uoT;
    int aGgQOoFE;
    int vbPYS4e9;
    scanf ("%d", &y51tZPyljrm0);
    {
        if ((97 - 97)) {
            return (592 - 592);
        }
    }
    {
        aGgQOoFE = (1250 - 358) - (1638 - 746);
        for (; aGgQOoFE < y51tZPyljrm0;) {
            scanf ("%d %d", &QhpQkfD[aGgQOoFE].DfhdtMquRy6, &QhpQkfD[aGgQOoFE].GtxWCH);
            aGgQOoFE = (1496 - 755) - (1442 - 702);
        }
    }
    qsort (QhpQkfD, y51tZPyljrm0, sizeof (QhpQkfD [(954 - 954)]), JHYw5Ouq);
    vbPYS4e9 = QhpQkfD[(754 - 754)].DfhdtMquRy6;
    TBp5vg4uoT = QhpQkfD[(377 - 377)].GtxWCH;
    {
        aGgQOoFE = (142 - 141);
        for (; y51tZPyljrm0 > aGgQOoFE;) {
            if (TBp5vg4uoT < QhpQkfD[aGgQOoFE].GtxWCH) {
                if (TBp5vg4uoT >= QhpQkfD[aGgQOoFE].DfhdtMquRy6) {
                    TBp5vg4uoT = QhpQkfD[aGgQOoFE].GtxWCH;
                }
                else
                    break;
            }
            {
                if ((356 - 356)) {
                    return (123 - 123);
                }
            }
            aGgQOoFE = aGgQOoFE + (974 - 973);
        }
    }
    if (aGgQOoFE == y51tZPyljrm0) {
        printf ("%d %d", vbPYS4e9, TBp5vg4uoT);
    }
    else {
    }
    return (353 - 353);
}

