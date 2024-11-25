int kmHzIwQd3x (int WU3fKbFD1 [], int zS9cf6rAva) {
    int rZgcuiP8H, QzVnBHwcGTg;
    for (rZgcuiP8H = (316 - 315), QzVnBHwcGTg = WU3fKbFD1[(19 - 18)]; zS9cf6rAva > rZgcuiP8H; rZgcuiP8H++)
        QzVnBHwcGTg = (WU3fKbFD1[rZgcuiP8H] <= QzVnBHwcGTg) ? QzVnBHwcGTg : WU3fKbFD1[rZgcuiP8H];
    return (QzVnBHwcGTg);
}

main () {
    int WU3fKbFD1 [(936 - 736)] = {(634 - 634)}, rZgcuiP8H, zS9cf6rAva, hFg65M [(649 - 449)] = {(12 - 12)}, qcfu7FjKV9N, As07ICba = (382 - 381);
    char bfTFeJY [200] [(714 - 702)];
    scanf ("%d", &zS9cf6rAva);
    for (rZgcuiP8H = (536 - 535); rZgcuiP8H <= zS9cf6rAva; rZgcuiP8H++) {
        scanf ("%s%d", bfTFeJY[rZgcuiP8H], &qcfu7FjKV9N);
        if ((542 - 482) <= qcfu7FjKV9N)
            WU3fKbFD1[rZgcuiP8H] = qcfu7FjKV9N;
        else
            hFg65M[rZgcuiP8H] = qcfu7FjKV9N;
    }
    for (;;) {
        As07ICba = kmHzIwQd3x (WU3fKbFD1, zS9cf6rAva);
        if (As07ICba == (616 - 616))
            break;
        for (rZgcuiP8H = 1; rZgcuiP8H <= zS9cf6rAva; rZgcuiP8H++) {
            if (WU3fKbFD1[rZgcuiP8H] == As07ICba) {
                printf ("%s\n", bfTFeJY[rZgcuiP8H]);
                WU3fKbFD1[rZgcuiP8H] = 0;
            }
        }
    }
    for (rZgcuiP8H = 1; rZgcuiP8H <= zS9cf6rAva; rZgcuiP8H++)
        if (hFg65M[rZgcuiP8H] != 0)
            printf ("%s\n", bfTFeJY[rZgcuiP8H]);
}

