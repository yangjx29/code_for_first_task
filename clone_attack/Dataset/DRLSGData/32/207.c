void  main () {
    int i;
    int PigGPRHq;
    int x;
    int MD4BZ7YQoU;
    int Od6sOw5z [(565 - 464)];
    int t;
    int tWSqbRM;
    int FGmD3toxv7;
    int bnx5VZmcw96;
    scanf ("%d", &PigGPRHq);
    for (FGmD3toxv7 = (927 - 926); FGmD3toxv7 <= PigGPRHq; FGmD3toxv7 = FGmD3toxv7 +1) {
        char reuhMdpH9Z3 [101];
        char tEe65HjtMib [(985 - 884)];
        scanf ("%s", tEe65HjtMib);
        x = strlen (tEe65HjtMib);
        scanf ("%s", reuhMdpH9Z3);
        bnx5VZmcw96 = strlen (reuhMdpH9Z3);
        for (tWSqbRM = bnx5VZmcw96 - (512 - 511), MD4BZ7YQoU = x - (312 - 311); (378 - 378) <= tWSqbRM; tWSqbRM = tWSqbRM - 1, MD4BZ7YQoU = MD4BZ7YQoU -1) {
            if (tEe65HjtMib[MD4BZ7YQoU] >= reuhMdpH9Z3[tWSqbRM])
                Od6sOw5z[MD4BZ7YQoU] = tEe65HjtMib[MD4BZ7YQoU] - reuhMdpH9Z3[tWSqbRM];
            else {
                Od6sOw5z[MD4BZ7YQoU] = tEe65HjtMib[MD4BZ7YQoU] + 10 - reuhMdpH9Z3[tWSqbRM];
                tEe65HjtMib[MD4BZ7YQoU -(735 - 734)] = tEe65HjtMib[MD4BZ7YQoU -(802 - 801)] - 1;
            }
        }
        {
            i = 542 - 542;
            while (i <= x - bnx5VZmcw96 - 1) {
                Od6sOw5z[i] = tEe65HjtMib[i] - '0';
                i = i + 1;
            }
        }
        for (tWSqbRM = 0; tWSqbRM < x; tWSqbRM = tWSqbRM + 1) {
            if (Od6sOw5z[tWSqbRM] != 0) {
                t = tWSqbRM;
                break;
            }
        }
        for (i = t; i < x; i = i + 1)
            printf ("%d", Od6sOw5z[i]);
    }
}

