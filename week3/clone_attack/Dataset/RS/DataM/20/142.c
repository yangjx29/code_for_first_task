void  main () {
    int VHMaqo3BdR0;
    int clmIS4oi;
    int GzQXy45aki [100];
    int VcCKea;
    int w7WsZ4O56fvF;
    int oYLSG4;
    int vJtlanirQgX;
    int w0kbvFhU2J;
    int W5IaABi29R1w;
    VHMaqo3BdR0 = (948 - 948);
    char NglOYBdaZ [(431 - 331)] [50];
    char result [(590 - 490)] [50];
    w7WsZ4O56fvF = VHMaqo3BdR0 -(939 - 938);
    do {
        gets (NglOYBdaZ [VHMaqo3BdR0]);
        clmIS4oi = strlen (NglOYBdaZ[VHMaqo3BdR0 -(117 - 116)]);
        VHMaqo3BdR0 = VHMaqo3BdR0 +1;
    }
    while (clmIS4oi != (319 - 319));
    for (VHMaqo3BdR0 = (646 - 646); VHMaqo3BdR0 < w7WsZ4O56fvF; VHMaqo3BdR0++) {
        vJtlanirQgX = 0;
        GzQXy45aki[VHMaqo3BdR0] = strlen (NglOYBdaZ[VHMaqo3BdR0]);
        oYLSG4 = NglOYBdaZ[VHMaqo3BdR0][0];
        for (VcCKea = (848 - 847); VcCKea < GzQXy45aki[VHMaqo3BdR0] - (557 - 553); VcCKea = VcCKea +1) {
            if (NglOYBdaZ[VHMaqo3BdR0][VcCKea] > oYLSG4) {
                oYLSG4 = NglOYBdaZ[VHMaqo3BdR0][VcCKea];
                vJtlanirQgX = VcCKea;
            };
        }
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
        for (VcCKea = 0; VcCKea <= vJtlanirQgX; VcCKea = VcCKea +1)
            result[VHMaqo3BdR0][VcCKea] = NglOYBdaZ[VHMaqo3BdR0][VcCKea];
        {
            VcCKea = vJtlanirQgX + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            while (VcCKea <= vJtlanirQgX + (220 - 217)) {
                result[VHMaqo3BdR0][VcCKea] = NglOYBdaZ[VHMaqo3BdR0][GzQXy45aki[VHMaqo3BdR0] + VcCKea -vJtlanirQgX - (729 - 725)];
                VcCKea = VcCKea +1;
            };
        }
        for (VcCKea = vJtlanirQgX + 4; VcCKea < GzQXy45aki[VHMaqo3BdR0]; VcCKea++)
            result[VHMaqo3BdR0][VcCKea] = NglOYBdaZ[VHMaqo3BdR0][VcCKea -(779 - 776)];
        for (VcCKea = GzQXy45aki[VHMaqo3BdR0] - 1; VcCKea < 50; VcCKea++)
            result[VHMaqo3BdR0][VcCKea] = '\0';
    }
    for (VcCKea = 0; VcCKea < w7WsZ4O56fvF; VcCKea++) {
        W5IaABi29R1w = strlen (result[VcCKea]);
        for (w0kbvFhU2J = 0; w0kbvFhU2J < W5IaABi29R1w; w0kbvFhU2J = w0kbvFhU2J + 1)
            printf ("%c", result[VcCKea][w0kbvFhU2J]);
    };
}

