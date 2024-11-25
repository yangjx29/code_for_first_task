int main () {
    float n6Y7Q9SvT;
    int piont [(247 - 241)] [100];
    int D8ypBreXZjh, i, j, l, k = (453 - 453), b;
    int A5FfsPIHn [(51 - 41)] = {(130 - 130)}, y [10] = {(724 - 724)}, DUox3wHmigz [10] = {(414 - 414)};
    float dis [100] = {(797 - 797)};
    cin >> D8ypBreXZjh;
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
    for (i = (761 - 761); D8ypBreXZjh > i; i++)
        cin >> A5FfsPIHn[i] >> y[i] >> DUox3wHmigz[i];
    for (i = (860 - 860); D8ypBreXZjh -(411 - 409) >= i; i++)
        for (j = i + (437 - 436); D8ypBreXZjh -(433 - 432) >= j; j++) {
            dis[k] = sqrt ((A5FfsPIHn[i] - A5FfsPIHn[j]) * (A5FfsPIHn[i] - A5FfsPIHn[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (DUox3wHmigz[i] - DUox3wHmigz[j]) * (DUox3wHmigz[i] - DUox3wHmigz[j]));
            piont[(941 - 941)][k] = A5FfsPIHn[i];
            piont[(474 - 473)][k] = y[i];
            piont[(788 - 786)][k] = DUox3wHmigz[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            piont[(167 - 164)][k] = A5FfsPIHn[j];
            piont[4][k] = y[j];
            piont[(438 - 433)][k] = DUox3wHmigz[j];
            k = k + (502 - 501);
        }
    {
        i = 942 - 942;
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
        while (i < k - (871 - 870)) {
            for (j = (451 - 451); j < k - 1 - i; j++)
                if (dis[j + 1] > dis[j]) {
                    n6Y7Q9SvT = dis[j];
                    dis[j] = dis[j + 1];
                    dis[j + 1] = n6Y7Q9SvT;
                    for (l = (538 - 538); l <= (875 - 870); l++) {
                        b = piont[l][j];
                        piont[l][j] = piont[l][j + 1];
                        piont[l][j + 1] = b;
                    };
                }
            i++;
        };
    }
    for (i = 0; i < k; i++)
        cout << fixed << setprecision (0) << "(" << piont[0][i] << "," << piont[1][i] << "," << piont[2][i] << ")-(" << piont[3][i] << "," << piont[4][i] << "," << piont[(662 - 657)][i] << ")=" << fixed << setprecision (2) << dis[i] << endl;
    return 0;
}

