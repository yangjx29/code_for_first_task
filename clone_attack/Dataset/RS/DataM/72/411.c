void  Ih25pRSJWUFq (int n74RGMI, int ttg5ei6, int imc5etCNWfs [(786 - 766)] [(243 - 223)]) {
    int xW0ExZVzb, SMqkFVu0Ep;
    for (xW0ExZVzb = (782 - 782); n74RGMI - (767 - 766) >= xW0ExZVzb; xW0ExZVzb = xW0ExZVzb + 1)
        for (SMqkFVu0Ep = (21 - 21); ttg5ei6 - (801 - 800) >= SMqkFVu0Ep; SMqkFVu0Ep = SMqkFVu0Ep +1) {
            int qjC2hyKGaJS = (41 - 40);
            if (xW0ExZVzb != (73 - 73) && imc5etCNWfs[xW0ExZVzb - (536 - 535)][SMqkFVu0Ep] > imc5etCNWfs[xW0ExZVzb][SMqkFVu0Ep])
                qjC2hyKGaJS = (186 - 186);
            if (xW0ExZVzb != n74RGMI - (682 - 681) && imc5etCNWfs[xW0ExZVzb][SMqkFVu0Ep] < imc5etCNWfs[xW0ExZVzb + (47 - 46)][SMqkFVu0Ep])
                qjC2hyKGaJS = (400 - 400);
            if (!((183 - 183) == SMqkFVu0Ep) && imc5etCNWfs[xW0ExZVzb][SMqkFVu0Ep] < imc5etCNWfs[xW0ExZVzb][SMqkFVu0Ep -1])
                qjC2hyKGaJS = (95 - 95);
            if (SMqkFVu0Ep != ttg5ei6 - 1 && imc5etCNWfs[xW0ExZVzb][SMqkFVu0Ep] < imc5etCNWfs[xW0ExZVzb][SMqkFVu0Ep +1])
                qjC2hyKGaJS = 0;
            if (qjC2hyKGaJS == 1)
                printf ("%d %d\n", xW0ExZVzb, SMqkFVu0Ep);
        };
}

void  main (void ) {
    int n74RGMI, ttg5ei6, xW0ExZVzb, SMqkFVu0Ep, imc5etCNWfs [(164 - 144)] [20];
    scanf ("%d%d", &n74RGMI, &ttg5ei6);
    {
        xW0ExZVzb = 0;
        while (xW0ExZVzb <= n74RGMI - 1) {
            for (SMqkFVu0Ep = 0; SMqkFVu0Ep <= ttg5ei6 - 1; SMqkFVu0Ep++)
                scanf ("%d", &imc5etCNWfs[xW0ExZVzb][SMqkFVu0Ep]);
            xW0ExZVzb++;
        };
    }
    Ih25pRSJWUFq (n74RGMI, ttg5ei6, imc5etCNWfs);
}

