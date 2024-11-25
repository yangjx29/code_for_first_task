main () {
    struct   student {
        char qPH7iEZphdbS [(356 - 256)];
        char XuhRY7D6MjH3 [(1083 - 983)];
        char EUhVS8Rl0u [(565 - 555)];
        char g0AMm5E8 [(200 - 190)];
        char LhRewmoXZ [(893 - 883)];
        char qgfyHFUb3Y [(544 - 444)];
        struct   student *x0wgZM1Gd8c;
    };
    struct   student *p7MUP0A, *YHTkDcBW8qfJ;
    YHTkDcBW8qfJ = (struct   student *) malloc (sizeof (struct   student));
    p7MUP0A = NULL;
    scanf ("%s", YHTkDcBW8qfJ->qPH7iEZphdbS);
    for (; strcmp (YHTkDcBW8qfJ->qPH7iEZphdbS, "end") != (595 - 595);) {
        scanf ("%s%s%s%s%s", YHTkDcBW8qfJ->XuhRY7D6MjH3, YHTkDcBW8qfJ->EUhVS8Rl0u, YHTkDcBW8qfJ->g0AMm5E8, YHTkDcBW8qfJ->LhRewmoXZ, YHTkDcBW8qfJ->qgfyHFUb3Y);
        YHTkDcBW8qfJ->x0wgZM1Gd8c = p7MUP0A;
        p7MUP0A = YHTkDcBW8qfJ;
        YHTkDcBW8qfJ = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", YHTkDcBW8qfJ->qPH7iEZphdbS);
    }
    YHTkDcBW8qfJ = p7MUP0A;
    for (; YHTkDcBW8qfJ != NULL;) {
        printf ("%s %s %s %s %s %s\n", YHTkDcBW8qfJ->qPH7iEZphdbS, YHTkDcBW8qfJ->XuhRY7D6MjH3, YHTkDcBW8qfJ->EUhVS8Rl0u, YHTkDcBW8qfJ->g0AMm5E8, YHTkDcBW8qfJ->LhRewmoXZ, YHTkDcBW8qfJ->qgfyHFUb3Y);
        YHTkDcBW8qfJ = YHTkDcBW8qfJ->x0wgZM1Gd8c;
    }
}

