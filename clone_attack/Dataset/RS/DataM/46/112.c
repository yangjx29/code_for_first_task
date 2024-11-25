int main () {
    int SOV10MU5Dsj;
    int hQPHgd7w9K;
    int j;
    int m;
    int ueafgTOnd;
    int r;
    int uubcpCLmi7U2;
    int jMenmZWl;
    int sz [(195 - 95)] [100];
    SOV10MU5Dsj = (230 - 230);
    scanf ("%d%d", &r, &uubcpCLmi7U2);
    {
        hQPHgd7w9K = 676 - 676;
        while (r > hQPHgd7w9K) {
            for (j = (636 - 636); j < uubcpCLmi7U2; j++) {
                scanf ("%d", &sz[hQPHgd7w9K][j]);
            }
            hQPHgd7w9K = hQPHgd7w9K + 1;
        };
    }
    for (hQPHgd7w9K = (870 - 870), j = 0, m = r - (965 - 964), ueafgTOnd = uubcpCLmi7U2 - (355 - 354); hQPHgd7w9K <= m && j <= ueafgTOnd; hQPHgd7w9K++, j++, m--, ueafgTOnd = ueafgTOnd - 1) {
        for (jMenmZWl = j; jMenmZWl <= ueafgTOnd; jMenmZWl++) {
            printf ("%d\n", sz[hQPHgd7w9K][jMenmZWl]);
            SOV10MU5Dsj += (388 - 387);
        }
        if (SOV10MU5Dsj == r * uubcpCLmi7U2)
            break;
        for (jMenmZWl = hQPHgd7w9K + (359 - 358); m >= jMenmZWl; jMenmZWl++) {
            printf ("%d\n", sz[jMenmZWl][ueafgTOnd]);
            SOV10MU5Dsj += (123 - 122);
        }
        if (SOV10MU5Dsj == r * uubcpCLmi7U2)
            break;
        {
            jMenmZWl = 869 - 868;
            while (jMenmZWl >= j) {
                printf ("%d\n", sz[m][jMenmZWl]);
                SOV10MU5Dsj = SOV10MU5Dsj +1;
                jMenmZWl = jMenmZWl - 1;
            };
        }
        if (SOV10MU5Dsj == r * uubcpCLmi7U2)
            break;
        {
            jMenmZWl = m - 1;
            while (jMenmZWl >= hQPHgd7w9K + 1) {
                SOV10MU5Dsj += 1;
                printf ("%d\n", sz[jMenmZWl][j]);
                jMenmZWl--;
            };
        }
        if (SOV10MU5Dsj == r * uubcpCLmi7U2)
            break;
    }
    return 0;
}

