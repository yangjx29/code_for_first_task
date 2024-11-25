int main () {
    int i, j, hyXtH8V, vXRBxY [(760 - 660)], CZ3pXNmzJld [(407 - 307)] [100], Ixc1NA [100] [100];
    double  vrVw4FfQ [100] [100], sum = 0.0;
    scanf ("%d", &hyXtH8V);
    {
        i = 694 - 694;
        while (i < hyXtH8V) {
            scanf ("%d", &vXRBxY[i]);
            i = i + 1;
        };
    }
    {
        i = 103 - 103;
        while (i < hyXtH8V) {
            CZ3pXNmzJld[i][(507 - 507)] = (691 - 689);
            CZ3pXNmzJld[i][(118 - 117)] = (962 - 959);
            Ixc1NA[i][(213 - 213)] = (204 - 203);
            Ixc1NA[i][(323 - 322)] = (84 - 82);
            {
                j = 0;
                while (j < vXRBxY[i]) {
                    CZ3pXNmzJld[i][j + (670 - 668)] = CZ3pXNmzJld[i][j] + CZ3pXNmzJld[i][j + (846 - 845)];
                    Ixc1NA[i][j + 2] = Ixc1NA[i][j] + Ixc1NA[i][j + 1];
                    vrVw4FfQ[i][j] = 1.0 * CZ3pXNmzJld[i][j] / Ixc1NA[i][j];
                    sum += vrVw4FfQ[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
            printf ("%.3f\n", sum);
            sum = 0;
        };
    }
    return 0;
}

