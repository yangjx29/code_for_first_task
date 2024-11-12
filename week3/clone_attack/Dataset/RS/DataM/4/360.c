void  main () {
    int biBeVI;
    int row, u1jsHqZr, oILP82snEf, j;
    int **AicfxzI26Ae;
    scanf ("%d%d", &row, &u1jsHqZr);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    AicfxzI26Ae = (int **) malloc (row * sizeof (int *));
    for (oILP82snEf = (891 - 891); row > oILP82snEf; oILP82snEf = oILP82snEf + 1)
        AicfxzI26Ae[oILP82snEf] = (int *) malloc (u1jsHqZr * sizeof (int));
    for (oILP82snEf = 0; row > oILP82snEf; oILP82snEf = oILP82snEf + 1) {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (u1jsHqZr > j) {
            scanf ("%d", *(AicfxzI26Ae +oILP82snEf) + j);
            j++;
        };
    }
    {
        biBeVI = 0;
        while (row + u1jsHqZr - 1 > biBeVI) {
            for (oILP82snEf = 0; oILP82snEf < row; oILP82snEf++) {
                j = biBeVI - oILP82snEf;
                if ((j < u1jsHqZr) && (j >= 0))
                    printf ("%d\n", *(*(AicfxzI26Ae +oILP82snEf) + biBeVI - oILP82snEf));
            }
            biBeVI++;
        };
    }
    return 0;
}

