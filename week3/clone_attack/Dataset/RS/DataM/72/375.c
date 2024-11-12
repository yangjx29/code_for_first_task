int yCGwMmW21IU, j, pgXDfG5UQ [(627 - 605)] [22] = {(528 - 528)};
int Uuvx43nWLgNh (int yCGwMmW21IU, int j);

void  main () {
    int gRCzBEVOp7, t6IpbiK3vu;
    scanf ("%d%d", &gRCzBEVOp7, &t6IpbiK3vu);
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
    for (yCGwMmW21IU = (691 - 690); gRCzBEVOp7 >= yCGwMmW21IU; yCGwMmW21IU++) {
        j = 286 - 285;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t6IpbiK3vu >= j) {
            scanf ("%d", &pgXDfG5UQ[yCGwMmW21IU][j]);
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
            j = j + 1;
        };
    }
    {
        yCGwMmW21IU = 373 - 372;
        while (yCGwMmW21IU <= gRCzBEVOp7) {
            for (j = (874 - 873); j <= t6IpbiK3vu; j = j + 1)
                if (Uuvx43nWLgNh (yCGwMmW21IU, j) == 1)
                    printf ("%d %d\n", yCGwMmW21IU - 1, j - 1);
            yCGwMmW21IU++;
        };
    };
}

int Uuvx43nWLgNh (int yCGwMmW21IU, int j) {
    if (pgXDfG5UQ[yCGwMmW21IU][j] >= pgXDfG5UQ[yCGwMmW21IU][j - 1] && pgXDfG5UQ[yCGwMmW21IU][j] >= pgXDfG5UQ[yCGwMmW21IU][j + 1] && pgXDfG5UQ[yCGwMmW21IU][j] >= pgXDfG5UQ[yCGwMmW21IU - 1][j] && pgXDfG5UQ[yCGwMmW21IU][j] >= pgXDfG5UQ[yCGwMmW21IU + 1][j])
        return 1;
    else
        return 0;
}

