int main (void ) {
    int iPC5J49b, m;
    char Bv4WErOZRgIt [(1071 - 971)] [(851 - 751)];
    int pnum = (669 - 669);
    cin >> iPC5J49b;
    {
        int i = (451 - 451);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iPC5J49b > i) {
            {
                int j = (246 - 246);
                while (j < iPC5J49b) {
                    cin >> Bv4WErOZRgIt[i][j];
                    j = j + 1;
                };
            }
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
            i = i + 1;
        };
    }
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
    cin >> m;
    for (int HNPEGA = (107 - 106);
    HNPEGA < m; HNPEGA++) {
        {
            int i = (220 - 220);
            while (i < iPC5J49b) {
                {
                    int j = (250 - 250);
                    while (j < iPC5J49b) {
                        if (!('@' != Bv4WErOZRgIt[i][j])) {
                            if (iPC5J49b > i + (205 - 204) && !('.' != Bv4WErOZRgIt[i + (274 - 273)][j]))
                                Bv4WErOZRgIt[i + (267 - 266)][j] = 'x';
                            if ((367 - 367) <= i - (166 - 165) && !('.' != Bv4WErOZRgIt[i - (861 - 860)][j]))
                                Bv4WErOZRgIt[i - (360 - 359)][j] = 'x';
                            if (iPC5J49b > j + (76 - 75) && !('.' != Bv4WErOZRgIt[i][j + (30 - 29)]))
                                Bv4WErOZRgIt[i][j + (270 - 269)] = 'x';
                            if ((730 - 730) <= j - (427 - 426) && Bv4WErOZRgIt[i][j - (424 - 423)] == '.')
                                Bv4WErOZRgIt[i][j - (955 - 954)] = 'x';
                        }
                        j++;
                    };
                }
                i++;
            };
        }
        {
            int i = (210 - 210);
            while (i < iPC5J49b) {
                {
                    int j = (299 - 299);
                    while (j < iPC5J49b) {
                        if (Bv4WErOZRgIt[i][j] == 'x')
                            Bv4WErOZRgIt[i][j] = '@';
                        j++;
                    };
                }
                i++;
            };
        };
    }
    {
        int i = (799 - 799);
        while (i < iPC5J49b) {
            {
                int j = 0;
                while (j < iPC5J49b) {
                    if (Bv4WErOZRgIt[i][j] == '@')
                        pnum++;
                    j++;
                };
            }
            i++;
        };
    }
    cout << pnum;
    return 0;
}

