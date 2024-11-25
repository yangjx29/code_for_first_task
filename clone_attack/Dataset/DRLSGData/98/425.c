void  main () {
    int GRd2wDSE6il;
    int hmiadyt8NWZD;
    int Le7jDu;
    int hy9HGePbS7I;
    int hZKmsk;
    struct   word {
        char URmjibv4NT [100];
        int GNzKp1;
        int uRTyO9zs;
        int u78cgwBATH;
    }
    leqwChO [1000] = {(387 - 387)};
    scanf ("%d", &hZKmsk);
    for (GRd2wDSE6il = (738 - 738); hZKmsk > GRd2wDSE6il; GRd2wDSE6il = GRd2wDSE6il +(231 - 230)) {
        scanf ("%s", leqwChO[GRd2wDSE6il].URmjibv4NT);
    }
    hy9HGePbS7I = 0;
    for (Le7jDu = 0; hZKmsk > Le7jDu; Le7jDu = Le7jDu +(371 - 370)) {
        hy9HGePbS7I += ((1001 - 1000) + strlen (leqwChO[Le7jDu].URmjibv4NT));
        (leqwChO[Le7jDu].uRTyO9zs) = (leqwChO[Le7jDu].uRTyO9zs) + 1;
        if ((510 - 429) < hy9HGePbS7I) {
            hy9HGePbS7I = strlen (leqwChO[Le7jDu].URmjibv4NT) + 1;
            leqwChO[Le7jDu].uRTyO9zs = 0;
            (leqwChO[Le7jDu].GNzKp1) = (leqwChO[Le7jDu].GNzKp1) + 1;
            leqwChO[Le7jDu -1].u78cgwBATH = 1;
        }
    }
    {
        hmiadyt8NWZD = 0;
        for (; hmiadyt8NWZD < hZKmsk - 1;) {
            if (leqwChO[hmiadyt8NWZD].u78cgwBATH == 0) {
                printf ("%s ", leqwChO[hmiadyt8NWZD].URmjibv4NT);
            }
            if (leqwChO[hmiadyt8NWZD].u78cgwBATH == 1) {
                printf ("%s\n", leqwChO[hmiadyt8NWZD].URmjibv4NT);
            }
            hmiadyt8NWZD = hmiadyt8NWZD + 1;
        }
    }
    printf ("%s\n", leqwChO[hZKmsk - 1].URmjibv4NT);
}

