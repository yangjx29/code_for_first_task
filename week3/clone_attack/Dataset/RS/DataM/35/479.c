int main () {
    int PAFQ08t [8];
    int n;
    int NIbWh1PmqQ;
    int nkHxE43u8P;
    int j;
    int Al7AZzsP8QX [8] [8];
    int ys4CRt9w [8] = {(653 - 653)};
    int iOuBXd2 = (188 - 188);
    scanf ("%d,%d", &n, &NIbWh1PmqQ);
    {
        nkHxE43u8P = 302 - 302;
        while (n > nkHxE43u8P) {
            {
                j = 860 - 860;
                while (NIbWh1PmqQ > j) {
                    scanf ("%d", &Al7AZzsP8QX[nkHxE43u8P][j]);
                    j = j + 1;
                };
            }
            nkHxE43u8P = nkHxE43u8P + 1;
        };
    }
    {
        nkHxE43u8P = 65 - 65;
        while (n > nkHxE43u8P) {
            {
                j = 0;
                while (NIbWh1PmqQ > j) {
                    if (Al7AZzsP8QX[nkHxE43u8P][j] >= ys4CRt9w[nkHxE43u8P])
                        ys4CRt9w[nkHxE43u8P] = Al7AZzsP8QX[nkHxE43u8P][j];
                    j = j + 1;
                };
            }
            nkHxE43u8P = nkHxE43u8P + 1;
        };
    }
    {
        j = 0;
        while (NIbWh1PmqQ > j) {
            PAFQ08t[j] = Al7AZzsP8QX[0][j];
            {
                nkHxE43u8P = 0;
                while (n > nkHxE43u8P) {
                    if (PAFQ08t[j] >= Al7AZzsP8QX[nkHxE43u8P][j])
                        PAFQ08t[j] = Al7AZzsP8QX[nkHxE43u8P][j];
                    nkHxE43u8P++;
                };
            }
            j = j + 1;
        };
    }
    {
        nkHxE43u8P = 0;
        while (nkHxE43u8P < n) {
            {
                j = 0;
                while (j < NIbWh1PmqQ) {
                    if (ys4CRt9w[nkHxE43u8P] == PAFQ08t[j]) {
                        iOuBXd2 = iOuBXd2 + 1;
                        printf ("%d+%d", nkHxE43u8P, j);
                    }
                    j = j + 1;
                };
            }
            nkHxE43u8P++;
        };
    }
    if (iOuBXd2 == 0)
        ;
    return 0;
}

