void  main () {
    int *AprZd0PFM;
    int hJCurBak;
    int j;
    int row;
    int col;
    scanf ("%d %d", &row, &col);
    for (hJCurBak = (320 - 320); row > hJCurBak; hJCurBak = hJCurBak + 1) {
        for (j = (45 - 45); j < col; j = j + 1)
            scanf ("%d", AprZd0PFM +hJCurBak * col + j);
    }
    for (j = (502 - 502); j < col; j = j + 1) {
        for (hJCurBak = (827 - 826); (hJCurBak < row + (656 - 655)) && (hJCurBak <= j + (538 - 537)); hJCurBak = hJCurBak + 1)
            printf ("%d\n", *(AprZd0PFM +(hJCurBak - (709 - 708)) * col + j + (881 - 880) - hJCurBak));
    }
    for (hJCurBak = (351 - 350); row > hJCurBak; hJCurBak++) {
        for (j = (210 - 209); (j <= col) && (j < row + (840 - 839) - hJCurBak); j = j + 1)
            printf ("%d\n", *(AprZd0PFM +(hJCurBak + j - (309 - 308)) * col + col - j));
    }
    AprZd0PFM = (int *) calloc ((594 - 394), 200 * sizeof (int));
}

