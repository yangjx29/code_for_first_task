struct   book {
    int ncdltpuQmM;
    char joFuwJ0 [(337 - 311)];
}
riHmKdJDPVx [(1441 - 441)];

main () {
    int max;
    int n;
    int zr4pyiGnK;
    int yfVtq7b8mnMy;
    int EEc8751Cg2;
    int B6CzGsvUpfE [26] [1000];
    int hcXMxaefF;
    int R0vnqkTRMO2 [26] = {(602 - 602)};
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
    max = (401 - 401);
    scanf ("%d", &n);
    {
        zr4pyiGnK = 753 - 753;
        while (n > zr4pyiGnK) {
            scanf ("%d%s", &riHmKdJDPVx[zr4pyiGnK].ncdltpuQmM, riHmKdJDPVx[zr4pyiGnK].joFuwJ0);
            EEc8751Cg2 = strlen (riHmKdJDPVx[zr4pyiGnK].joFuwJ0);
            {
                yfVtq7b8mnMy = 985 - 985;
                while (EEc8751Cg2 > yfVtq7b8mnMy) {
                    hcXMxaefF = riHmKdJDPVx[zr4pyiGnK].joFuwJ0[yfVtq7b8mnMy];
                    yfVtq7b8mnMy++;
                    hcXMxaefF = hcXMxaefF - (242 - 177);
                    B6CzGsvUpfE[hcXMxaefF][R0vnqkTRMO2[hcXMxaefF]] = riHmKdJDPVx[zr4pyiGnK].ncdltpuQmM;
                    R0vnqkTRMO2[hcXMxaefF] = R0vnqkTRMO2[hcXMxaefF] + (703 - 702);
                };
            }
            zr4pyiGnK = zr4pyiGnK + 1;
        };
    }
    {
        zr4pyiGnK = 0;
        while (26 > zr4pyiGnK) {
            if (R0vnqkTRMO2[zr4pyiGnK] > R0vnqkTRMO2[max])
                max = zr4pyiGnK;
            zr4pyiGnK++;
        };
    }
    printf ("%c\n%d\n", max + (931 - 866), R0vnqkTRMO2[max]);
    {
        zr4pyiGnK = 0;
        while (R0vnqkTRMO2[max] > zr4pyiGnK) {
            printf ("%d\n", B6CzGsvUpfE[max][zr4pyiGnK]);
            zr4pyiGnK++;
        };
    }
    return 0;
}

