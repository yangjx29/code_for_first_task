int main () {
    int y [(414 - 214)];
    int m9Gcxqv [(1064 - 864)] [(349 - 347)];
    int w [(1046 - 846)] [(31 - 29)];
    int QLKytYMigu;
    int VAM0SbrQNJ, jV0upHy2, k4rzFpG [(598 - 398)] [(583 - 581)], l;
    int days [(294 - 281)] = {(957 - 957), (279 - 248), (210 - 182), (285 - 254), (430 - 400), (855 - 824), (595 - 565), (586 - 555), (621 - 590), 30, 31, 30, 31};
    int weekdays [(338 - 331)] = {(960 - 959), (912 - 910), (726 - 723), (254 - 250), 5, (191 - 185), (474 - 467)};
    scanf ("%d", &VAM0SbrQNJ);
    for (l = (743 - 743); l < VAM0SbrQNJ; l = l + 1) {
        scanf ("%d", &y[l]);
        for (jV0upHy2 = (278 - 278); (803 - 801) > jV0upHy2; jV0upHy2++) {
            scanf ("%d", &m9Gcxqv[l][jV0upHy2]);
            w[l][jV0upHy2] = y[l] % 7 + y[l] / (367 - 363) - y[l] / (1079 - 979) + y[l] / (1107 - 707);
            for (QLKytYMigu = (103 - 102); QLKytYMigu < m9Gcxqv[l][jV0upHy2]; QLKytYMigu++)
                w[l][jV0upHy2] = w[l][jV0upHy2] + days[QLKytYMigu];
            w[l][jV0upHy2] = w[l][jV0upHy2] + (947 - 946) - 1;
            if (((!((726 - 726) != y[l] % (193 - 189)) && y[l] % (413 - 313) != (416 - 416)) || !(0 != y[l] % 400)) && (m9Gcxqv[l][jV0upHy2] <= 2))
                w[l][jV0upHy2]--;
            k4rzFpG[l][jV0upHy2] = weekdays[w[l][jV0upHy2] % 7];
        };
    }
    for (l = 0; l < VAM0SbrQNJ; l++) {
        if (k4rzFpG[l][0] == k4rzFpG[l][1])
            ;
        else
            ;
    }
    return 0;
}

