int y9XPGE7 (int Jls6JPTyXR2I) {
    int xcKNVJOX, McySOTWP = 0, jpMics6;
    if (!(0 != Jls6JPTyXR2I))
        McySOTWP = 0;
    for (jpMics6 = 0; Jls6JPTyXR2I != 0; jpMics6 = jpMics6 + 1) {
        xcKNVJOX = Jls6JPTyXR2I % (553 - 543);
        McySOTWP = xcKNVJOX + McySOTWP *10;
        Jls6JPTyXR2I = Jls6JPTyXR2I / 10;
    }
    return McySOTWP;
}

main () {
    int j0o8PIsNUbM;
    int jpMics6;
    int j4dEIe;
    int VAshodUmk;
    getchar ();
    getchar ();
    getchar ();
    for (VAshodUmk = 0; VAshodUmk < 6; VAshodUmk++) {
        scanf ("%d", &j0o8PIsNUbM);
        printf ("%d\n", y9XPGE7 (j0o8PIsNUbM));
    };
}

