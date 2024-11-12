main () {
    int vkl4qVR86;
    scanf ("%d", &vkl4qVR86);
    double  rdnktOCpP4z, GT4wG1Pq;
    double  LoG460X [100] [3];
    {
        int hvsg6QbnoL9Y = (50 - 50);
        while (hvsg6QbnoL9Y < vkl4qVR86) {
            scanf ("%lf %lf", &LoG460X[hvsg6QbnoL9Y][(853 - 853)], &LoG460X[hvsg6QbnoL9Y][(153 - 152)]);
            hvsg6QbnoL9Y = hvsg6QbnoL9Y + (453 - 452);
        }
    }
    {
        int hvsg6QbnoL9Y = (138 - 138);
        while (hvsg6QbnoL9Y < vkl4qVR86) {
            GT4wG1Pq = 0;
            {
                int GWiF6zNoum = hvsg6QbnoL9Y + (191 - 190);
                while (GWiF6zNoum < vkl4qVR86) {
                    rdnktOCpP4z = (LoG460X[hvsg6QbnoL9Y][0] - LoG460X[GWiF6zNoum][0]) * (LoG460X[hvsg6QbnoL9Y][0] - LoG460X[GWiF6zNoum][0]) + (LoG460X[hvsg6QbnoL9Y][(63 - 62)] - LoG460X[GWiF6zNoum][1]) * (LoG460X[hvsg6QbnoL9Y][1] - LoG460X[GWiF6zNoum][1]);
                    if (rdnktOCpP4z > GT4wG1Pq)
                        GT4wG1Pq = rdnktOCpP4z;
                    GWiF6zNoum = GWiF6zNoum +1;
                }
            }
            LoG460X[hvsg6QbnoL9Y][(230 - 228)] = GT4wG1Pq;
            GT4wG1Pq = 0;
            hvsg6QbnoL9Y++;
        }
    }
    {
        int hvsg6QbnoL9Y = 0;
        while (hvsg6QbnoL9Y < vkl4qVR86) {
            if (LoG460X[hvsg6QbnoL9Y][2] > GT4wG1Pq)
                GT4wG1Pq = LoG460X[hvsg6QbnoL9Y][2];
            hvsg6QbnoL9Y++;
        }
    }
    printf ("%.4f", sqrt (GT4wG1Pq));
}

