void  main () {
    int H7yGHn;
    int EmwU3Kix;
    int yivwf7ynPIa;
    int b1ILZrA540j;
    int b;
    scanf ("%d %d", &H7yGHn, &EmwU3Kix);
    for (b1ILZrA540j = H7yGHn +EmwU3Kix; b1ILZrA540j > 0; b1ILZrA540j = b1ILZrA540j + 1) {
        yivwf7ynPIa = b1ILZrA540j;
        for (b = 1; !(0 != (yivwf7ynPIa - EmwU3Kix) % H7yGHn) && b <= H7yGHn; b = b + 1) {
            yivwf7ynPIa = yivwf7ynPIa - (yivwf7ynPIa - EmwU3Kix) / H7yGHn -EmwU3Kix;
        }
        if (b == H7yGHn +1 && yivwf7ynPIa > 0)
            break;
    }
    printf ("%d", b1ILZrA540j);
}

