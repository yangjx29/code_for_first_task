main () {
    int qNuLZXPB, WatfvI4n, hKXxpDLHw, y2, sp87ThqVfRoZ, McnmjlZEMCU, LnXqcID1;
    int KW1Fj2JqItd8 [MAX] [MAX], nEgUQqmxjb76 [MAX] [MAX], oDB75mMp [MAX] [MAX];
    scanf ("%d %d", &qNuLZXPB, &WatfvI4n);
    for (sp87ThqVfRoZ = 0; sp87ThqVfRoZ < qNuLZXPB; sp87ThqVfRoZ = sp87ThqVfRoZ + 1)
        for (McnmjlZEMCU = 0; McnmjlZEMCU < WatfvI4n; McnmjlZEMCU = McnmjlZEMCU +1)
            scanf ("%d", &KW1Fj2JqItd8[sp87ThqVfRoZ][McnmjlZEMCU]);
    scanf ("%d %d", &hKXxpDLHw, &y2);
    for (sp87ThqVfRoZ = 0; sp87ThqVfRoZ < hKXxpDLHw; sp87ThqVfRoZ = sp87ThqVfRoZ + 1)
        for (McnmjlZEMCU = 0; McnmjlZEMCU < y2; McnmjlZEMCU = McnmjlZEMCU +1)
            scanf ("%d", &nEgUQqmxjb76[sp87ThqVfRoZ][McnmjlZEMCU]);
    for (sp87ThqVfRoZ = 0; sp87ThqVfRoZ < qNuLZXPB; sp87ThqVfRoZ = sp87ThqVfRoZ + 1)
        for (McnmjlZEMCU = 0; McnmjlZEMCU < y2; McnmjlZEMCU = McnmjlZEMCU +1)
            oDB75mMp[sp87ThqVfRoZ][McnmjlZEMCU] = 0;
    for (sp87ThqVfRoZ = 0; sp87ThqVfRoZ < qNuLZXPB; sp87ThqVfRoZ = sp87ThqVfRoZ + 1)
        for (McnmjlZEMCU = 0; McnmjlZEMCU < y2; McnmjlZEMCU = McnmjlZEMCU +1)
            for (LnXqcID1 = 0; LnXqcID1 < 100; LnXqcID1++)
                oDB75mMp[sp87ThqVfRoZ][McnmjlZEMCU] = oDB75mMp[sp87ThqVfRoZ][McnmjlZEMCU] + KW1Fj2JqItd8[sp87ThqVfRoZ][LnXqcID1] * nEgUQqmxjb76[LnXqcID1][McnmjlZEMCU];
    for (sp87ThqVfRoZ = 0; sp87ThqVfRoZ < qNuLZXPB; sp87ThqVfRoZ++) {
        McnmjlZEMCU = 0;
        while (McnmjlZEMCU < y2) {
            if (McnmjlZEMCU != y2 - 1)
                printf ("%d ", oDB75mMp[sp87ThqVfRoZ][McnmjlZEMCU]);
            else
                printf ("%d\n", oDB75mMp[sp87ThqVfRoZ][McnmjlZEMCU]);
            McnmjlZEMCU = McnmjlZEMCU +1;
        };
    };
}

