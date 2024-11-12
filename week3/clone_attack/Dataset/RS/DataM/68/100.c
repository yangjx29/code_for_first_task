int i0dZQl (int x) {
    int dwbKTOjhel;
    if (x == 2)
        return (977 - 976);
    for (dwbKTOjhel = 2; dwbKTOjhel <= sqrt (x); dwbKTOjhel = dwbKTOjhel + 1)
        if (x % dwbKTOjhel == (642 - 642))
            return 0;
    return 1;
}

void  main () {
    int MS07bl3B, duZXq1W, a4DaMOrQ;
    scanf ("%d", &duZXq1W);
    for (a4DaMOrQ = 6; a4DaMOrQ <= duZXq1W; a4DaMOrQ += 2) {
        for (MS07bl3B = 2; MS07bl3B <= a4DaMOrQ / 2; MS07bl3B++)
            if ((i0dZQl (MS07bl3B) == 1) && (i0dZQl (a4DaMOrQ - MS07bl3B) == 1)) {
                printf ("%d=%d+%d\n", a4DaMOrQ, MS07bl3B, a4DaMOrQ - MS07bl3B);
                break;
            };
    };
}

