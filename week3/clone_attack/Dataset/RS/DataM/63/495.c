int main () {
    int YZzXqgyH [(967 - 867)] [100], Mr3WX6qPo [100] [100], matrix [100] [100], Ubvj9B0d2x, y1, vZdKkcm4UXC, WYvDW4;
    int j20olXs4, j, gZIVSlTdi74;
    memset (matrix, (487 - 487), sizeof (matrix));
    cin >> Ubvj9B0d2x >> y1;
    {
        j20olXs4 = 963 - 963;
        while (Ubvj9B0d2x > j20olXs4) {
            for (j = 0; j < y1; j = j + 1)
                cin >> YZzXqgyH[j20olXs4][j];
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
            j20olXs4++;
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
    cin >> vZdKkcm4UXC >> WYvDW4;
    for (j20olXs4 = 0; j20olXs4 < vZdKkcm4UXC; j20olXs4++) {
        for (j = 0; j < WYvDW4; j = j + 1)
            cin >> Mr3WX6qPo[j20olXs4][j];
    }
    {
        j20olXs4 = 0;
        while (Ubvj9B0d2x > j20olXs4) {
            for (j = 0; j < WYvDW4; j = j + 1) {
                gZIVSlTdi74 = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (y1 > gZIVSlTdi74) {
                    matrix[j20olXs4][j] = matrix[j20olXs4][j] + YZzXqgyH[j20olXs4][gZIVSlTdi74] * Mr3WX6qPo[gZIVSlTdi74][j];
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
                    gZIVSlTdi74++;
                };
            }
            j20olXs4++;
        };
    }
    for (j20olXs4 = 0; j20olXs4 < Ubvj9B0d2x; j20olXs4++) {
        {
            j = 0;
            while (j < WYvDW4 -1) {
                cout << matrix[j20olXs4][j] << " ";
                j++;
            };
        }
        cout << matrix[j20olXs4][j] << endl;
    }
    return 0;
}

