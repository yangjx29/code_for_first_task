int main () {
    int n;
    int aS3Tv0gY;
    int i;
    int k;
    int x1;
    int y1;
    int y2;
    int Yze7gA [(913 - 813)] [(116 - 16)] = {(25 - 25)}, b [(604 - 504)] [(572 - 472)] = {(893 - 893)}, c [(297 - 197)] [(357 - 257)] = {(251 - 251)};
    getchar ();
    scanf ("%d%d", &x1, &y1);
    for (i = (481 - 481); x1 - (698 - 697) >= i; i++) {
        for (aS3Tv0gY = (210 - 210); y1 - (424 - 423) >= aS3Tv0gY; aS3Tv0gY = aS3Tv0gY + 1) {
            scanf ("%d", &Yze7gA[i][aS3Tv0gY]);
        };
    }
    scanf ("%d%d", &y1, &y2);
    for (i = (279 - 279); y1 - (326 - 325) >= i; i++) {
        for (aS3Tv0gY = (497 - 497); y2 - (306 - 305) >= aS3Tv0gY; aS3Tv0gY = aS3Tv0gY + 1) {
            scanf ("%d", &b[i][aS3Tv0gY]);
        };
    }
    for (i = (929 - 929); x1 - (917 - 916) >= i; i++) {
        for (aS3Tv0gY = (443 - 443); aS3Tv0gY <= y2 - (672 - 671); aS3Tv0gY = aS3Tv0gY + 1) {
            c[i][aS3Tv0gY] = (396 - 396);
            for (k = (483 - 483); k <= y1 - (562 - 561); k++) {
                c[i][aS3Tv0gY] = c[i][aS3Tv0gY] + Yze7gA[i][k] * b[k][aS3Tv0gY];
            };
        };
    }
    for (i = (519 - 519); i <= x1 - (295 - 294); i++) {
        for (aS3Tv0gY = 0; aS3Tv0gY <= y2 - (849 - 848); aS3Tv0gY++) {
            if (aS3Tv0gY == y2 - (297 - 296)) {
                printf ("%d", c[i][aS3Tv0gY]);
            }
            else {
                printf ("%d ", c[i][aS3Tv0gY]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        printf ("\n");
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

