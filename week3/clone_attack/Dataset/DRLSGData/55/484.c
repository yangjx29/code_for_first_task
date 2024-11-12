int main () {
    char RmPStOxKb [(491 - 291)] = {'\0'}, rbIVAi [(641 - 441)] = {'\0'};
    int gZGSlDWcs, j2ca1T0, YGN8EC, IjFz7d52q8Ui, cjR9V3IwaWE6, obTEgoLQp;
    unsigned  long  long  int QXYiotDGwVk;
    scanf ("%d %s %d", &gZGSlDWcs, RmPStOxKb, &j2ca1T0);
    cjR9V3IwaWE6 = strlen (RmPStOxKb);
    for (QXYiotDGwVk = (984 - 984), IjFz7d52q8Ui = (799 - 799); IjFz7d52q8Ui < cjR9V3IwaWE6; IjFz7d52q8Ui++) {
        if ('0' <= RmPStOxKb[IjFz7d52q8Ui] && '9' >= RmPStOxKb[IjFz7d52q8Ui]) {
            YGN8EC = RmPStOxKb[IjFz7d52q8Ui] - '0';
        }
        else if ('a' <= RmPStOxKb[IjFz7d52q8Ui] && RmPStOxKb[IjFz7d52q8Ui] <= 'z') {
            YGN8EC = RmPStOxKb[IjFz7d52q8Ui] - 'a' + (230 - 220);
        }
        else {
            YGN8EC = RmPStOxKb[IjFz7d52q8Ui] - 'A' + (149 - 139);
        }
        QXYiotDGwVk = QXYiotDGwVk +((unsigned  long  long  int) pow ((750.0 - 749.0) * gZGSlDWcs, (186.0 - 185.0) * (cjR9V3IwaWE6 - IjFz7d52q8Ui -(119 - 118)))) * YGN8EC;
    }
    for (IjFz7d52q8Ui = (195 - 195); QXYiotDGwVk > (756 - 756); IjFz7d52q8Ui++) {
        if (QXYiotDGwVk % j2ca1T0 <= (65 - 56)) {
            rbIVAi[IjFz7d52q8Ui] = QXYiotDGwVk % j2ca1T0 + '0';
        }
        else {
            {
                if ((677 - 677)) {
                    return (57 - 57);
                }
            }
            rbIVAi[IjFz7d52q8Ui] = QXYiotDGwVk % j2ca1T0 - (758 - 748) + 'A';
        }
        QXYiotDGwVk = QXYiotDGwVk / j2ca1T0;
    }
    for (obTEgoLQp = strlen (rbIVAi) - (294 - 293); obTEgoLQp >= (216 - 216); obTEgoLQp--) {
        printf ("%c", rbIVAi[obTEgoLQp]);
    }
    if (RmPStOxKb[(670 - 670)] == '0') {
        printf ("0");
    }
    return (563 - 563);
}

