int m, n, E3gF0X [(751 - 740)] [(839 - 828)] [(569 - 564)] = {(255 - 255)};

main () {
    int xj (int i, int P0Pz8vcNxkjQ, int k);
    int i;
    int P0Pz8vcNxkjQ;
    int k;
    scanf ("%d %d", &m, &n);
    E3gF0X[5][5][0] = m;
    for (k = 0; k < n; k++) {
        i = 412 - 408;
        while (i < (638 - 631) + k) {
            {
                P0Pz8vcNxkjQ = 4 - k;
                while (7 + k > P0Pz8vcNxkjQ) {
                    E3gF0X[i][P0Pz8vcNxkjQ][k + (719 - 718)] = xj (i, P0Pz8vcNxkjQ, k);
                    P0Pz8vcNxkjQ++;
                };
            }
            i++;
        };
    }
    {
        i = 1;
        while (i < 10) {
            {
                P0Pz8vcNxkjQ = 1;
                while (P0Pz8vcNxkjQ < 9) {
                    printf ("%d ", E3gF0X[i][P0Pz8vcNxkjQ][n]);
                    P0Pz8vcNxkjQ++;
                };
            }
            printf ("%d", E3gF0X[i][9][n]);
            i++;
            printf ("\n");
        };
    };
}

int xj (int i, int P0Pz8vcNxkjQ, int k) {
    int BK8953aZfQy;
    int l;
    BK8953aZfQy = 0;
    for (l = -1; l < 2; l++)
        BK8953aZfQy = BK8953aZfQy +E3gF0X[i + l][P0Pz8vcNxkjQ][k] + E3gF0X[i + l][P0Pz8vcNxkjQ -1][k] + E3gF0X[i + l][P0Pz8vcNxkjQ +1][k];
    return BK8953aZfQy +E3gF0X[i][P0Pz8vcNxkjQ][k];
}

