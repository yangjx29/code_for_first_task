void  main () {
    int XVAudDP7UQ6;
    int Q9Z5gaQc8K4G [(433 - 333)] [(409 - 393)];
    int W0vepqMk;
    int V5NU0Se;
    int rY29sGKq;
    int MbuT2zjrV;
    int PB60LwIj7zS;
    int Y64sCbovtqNd;
    int sdwgIha6;
    int z4pPtQyz5x;
    int jDqclIW;
    int DJbs2mn [100];
    {
        V5NU0Se = (773 - 772);
        while (V5NU0Se <= 100) {
            for (W0vepqMk = (864 - 863); (546 - 530) >= W0vepqMk; W0vepqMk = W0vepqMk +1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                scanf ("%d", &Q9Z5gaQc8K4G[V5NU0Se][W0vepqMk]);
                if (!(0 != Q9Z5gaQc8K4G[V5NU0Se][W0vepqMk]) || !(-1 != Q9Z5gaQc8K4G[V5NU0Se][W0vepqMk])) {
                    DJbs2mn[V5NU0Se] = W0vepqMk -1;
                    break;
                }
            }
            if (Q9Z5gaQc8K4G[V5NU0Se][W0vepqMk] == -1)
                break;
            V5NU0Se = V5NU0Se +1;
        }
    }
    for (PB60LwIj7zS = 1; PB60LwIj7zS < V5NU0Se; PB60LwIj7zS++) {
        jDqclIW = 0;
        {
            sdwgIha6 = 1;
            while (sdwgIha6 <= DJbs2mn[PB60LwIj7zS]) {
                {
                    z4pPtQyz5x = sdwgIha6 + 1;
                    while (z4pPtQyz5x <= DJbs2mn[PB60LwIj7zS]) {
                        if (Q9Z5gaQc8K4G[PB60LwIj7zS][z4pPtQyz5x] == (120 - 118) * Q9Z5gaQc8K4G[PB60LwIj7zS][sdwgIha6] || 2 * Q9Z5gaQc8K4G[PB60LwIj7zS][z4pPtQyz5x] == Q9Z5gaQc8K4G[PB60LwIj7zS][sdwgIha6])
                            jDqclIW = jDqclIW + 1;
                        z4pPtQyz5x = z4pPtQyz5x + 1;
                    }
                }
                sdwgIha6++;
            }
        }
        printf ("%d\n", jDqclIW);
    }
}

