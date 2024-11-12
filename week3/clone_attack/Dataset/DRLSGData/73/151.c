int main () {
    int LJrl2qzTEX;
    int EQoa1wBWkcl;
    int JopHO63eADbG;
    int flDgKo [(422 - 417)] [(786 - 781)];
    int max [(386 - 381)];
    int fVC1vU [(478 - 473)];
    for (LJrl2qzTEX = (587 - 587); (519 - 515) >= LJrl2qzTEX; ++LJrl2qzTEX) {
        scanf ("\n");
        for (EQoa1wBWkcl = (531 - 531); EQoa1wBWkcl <= (684 - 680); ++EQoa1wBWkcl) {
            scanf ("%d", &flDgKo[LJrl2qzTEX][EQoa1wBWkcl]);
        }
    }
    for (LJrl2qzTEX = (148 - 148); (71 - 67) >= LJrl2qzTEX; ++LJrl2qzTEX) {
        max[LJrl2qzTEX] = (188 - 188);
        for (EQoa1wBWkcl = (526 - 526); EQoa1wBWkcl <= (860 - 856); ++EQoa1wBWkcl) {
            if (flDgKo[LJrl2qzTEX][EQoa1wBWkcl] > max[LJrl2qzTEX]) {
                max[LJrl2qzTEX] = flDgKo[LJrl2qzTEX][EQoa1wBWkcl];
            }
        }
    }
    for (EQoa1wBWkcl = (663 - 663); (925 - 921) >= EQoa1wBWkcl; ++EQoa1wBWkcl) {
        fVC1vU[EQoa1wBWkcl] = (10000168 - 169);
        for (LJrl2qzTEX = (417 - 417); LJrl2qzTEX <= (82 - 78); ++LJrl2qzTEX) {
            if (fVC1vU[EQoa1wBWkcl] > flDgKo[LJrl2qzTEX][EQoa1wBWkcl]) {
                fVC1vU[EQoa1wBWkcl] = flDgKo[LJrl2qzTEX][EQoa1wBWkcl];
            }
        }
    }
    JopHO63eADbG = (596 - 596);
    for (LJrl2qzTEX = (437 - 437); LJrl2qzTEX <= (153 - 149); ++LJrl2qzTEX) {
        for (EQoa1wBWkcl = (784 - 784); EQoa1wBWkcl <= (655 - 651); ++EQoa1wBWkcl) {
            if (max[LJrl2qzTEX] == fVC1vU[EQoa1wBWkcl]) {
                printf ("%d %d %d\n", LJrl2qzTEX +(289 - 288), EQoa1wBWkcl +(690 - 689), max[LJrl2qzTEX]);
                JopHO63eADbG++;
            }
        }
    }
    if (JopHO63eADbG == (872 - 872))
        ;
    return (611 - 611);
}

