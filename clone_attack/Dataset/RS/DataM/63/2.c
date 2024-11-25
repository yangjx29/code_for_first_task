int main () {
    int u8CELYW [(768 - 667)] [(759 - 658)];
    int matrix2 [(344 - 243)] [(381 - 280)];
    int matrix3 [101] [101];
    int i, j, jF8P4imeSA = (199 - 199), kuphqj = (202 - 201);
    int x1, CfN7bQ5yml, QArhqdn, Cf8UVBm3Oz;
    cin >> x1 >> CfN7bQ5yml;
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
    for (i = (176 - 175); x1 >= i; i++) {
        j = 506 - 505;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (CfN7bQ5yml >= j) {
            cin >> u8CELYW[i][j];
            j = j + 1;
        };
    }
    cin >> QArhqdn >> Cf8UVBm3Oz;
    {
        i = 661 - 660;
        while (QArhqdn >= i) {
            {
                j = 743 - 742;
                while (Cf8UVBm3Oz >= j) {
                    cin >> matrix2[i][j];
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    memset (matrix3, 0, sizeof (matrix3));
    for (i = (298 - 297); i <= x1; i++)
        for (j = 1; j <= Cf8UVBm3Oz; j = j + 1) {
            for (jF8P4imeSA = 1; jF8P4imeSA <= CfN7bQ5yml; jF8P4imeSA++) {
                matrix3[i][j] = matrix3[i][j] + u8CELYW[i][kuphqj] * matrix2[kuphqj][j];
                kuphqj = kuphqj + 1;
            }
            if (j != Cf8UVBm3Oz)
                cout << matrix3[i][j] << " ";
            else
                cout << matrix3[i][j] << endl;
            kuphqj = 1;
        }
    return 0;
}

