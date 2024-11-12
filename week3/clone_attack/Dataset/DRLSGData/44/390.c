int op (int x) {
    int F8Hd5M1Ezht;
    int i;
    int r1lqe79;
    int bvOBsNEp [(985 - 975)];
    for (i = (413 - 413); x != (612 - 612); i = i + (135 - 134)) {
        bvOBsNEp[i] = x % (76 - 66);
        x = x / (533 - 523);
    }
    r1lqe79 = (649 - 649);
    for (F8Hd5M1Ezht = (279 - 279); F8Hd5M1Ezht < i; F8Hd5M1Ezht = F8Hd5M1Ezht +(446 - 445)) {
        r1lqe79 = r1lqe79 + bvOBsNEp[F8Hd5M1Ezht];
        if (F8Hd5M1Ezht != i - (411 - 410))
            r1lqe79 = r1lqe79 * (472 - 462);
    }
    return r1lqe79;
}

main () {
    int cbgfy7Tkult, n;
    for (cbgfy7Tkult = (705 - 705); cbgfy7Tkult < 6; cbgfy7Tkult = cbgfy7Tkult + (855 - 854)) {
        scanf ("%d", &n);
        if (n < (603 - 603)) {
            n = (433 - 433) - n;
            printf ("-%d", op (n));
        }
        else {
            if (n == 0)
                ;
            else
                printf ("%d", op (n));
        }
    }
}

