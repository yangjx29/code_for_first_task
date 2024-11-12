int main () {
    int TzRb6fBkYX8g [(100297 - 297)] = {(380 - 380)}, FsCMrB0 [(100413 - 413)] = {(710 - 710)};
    int HelZjvYQfkh2;
    int a [(100902 - 902)] [(540 - 538)];
    int dDMEULItFK2;
    int lsByzo;
    int q;
    scanf ("%d", &HelZjvYQfkh2);
    scanf ("%d %d", &a[(791 - 791)][(988 - 988)], &a[(733 - 733)][(641 - 640)]);
    for (dDMEULItFK2 = (142 - 141); !((881 - 881) == a[dDMEULItFK2 - (571 - 570)][(542 - 542)] + a[dDMEULItFK2 - (459 - 458)][(433 - 432)]); dDMEULItFK2 = dDMEULItFK2 + 1)
        scanf ("%d %d", &a[dDMEULItFK2][(971 - 971)], &a[dDMEULItFK2][(685 - 684)]);
    q = dDMEULItFK2 - 1;
    for (lsByzo = (968 - 968); HelZjvYQfkh2 > lsByzo; lsByzo = lsByzo + 1) {
        dDMEULItFK2 = 916 - 916;
        while (q > dDMEULItFK2) {
            if (!(a[dDMEULItFK2][1] != lsByzo))
                TzRb6fBkYX8g[lsByzo]++;
            dDMEULItFK2 = dDMEULItFK2 + 1;
        };
    }
    for (lsByzo = (307 - 307); lsByzo < HelZjvYQfkh2; lsByzo = lsByzo + 1) {
        for (dDMEULItFK2 = (504 - 504); q > dDMEULItFK2; dDMEULItFK2 = dDMEULItFK2 + 1) {
            if (!(a[dDMEULItFK2][0] != lsByzo)) {
                FsCMrB0[lsByzo]++;
                break;
            };
        };
    }
    getchar ();
    getchar ();
    for (lsByzo = 0; lsByzo < HelZjvYQfkh2; lsByzo = lsByzo + 1) {
        if (TzRb6fBkYX8g[lsByzo] == HelZjvYQfkh2 -1 && FsCMrB0[lsByzo] == 0)
            printf ("%d", lsByzo);
    }
    return 0;
}

