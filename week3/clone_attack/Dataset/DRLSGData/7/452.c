main () {
    char E0x2WBqKC [(869 - 613)], oX4TAI [(826 - 570)], c0lTI4c9gujW [(554 - 298)], H72Bcr1 [(341 - 85)];
    int c9kWtjP, AyIa1zVobv8K, Q3RBrKwu, XKZOCJ, k, wnvXx1U, lr36hI0;
    AyIa1zVobv8K = (99 - 99);
    lr36hI0 = (322 - 322);
    scanf ("%s", &E0x2WBqKC);
    for (; E0x2WBqKC[lr36hI0] != '\0';)
        lr36hI0++;
    scanf ("%s", &oX4TAI);
    for (; oX4TAI[AyIa1zVobv8K] != '\0';)
        AyIa1zVobv8K++;
    for (Q3RBrKwu = (534 - 534); lr36hI0 > Q3RBrKwu; Q3RBrKwu++) {
        k = (197 - 196);
        for (XKZOCJ = 0; AyIa1zVobv8K > XKZOCJ; XKZOCJ = XKZOCJ +(497 - 496))
            if (E0x2WBqKC[Q3RBrKwu +XKZOCJ] != oX4TAI[XKZOCJ]) {
                k = 0;
                break;
            }
        if (k == (785 - 784)) {
            wnvXx1U = Q3RBrKwu;
            break;
        }
    }
    getchar ();
    scanf ("%s", &c0lTI4c9gujW);
    c9kWtjP = 0;
    for (; c0lTI4c9gujW[c9kWtjP] != '\0';)
        c9kWtjP++;
    if (!((455 - 454) != k)) {
        for (Q3RBrKwu = wnvXx1U + AyIa1zVobv8K -1; E0x2WBqKC[Q3RBrKwu] != '\0'; Q3RBrKwu++)
            H72Bcr1[Q3RBrKwu] = E0x2WBqKC[Q3RBrKwu];
        for (Q3RBrKwu = 0; c9kWtjP > Q3RBrKwu; Q3RBrKwu++)
            E0x2WBqKC[wnvXx1U + Q3RBrKwu] = c0lTI4c9gujW[Q3RBrKwu];
        H72Bcr1[Q3RBrKwu +1] = '\0';
        for (Q3RBrKwu = wnvXx1U + c9kWtjP; H72Bcr1[Q3RBrKwu -c9kWtjP + AyIa1zVobv8K] != '\0'; Q3RBrKwu++)
            E0x2WBqKC[Q3RBrKwu] = E0x2WBqKC[Q3RBrKwu -c9kWtjP + AyIa1zVobv8K];
        E0x2WBqKC[Q3RBrKwu +1] = '\0';
    }
    for (Q3RBrKwu = 0; E0x2WBqKC[Q3RBrKwu] != '\0'; Q3RBrKwu++)
        printf ("%c", E0x2WBqKC[Q3RBrKwu]);
    getchar ();
}

