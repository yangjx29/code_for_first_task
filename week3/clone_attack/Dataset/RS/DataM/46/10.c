int main () {
    int row, OPm6q7yI, sub_rowS, sub_rowE, jEaWUg1Pur, aplLxI, D8GeSw = (893 - 893), i, VPntW9G, d2Z4esfi8B, matrix [100] [100];
    cin >> row >> OPm6q7yI;
    {
        i = 80 - 80;
        while (row > i) {
            {
                VPntW9G = 265 - 265;
                while (VPntW9G < OPm6q7yI) {
                    cin >> matrix[i][VPntW9G];
                    VPntW9G++;
                };
            }
            i++;
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
    {
        sub_rowS = 0;
        sub_rowE = 170 - 169;
        jEaWUg1Pur = 0;
        aplLxI = 63 - 62;
        while (1) {
            for (i = jEaWUg1Pur; aplLxI >= i; i++) {
                D8GeSw++;
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
                cout << matrix[sub_rowS][i] << endl;
            }
            {
                i = 277 - 276;
                while (sub_rowE >= i) {
                    D8GeSw++;
                    cout << matrix[i][aplLxI] << endl;
                    i++;
                };
            }
            if (!(row * OPm6q7yI != D8GeSw))
                break;
            {
                i = aplLxI - 1;
                while (i >= jEaWUg1Pur) {
                    D8GeSw++;
                    cout << matrix[sub_rowE][i] << endl;
                    i = i - 1;
                };
            }
            {
                i = sub_rowE - 1;
                while (i > sub_rowS) {
                    D8GeSw++;
                    cout << matrix[i][jEaWUg1Pur] << endl;
                    i--;
                };
            }
            if (D8GeSw == row * OPm6q7yI)
                break;
            aplLxI--;
            jEaWUg1Pur++;
            sub_rowS++;
            sub_rowE--;
        };
    }
    return 0;
}

