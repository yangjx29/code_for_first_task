int main () {
    int nzOALI8, WCSNEzDy, gAKl5nmf, LJ7YdvTFD;
    scanf ("%d", &nzOALI8);
    while (nzOALI8--) {
        int *shuzu = (int *) malloc (sizeof (int) * WCSNEzDy);
        LJ7YdvTFD = 0;
        scanf ("%d", &WCSNEzDy);
        for (int tjbk3sM = 0;
        tjbk3sM < WCSNEzDy; tjbk3sM++) {
            scanf ("%d", &gAKl5nmf);
            if (LJ7YdvTFD +gAKl5nmf < 60)
                if (LJ7YdvTFD +gAKl5nmf + 3 < 60)
                    LJ7YdvTFD += 3;
                else
                    LJ7YdvTFD = 60 - gAKl5nmf;
        }
        printf ("%d\n", 60 - LJ7YdvTFD);
    }
    return 0;
}

