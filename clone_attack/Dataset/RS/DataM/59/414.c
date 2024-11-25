int main () {
    int GZorskBz, M1XsgA, sum = (687 - 687);
    char xoAdmkiRFw1X [GZorskBz +(709 - 707)] [GZorskBz +2], U9PxNKprst5 [GZorskBz +2] [GZorskBz +2];
    cin >> GZorskBz;
    for (int mlpto0fyrsCm = (143 - 142);
    mlpto0fyrsCm <= GZorskBz; mlpto0fyrsCm = mlpto0fyrsCm + 1)
        for (int j = (283 - 282);
        j <= GZorskBz; j = j + 1)
            cin >> xoAdmkiRFw1X[mlpto0fyrsCm][j];
    cin >> M1XsgA;
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
    {
        int mlpto0fyrsCm = (798 - 797);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (mlpto0fyrsCm < M1XsgA) {
            mlpto0fyrsCm++;
            memcpy (U9PxNKprst5, xoAdmkiRFw1X, sizeof (xoAdmkiRFw1X));
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
            for (int j = 1;
            j <= GZorskBz; j = j + 1)
                for (int BgXljRdD = 1;
                BgXljRdD <= GZorskBz; BgXljRdD = BgXljRdD +1)
                    if (xoAdmkiRFw1X[j][BgXljRdD] == '@') {
                        if (xoAdmkiRFw1X[j][BgXljRdD -1] == '.')
                            U9PxNKprst5[j][BgXljRdD -1] = '@';
                        if (xoAdmkiRFw1X[j][BgXljRdD +1] == '.')
                            U9PxNKprst5[j][BgXljRdD +1] = '@';
                        if (xoAdmkiRFw1X[j + 1][BgXljRdD] == '.')
                            U9PxNKprst5[j + 1][BgXljRdD] = '@';
                        if (xoAdmkiRFw1X[j - 1][BgXljRdD] == '.')
                            U9PxNKprst5[j - 1][BgXljRdD] = '@';
                    }
            memcpy (xoAdmkiRFw1X, U9PxNKprst5, sizeof (xoAdmkiRFw1X));
        };
    }
    for (int mlpto0fyrsCm = 1;
    mlpto0fyrsCm <= GZorskBz; mlpto0fyrsCm = mlpto0fyrsCm + 1) {
        int j = 1;
        while (j <= GZorskBz) {
            if (xoAdmkiRFw1X[mlpto0fyrsCm][j] == '@')
                sum = sum + 1;
            j++;
        };
    }
    cout << sum << endl;
    return 0;
}

