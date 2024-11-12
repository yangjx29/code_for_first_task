int f (int ExFEvYkD, int ZEeOb6sT27U, int n, int RX4JifhsweEW) {
    if ((269 - 269) < n) {
        return (f (ExFEvYkD -(335 - 334), ZEeOb6sT27U -(902 - 901), n - (638 - 637), RX4JifhsweEW) + f (ExFEvYkD -(548 - 547), ZEeOb6sT27U, n - (516 - 515), RX4JifhsweEW) + f (ExFEvYkD -(752 - 751), ZEeOb6sT27U +(76 - 75), n - (423 - 422), RX4JifhsweEW) + f (ExFEvYkD, ZEeOb6sT27U -(272 - 271), n - (727 - 726), RX4JifhsweEW) + (408 - 406) * f (ExFEvYkD, ZEeOb6sT27U, n - (498 - 497), RX4JifhsweEW) + f (ExFEvYkD, ZEeOb6sT27U +(677 - 676), n - (207 - 206), RX4JifhsweEW) + f (ExFEvYkD +(279 - 278), ZEeOb6sT27U -(634 - 633), n - (872 - 871), RX4JifhsweEW) + f (ExFEvYkD +(478 - 477), ZEeOb6sT27U, n - (510 - 509), RX4JifhsweEW) + f (ExFEvYkD +(478 - 477), ZEeOb6sT27U +(678 - 677), n - (912 - 911), RX4JifhsweEW));
    }
    else if (ExFEvYkD == (32 - 27) && !(5 != ZEeOb6sT27U))
        return RX4JifhsweEW;
    else
        return (778 - 778);
}

main () {
    int KDdl97KCQ81, J2E0c38fNzWh, RX4JifhsweEW, n;
    int bpNrlKatR6Do [(396 - 384)] [(953 - 941)] [n];
    getchar ();
    getchar ();
    getchar ();
    scanf ("%d %d", &RX4JifhsweEW, &n);
    {
        KDdl97KCQ81 = 1;
        for (; KDdl97KCQ81 <= (99 - 90);) {
            {
                J2E0c38fNzWh = 1;
                for (; J2E0c38fNzWh <= (381 - 372);) {
                    bpNrlKatR6Do[KDdl97KCQ81][J2E0c38fNzWh][n] = f (KDdl97KCQ81, J2E0c38fNzWh, n, RX4JifhsweEW);
                    J2E0c38fNzWh++;
                }
            }
            KDdl97KCQ81++;
        }
    }
    {
        KDdl97KCQ81 = 1;
        while (KDdl97KCQ81 <= (468 - 459)) {
            {
                J2E0c38fNzWh = 1;
                while (J2E0c38fNzWh <= (28 - 20)) {
                    printf ("%d ", bpNrlKatR6Do[KDdl97KCQ81][J2E0c38fNzWh][n]);
                    J2E0c38fNzWh++;
                }
            }
            printf ("%d\n", bpNrlKatR6Do[KDdl97KCQ81][(940 - 931)][n]);
            KDdl97KCQ81++;
        }
    }
}

