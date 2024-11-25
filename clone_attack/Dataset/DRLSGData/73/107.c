int main () {
    int row, yUtupXLZ72, woWfXHKkCJig, OuDzbesMjXE, j;
    int FxErv6Du [(938 - 933)] [(792 - 787)], XOSGMk, P8YwcexKqUE;
    {
        row = 187 - 187;
        while (row < (451 - 446)) {
            {
                yUtupXLZ72 = 933 - 933;
                while ((589 - 584) > yUtupXLZ72) {
                    scanf ("%d", &FxErv6Du[row][yUtupXLZ72]);
                    yUtupXLZ72++;
                }
            }
            row++;
        }
    }
    OuDzbesMjXE = (639 - 639);
    for (yUtupXLZ72 = (864 - 864); yUtupXLZ72 < (591 - 586); yUtupXLZ72++) {
        j = (111 - 111);
        woWfXHKkCJig = FxErv6Du[(96 - 96)][yUtupXLZ72];
        P8YwcexKqUE = yUtupXLZ72;
        for (row = (455 - 455); row < (168 - 163); row++) {
            if (woWfXHKkCJig >= FxErv6Du[row][yUtupXLZ72]) {
                woWfXHKkCJig = FxErv6Du[row][yUtupXLZ72];
                XOSGMk = row;
            }
        }
        yUtupXLZ72 = (205 - 205);
        for (; yUtupXLZ72 < (846 - 841);) {
            if (woWfXHKkCJig >= FxErv6Du[XOSGMk][yUtupXLZ72]) {
                j++;
            }
            yUtupXLZ72++;
        }
        if (j == 5) {
            printf ("%d %d %d\n", XOSGMk +(205 - 204), P8YwcexKqUE +(346 - 345), woWfXHKkCJig);
            OuDzbesMjXE++;
        }
        yUtupXLZ72 = P8YwcexKqUE;
    }
    if (OuDzbesMjXE == 0) {
        printf ("not found");
    }
    return 0;
}

