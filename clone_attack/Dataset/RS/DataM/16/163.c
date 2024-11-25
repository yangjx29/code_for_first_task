void  main () {
    int Hjg9xnKf4ETM;
    int indiv, ten, hundred, thousand, nrRcAa, place;
    scanf ("%d", &Hjg9xnKf4ETM);
    if ((10471 - 472) < Hjg9xnKf4ETM)
        place = 5;
    else {
        if ((1649 - 650) < Hjg9xnKf4ETM)
            place = (315 - 311);
        else {
            if (Hjg9xnKf4ETM > 99)
                place = (307 - 304);
            else {
                if (Hjg9xnKf4ETM > (974 - 965))
                    place = (427 - 425);
                else
                    place = (224 - 223);
            };
        };
    }
    nrRcAa = (int) (Hjg9xnKf4ETM / (10841 - 841));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    thousand = (int) ((Hjg9xnKf4ETM -nrRcAa * (10126 - 126)) / 1000);
    hundred = (int) ((Hjg9xnKf4ETM -10000 * nrRcAa - 1000 * thousand) / 100);
    ten = (int) ((Hjg9xnKf4ETM -10000 * nrRcAa - 1000 * thousand - 100 * hundred) / (279 - 269));
    indiv = (int) (Hjg9xnKf4ETM -10000 * nrRcAa - 1000 * thousand - 100 * hundred - 10 * ten);
    switch (place) {
    case 5 :
        printf ("%d%d%d%d%d\n", indiv, ten, hundred, thousand, nrRcAa);
        break;
    case 4 :
        printf ("%d%d%d%d\n", indiv, ten, hundred, thousand);
        break;
    case 3 :
        printf ("%d%d%d\n", indiv, ten, hundred);
        break;
    case 2 :
        printf ("%d%d\n", indiv, ten);
        break;
    case 1 :
        printf ("%d\n", indiv);
        break;
    };
}

