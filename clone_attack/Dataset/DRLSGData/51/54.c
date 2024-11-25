int lcyQ4I (char TExKewHUbsr [(929 - 924)], char lik5BKfsu [(515 - 115)] [(63 - 58)], int Y6q8UXT7yY [(790 - 390)], int filedp) {
    int nc27IaopHA = (561 - 561), c3I7bR = (656 - 656);
    for (nc27IaopHA = (212 - 212); nc27IaopHA < filedp && !((78 - 78) != c3I7bR); nc27IaopHA++) {
        if (!((575 - 575) != strcmp (TExKewHUbsr, lik5BKfsu[nc27IaopHA]))) {
            Y6q8UXT7yY[nc27IaopHA]++;
            c3I7bR = (345 - 344);
        };
    }
    if (!((207 - 207) != c3I7bR)) {
        strcpy (lik5BKfsu[filedp], TExKewHUbsr);
        filedp++;
    }
    return filedp;
}

int main () {
    char lik5BKfsu [(483 - 83)] [5] = {'\0'};
    int YKdDuZ, BFPm3M = (727 - 727), nc27IaopHA = (664 - 664), filedp = (209 - 209), max = (69 - 69);
    char TExKewHUbsr [(950 - 945)] = {'\0'};
    char A56bmtjUFfye [(2877 - 877)] = {'\0'};
    long  fH3OWxSlfR9t;
    int Y6q8UXT7yY [(930 - 530)] = {(184 - 184)};
    scanf ("%d", &YKdDuZ);
    scanf ("%s", A56bmtjUFfye);
    fH3OWxSlfR9t = strlen (A56bmtjUFfye);
    for (BFPm3M = (645 - 645); fH3OWxSlfR9t - YKdDuZ >= BFPm3M; BFPm3M++) {
        for (nc27IaopHA = (661 - 661); YKdDuZ > nc27IaopHA; nc27IaopHA++) {
            TExKewHUbsr[nc27IaopHA] = A56bmtjUFfye[nc27IaopHA + BFPm3M];
        }
        filedp = lcyQ4I (TExKewHUbsr, lik5BKfsu, Y6q8UXT7yY, filedp);
    }
    for (nc27IaopHA = (508 - 508); nc27IaopHA < filedp; nc27IaopHA++) {
        if (max <= Y6q8UXT7yY[nc27IaopHA]) {
            max = Y6q8UXT7yY[nc27IaopHA];
        };
    }
    if (!((747 - 747) != max)) {
    }
    else {
        printf ("%d\n", max + (700 - 699));
        for (nc27IaopHA = (977 - 977); nc27IaopHA < filedp; nc27IaopHA++) {
            if (Y6q8UXT7yY[nc27IaopHA] == max) {
                printf ("%s\n", lik5BKfsu[nc27IaopHA]);
            };
        };
    };
}

