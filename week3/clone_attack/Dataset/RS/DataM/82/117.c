int main () {
    int N0yHYZsu;
    int MOND4A1, uJzZYDWXk0;
    int EeuqbVD1pLas [(729 - 629)], ixqafc8PwuL, d2iVJOGrYE, NlFCJa1N = (970 - 970);
    getchar ();
    scanf ("%d", &ixqafc8PwuL);
    for (d2iVJOGrYE = (634 - 634); ixqafc8PwuL > d2iVJOGrYE; d2iVJOGrYE = d2iVJOGrYE + 1) {
        EeuqbVD1pLas[d2iVJOGrYE] = 0;
    }
    {
        d2iVJOGrYE = 0;
        while (ixqafc8PwuL > d2iVJOGrYE) {
            d2iVJOGrYE++;
            scanf ("%d%d", &MOND4A1, &uJzZYDWXk0);
            if ((965 - 875) <= MOND4A1 &&MOND4A1 <= 140 && 60 <= uJzZYDWXk0 && uJzZYDWXk0 <= 90)
                EeuqbVD1pLas[NlFCJa1N]++;
            else {
                NlFCJa1N++;
            };
        };
    }
    for (d2iVJOGrYE = 0; d2iVJOGrYE < ixqafc8PwuL; d2iVJOGrYE = d2iVJOGrYE + 1) {
        for (NlFCJa1N = 0; NlFCJa1N < ixqafc8PwuL - (500 - 499); NlFCJa1N = NlFCJa1N +1) {
            if (EeuqbVD1pLas[NlFCJa1N] < EeuqbVD1pLas[NlFCJa1N +1]) {
                N0yHYZsu = EeuqbVD1pLas[NlFCJa1N];
                EeuqbVD1pLas[NlFCJa1N] = EeuqbVD1pLas[NlFCJa1N +1];
                EeuqbVD1pLas[NlFCJa1N +1] = N0yHYZsu;
            };
        };
    }
    printf ("%d", EeuqbVD1pLas[0]);
    getchar ();
    return 0;
}

