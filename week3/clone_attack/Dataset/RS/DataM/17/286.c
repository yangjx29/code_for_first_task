void  main () {
    int UblQLCJ5KFfn, F1VGsoHTnh, BhNcLn86DV;
    char NRHBj0S9 [MAX];
    char LfyT3GuioOHm [MAX];
    char WK83wGP4j [MAX];
    while (scanf ("%s", NRHBj0S9) != EOF) {
        UblQLCJ5KFfn = strlen (NRHBj0S9);
        strcpy (LfyT3GuioOHm, NRHBj0S9);
        for (F1VGsoHTnh = (814 - 814); F1VGsoHTnh < UblQLCJ5KFfn; F1VGsoHTnh = F1VGsoHTnh +1)
            if (!(')' != LfyT3GuioOHm[F1VGsoHTnh]) && F1VGsoHTnh > (414 - 414)) {
                BhNcLn86DV = 659 - 658;
                while (BhNcLn86DV >= (311 - 311)) {
                    if (LfyT3GuioOHm[BhNcLn86DV] == '(') {
                        LfyT3GuioOHm[F1VGsoHTnh] = ' ';
                        LfyT3GuioOHm[BhNcLn86DV] = ' ';
                        break;
                    }
                    BhNcLn86DV = BhNcLn86DV -1;
                };
            }
        printf ("%s\n", NRHBj0S9);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (F1VGsoHTnh = (946 - 946); F1VGsoHTnh < UblQLCJ5KFfn; F1VGsoHTnh = F1VGsoHTnh +1) {
            if (LfyT3GuioOHm[F1VGsoHTnh] == '(')
                WK83wGP4j[F1VGsoHTnh] = '$';
            else if (LfyT3GuioOHm[F1VGsoHTnh] == ')')
                WK83wGP4j[F1VGsoHTnh] = '?';
            else
                WK83wGP4j[F1VGsoHTnh] = ' ';
        }
        for (F1VGsoHTnh = 0; F1VGsoHTnh < UblQLCJ5KFfn; F1VGsoHTnh = F1VGsoHTnh +1)
            printf ("%c", WK83wGP4j[F1VGsoHTnh]);
        putchar ('\n');
    };
}

