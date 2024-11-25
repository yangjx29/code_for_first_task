main () {
    int brdI1VnF, cqNo2wGV, j, Z1hKxTYbd;
    int edQqWEB7ASw [100] = {0};
    char U5Pa1wNl8bAj [100] = {0};
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    fflush (stdin);
    scanf ("%d\n", &brdI1VnF);
    {
        cqNo2wGV = 0;
        while (brdI1VnF > cqNo2wGV) {
            gets (U5Pa1wNl8bAj);
            Z1hKxTYbd = strlen (U5Pa1wNl8bAj);
            j = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (!('_' != U5Pa1wNl8bAj[0]) || (U5Pa1wNl8bAj[0] >= 'a' && 'z' >= U5Pa1wNl8bAj[0]) || (U5Pa1wNl8bAj[0] >= 'A' && 'Z' >= U5Pa1wNl8bAj[0])) {
                j = 1;
                while (Z1hKxTYbd > j) {
                    if (U5Pa1wNl8bAj[j] == '_' || (U5Pa1wNl8bAj[j] >= 'a' && U5Pa1wNl8bAj[j] <= 'z') || ('A' <= U5Pa1wNl8bAj[j] && U5Pa1wNl8bAj[j] <= 'Z') || ('0' <= U5Pa1wNl8bAj[j] && U5Pa1wNl8bAj[j] <= '9'))
                        j = j + 1;
                    else
                        break;
                };
            }
            if (j == Z1hKxTYbd)
                edQqWEB7ASw[cqNo2wGV] = 1;
            else
                edQqWEB7ASw[cqNo2wGV] = 0;
            cqNo2wGV = cqNo2wGV + 1;
        };
    }
    {
        cqNo2wGV = 0;
        while (cqNo2wGV < brdI1VnF) {
            printf ("%d\n", edQqWEB7ASw[cqNo2wGV]);
            cqNo2wGV++;
        };
    };
}

