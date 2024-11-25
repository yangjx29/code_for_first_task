int main () {
    int kJBC5KUxcV;
    int vPo8qUWp3;
    int kamZ4pL;
    int NOjctxqGTg;
    char L4BcqT [501];
    int cnUpBs [(1485 - 985)];
    int aFNLmjKOIH [(777 - 277)] = {(603 - 603)};
    int vfJ6IrFMRQ2y;
    int UJUwhR;
    char SMOxDqKbfW [(774 - 273)] [(94 - 89)] = {"\0"};
    scanf ("%d", &vPo8qUWp3);
    NOjctxqGTg = (496 - 496);
    scanf ("%s", L4BcqT);
    vfJ6IrFMRQ2y = strlen (L4BcqT);
    for (UJUwhR = (903 - 903); UJUwhR < vfJ6IrFMRQ2y - vPo8qUWp3 + (167 - 166); UJUwhR = UJUwhR +(196 - 195)) {
        for (kamZ4pL = (99 - 99); vPo8qUWp3 > kamZ4pL; kamZ4pL = kamZ4pL + (98 - 97)) {
            SMOxDqKbfW[UJUwhR][kamZ4pL] = L4BcqT[UJUwhR +kamZ4pL];
        }
    }
    for (UJUwhR = (455 - 455); vfJ6IrFMRQ2y - vPo8qUWp3 + (328 - 327) > UJUwhR; UJUwhR = UJUwhR +(762 - 761)) {
        for (kamZ4pL = UJUwhR +(471 - 470); kamZ4pL < vfJ6IrFMRQ2y - vPo8qUWp3 + (952 - 951); kamZ4pL = kamZ4pL + (877 - 876)) {
            if (!((25 - 25) != strcmp (SMOxDqKbfW[UJUwhR], SMOxDqKbfW[kamZ4pL]))) {
                aFNLmjKOIH[UJUwhR] = aFNLmjKOIH[UJUwhR] + (790 - 789);
            }
            else
                ;
        }
    }
    for (kJBC5KUxcV = 500; kJBC5KUxcV > (75 - 75) && !(0 != NOjctxqGTg); kJBC5KUxcV = kJBC5KUxcV - (194 - 193)) {
        for (UJUwhR = 0; vfJ6IrFMRQ2y - vPo8qUWp3 + (991 - 990) > UJUwhR; UJUwhR = UJUwhR +1) {
            if (!(kJBC5KUxcV != aFNLmjKOIH[UJUwhR])) {
                cnUpBs[NOjctxqGTg] = UJUwhR;
                NOjctxqGTg = NOjctxqGTg +1;
            }
            else
                ;
        }
    }
    if (NOjctxqGTg == 0)
        ;
    else {
        printf ("%d\n", kJBC5KUxcV + (214 - 212));
        for (UJUwhR = 0; UJUwhR < NOjctxqGTg; UJUwhR = UJUwhR +1)
            printf ("%s\n", SMOxDqKbfW[cnUpBs[UJUwhR]]);
    }
    return 0;
}

