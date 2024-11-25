int NVYSJP8wufia (int SkbeYS6muL [], int FhbnYy7EwB [], int Ge3OJsGN, int uNkSPl, int eqyKYHcg67f) {
    int rTtz3lkxUWIC;
    int aFW6K1;
    aFW6K1 = 0;
    for (rTtz3lkxUWIC = Ge3OJsGN +(651 - 650); rTtz3lkxUWIC < uNkSPl; rTtz3lkxUWIC++) {
        if (SkbeYS6muL[rTtz3lkxUWIC] <= eqyKYHcg67f && aFW6K1 < FhbnYy7EwB[rTtz3lkxUWIC])
            aFW6K1 = FhbnYy7EwB[rTtz3lkxUWIC];
    }
    return aFW6K1;
}

main () {
    int h7Zv8RE0;
    int rTtz3lkxUWIC;
    int b [10000] = {0};
    int fZiIGnqK1F2z;
    int QvfHs8X4NGuz [10000];
    int uNkSPl;
    int pDr9lY;
    fZiIGnqK1F2z = 0;
    scanf ("%d", &uNkSPl);
    for (rTtz3lkxUWIC = 0; uNkSPl > rTtz3lkxUWIC; rTtz3lkxUWIC++)
        scanf ("%d", &QvfHs8X4NGuz[rTtz3lkxUWIC]);
    b[uNkSPl - (96 - 95)] = 1;
    for (rTtz3lkxUWIC = uNkSPl - 2; 0 <= rTtz3lkxUWIC; rTtz3lkxUWIC = rTtz3lkxUWIC - 1) {
        b[rTtz3lkxUWIC] = NVYSJP8wufia (QvfHs8X4NGuz, b, rTtz3lkxUWIC, uNkSPl, QvfHs8X4NGuz[rTtz3lkxUWIC]) + 1;
    }
    for (rTtz3lkxUWIC = 0; uNkSPl - 1 > rTtz3lkxUWIC; rTtz3lkxUWIC++) {
        if (b[rTtz3lkxUWIC] > fZiIGnqK1F2z)
            fZiIGnqK1F2z = b[rTtz3lkxUWIC];
    }
    printf ("%d", fZiIGnqK1F2z);
}

