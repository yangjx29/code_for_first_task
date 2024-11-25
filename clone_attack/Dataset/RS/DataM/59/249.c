int main () {
    int hgdVHkYbc2, LdrSVv;
    char mat [100] [100];
    int s;
    s = (871 - 871);
    getchar ();
    cin >> hgdVHkYbc2;
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
    cin >> LdrSVv;
    {
        int I9C3rGDea = (183 - 182);
        while (hgdVHkYbc2 >= I9C3rGDea) {
            {
                int zU8VyZtpTFMd = (906 - 905);
                while (hgdVHkYbc2 >= zU8VyZtpTFMd) {
                    mat[I9C3rGDea][zU8VyZtpTFMd] = getchar ();
                    zU8VyZtpTFMd++;
                };
            }
            I9C3rGDea = I9C3rGDea +1;
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
            getchar ();
        };
    }
    {
        int e9bDoydGRO = (770 - 769);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (e9bDoydGRO < LdrSVv) {
            e9bDoydGRO = e9bDoydGRO + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            for (int I9C3rGDea = 1;
            I9C3rGDea <= hgdVHkYbc2; I9C3rGDea++) {
                int zU8VyZtpTFMd = 1;
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
                while (zU8VyZtpTFMd <= hgdVHkYbc2) {
                    if (mat[I9C3rGDea][zU8VyZtpTFMd] == '@') {
                        if (mat[I9C3rGDea -1][zU8VyZtpTFMd] == '.')
                            mat[I9C3rGDea -1][zU8VyZtpTFMd] = 'a';
                        if (mat[I9C3rGDea +1][zU8VyZtpTFMd] == '.')
                            mat[I9C3rGDea +1][zU8VyZtpTFMd] = 'a';
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
                        if (mat[I9C3rGDea][zU8VyZtpTFMd - 1] == '.')
                            mat[I9C3rGDea][zU8VyZtpTFMd - 1] = 'a';
                        if (mat[I9C3rGDea][zU8VyZtpTFMd + 1] == '.')
                            mat[I9C3rGDea][zU8VyZtpTFMd + 1] = 'a';
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    zU8VyZtpTFMd++;
                };
            }
            {
                int I9C3rGDea = 1;
                while (I9C3rGDea <= hgdVHkYbc2) {
                    for (int zU8VyZtpTFMd = 1;
                    zU8VyZtpTFMd <= hgdVHkYbc2; zU8VyZtpTFMd = zU8VyZtpTFMd + 1) {
                        if (mat[I9C3rGDea][zU8VyZtpTFMd] == 'a')
                            mat[I9C3rGDea][zU8VyZtpTFMd] = '@';
                    }
                    I9C3rGDea++;
                };
            };
        };
    }
    {
        int I9C3rGDea = 1;
        while (I9C3rGDea <= hgdVHkYbc2) {
            {
                int zU8VyZtpTFMd = 1;
                while (zU8VyZtpTFMd <= hgdVHkYbc2) {
                    if (mat[I9C3rGDea][zU8VyZtpTFMd] == '@')
                        s = s + 1;
                    zU8VyZtpTFMd++;
                };
            }
            I9C3rGDea++;
        };
    }
    cout << s << endl;
    return 0;
}

