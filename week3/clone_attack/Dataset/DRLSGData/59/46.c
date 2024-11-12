int main () {
    char PMijk0 [100] [100] = {{0}};
    int k7JfkZ;
    int rNkYbdequwFQ = 0;
    int H9ZrHEgpu;
    cin >> k7JfkZ;
    {
        int zWtru0 = 0;
        while (k7JfkZ > zWtru0) {
            {
                int jlyLTi = 0;
                while (k7JfkZ > jlyLTi) {
                    cin >> PMijk0[zWtru0][jlyLTi];
                    if (!('@' != PMijk0[zWtru0][jlyLTi]))
                        rNkYbdequwFQ = rNkYbdequwFQ + 1;
                    jlyLTi = jlyLTi + 1;
                }
            }
            zWtru0 = zWtru0 + 1;
        }
    }
    cin >> H9ZrHEgpu;
    for (int tyZDb7 = 1;
    H9ZrHEgpu > tyZDb7; tyZDb7 = tyZDb7 + 1) {
        char TZq8ecv0uo [100] [100] = {{0}};
        for (int x = 0;
        100 > x; x++)
            for (int y = 0;
            y < 100; y = y + 1) {
                if (!('@' != PMijk0[x][y])) {
                    {
                        if (0) {
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            return 0;
                        }
                    }
                    if ((!(0 != x)) && (!(0 != y))) {
                        TZq8ecv0uo[1][0] = '%';
                        TZq8ecv0uo[0][1] = '%';
                    }
                    else if ((!(0 != x)) && (!(k7JfkZ - 1 != y))) {
                        TZq8ecv0uo[0][k7JfkZ - 2] = '%';
                        TZq8ecv0uo[1][k7JfkZ - 1] = '%';
                    }
                    else if ((!(k7JfkZ - 1 != x)) && (!(0 != y))) {
                        TZq8ecv0uo[k7JfkZ - 1][1] = '%';
                        TZq8ecv0uo[k7JfkZ - 2][0] = '%';
                    }
                    else if ((!(k7JfkZ - 1 != x)) && (!(k7JfkZ - 1 != y))) {
                        TZq8ecv0uo[k7JfkZ - 2][k7JfkZ - 1] = '%';
                        TZq8ecv0uo[k7JfkZ - 1][k7JfkZ - 2] = '%';
                    }
                    else if ((x == 0) && (y != 0) && (y != k7JfkZ - 1)) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        TZq8ecv0uo[1][y] = '%';
                        TZq8ecv0uo[0][y - 1] = '%';
                        TZq8ecv0uo[0][y + 1] = '%';
                    }
                    else if ((!(k7JfkZ - 1 != x)) && (y != 0) && (y != k7JfkZ - 1)) {
                        TZq8ecv0uo[k7JfkZ - 2][y] = '%';
                        TZq8ecv0uo[k7JfkZ - 1][y - 1] = '%';
                        TZq8ecv0uo[k7JfkZ - 1][y + 1] = '%';
                    }
                    else if ((y == k7JfkZ - 1) && (x != 0) && (x != k7JfkZ - 1)) {
                        TZq8ecv0uo[x][k7JfkZ - 2] = '%';
                        TZq8ecv0uo[x + 1][k7JfkZ - 1] = '%';
                        TZq8ecv0uo[x - 1][k7JfkZ - 1] = '%';
                    }
                    else if ((y == 0) && (x != 0) && (x != k7JfkZ - 1)) {
                        TZq8ecv0uo[x][1] = '%';
                        TZq8ecv0uo[x + 1][0] = '%';
                        TZq8ecv0uo[x - 1][0] = '%';
                    }
                    else {
                        TZq8ecv0uo[x - 1][y] = '%';
                        TZq8ecv0uo[x + 1][y] = '%';
                        TZq8ecv0uo[x][y - 1] = '%';
                        TZq8ecv0uo[x][y + 1] = '%';
                    }
                }
            }
        {
            int u = 0;
            while (u < 100) {
                {
                    int v = 0;
                    while (v < 100) {
                        if ((PMijk0[u][v] == '.') && (TZq8ecv0uo[u][v] == '%')) {
                            rNkYbdequwFQ = rNkYbdequwFQ + 1;
                            PMijk0[u][v] = '@';
                        }
                        v = v + 1;
                    }
                }
                u = u + 1;
            }
        }
    }
    cout << rNkYbdequwFQ;
    return 0;
}

