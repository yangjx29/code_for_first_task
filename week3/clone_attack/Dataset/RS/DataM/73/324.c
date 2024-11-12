main () {
    int hr9zFu [(300 - 294)] [6];
    int J8kgLK = 1;
    {
        int PqLOtDZ = 1;
        while (5 >= PqLOtDZ) {
            for (int zNFe3TX = 1;
            5 >= zNFe3TX; zNFe3TX = zNFe3TX + 1)
                scanf ("%d", &hr9zFu[PqLOtDZ][zNFe3TX]);
            PqLOtDZ++;
        };
    }
    for (int PqLOtDZ = 1;
    5 >= PqLOtDZ; PqLOtDZ = PqLOtDZ +1)
        for (int zNFe3TX = 1;
        5 >= zNFe3TX; zNFe3TX = zNFe3TX + 1)
            if (hr9zFu[PqLOtDZ][1] <= hr9zFu[PqLOtDZ][zNFe3TX] && hr9zFu[PqLOtDZ][2] <= hr9zFu[PqLOtDZ][zNFe3TX] && hr9zFu[PqLOtDZ][(485 - 482)] <= hr9zFu[PqLOtDZ][zNFe3TX] && hr9zFu[PqLOtDZ][zNFe3TX] >= hr9zFu[PqLOtDZ][4] && hr9zFu[PqLOtDZ][zNFe3TX] >= hr9zFu[PqLOtDZ][5] && hr9zFu[PqLOtDZ][zNFe3TX] <= hr9zFu[1][zNFe3TX] && hr9zFu[PqLOtDZ][zNFe3TX] <= hr9zFu[2][zNFe3TX] && hr9zFu[PqLOtDZ][zNFe3TX] <= hr9zFu[3][zNFe3TX] && hr9zFu[PqLOtDZ][zNFe3TX] <= hr9zFu[4][zNFe3TX] && hr9zFu[PqLOtDZ][zNFe3TX] <= hr9zFu[5][zNFe3TX])
                printf ("%d %d %d", PqLOtDZ, zNFe3TX, hr9zFu[PqLOtDZ][zNFe3TX]), J8kgLK = 0;
    if (J8kgLK)
        printf ("not found");
}

