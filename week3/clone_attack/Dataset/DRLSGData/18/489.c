int main () {
    int lf8y7F [100] [100];
    int qdKa54IR;
    int vkPfJr9uxeQ;
    int QHz6L0xwJq;
    cin >> vkPfJr9uxeQ;
    {
        int JOyu2DP8YF4g = 0;
        while (JOyu2DP8YF4g < vkPfJr9uxeQ) {
            JOyu2DP8YF4g++;
            QHz6L0xwJq = 0;
            {
                int hn5BTA4;
                hn5BTA4 = 0;
                while (hn5BTA4 < vkPfJr9uxeQ) {
                    {
                        int zaxNjXFM40 = 0;
                        while (vkPfJr9uxeQ > zaxNjXFM40) {
                            cin >> lf8y7F[hn5BTA4][zaxNjXFM40];
                            zaxNjXFM40 = zaxNjXFM40 + 1;
                        }
                    }
                    hn5BTA4 = hn5BTA4 + 1;
                }
            }
            {
                int qumMYPsK3t4 = 1;
                while (vkPfJr9uxeQ > qumMYPsK3t4) {
                    {
                        int hn5BTA4 = 0;
                        while (vkPfJr9uxeQ > hn5BTA4) {
                            qdKa54IR = 10000;
                            {
                                int Dz8Ds2h3Ue;
                                Dz8Ds2h3Ue = 0;
                                while (vkPfJr9uxeQ > Dz8Ds2h3Ue) {
                                    if (0 <= lf8y7F[hn5BTA4][Dz8Ds2h3Ue])
                                        qdKa54IR = lf8y7F[hn5BTA4][Dz8Ds2h3Ue] > qdKa54IR ? qdKa54IR : lf8y7F[hn5BTA4][Dz8Ds2h3Ue];
                                    Dz8Ds2h3Ue = Dz8Ds2h3Ue +1;
                                }
                            }
                            {
                                int Dz8Ds2h3Ue = 0;
                                while (vkPfJr9uxeQ > Dz8Ds2h3Ue) {
                                    lf8y7F[hn5BTA4][Dz8Ds2h3Ue] -= qdKa54IR;
                                    Dz8Ds2h3Ue = Dz8Ds2h3Ue +1;
                                }
                            }
                            hn5BTA4 = hn5BTA4 + 1;
                        }
                    }
                    {
                        int hn5BTA4 = 0;
                        while (vkPfJr9uxeQ > hn5BTA4) {
                            qdKa54IR = 10000;
                            {
                                int dOIQwXC = 0;
                                while (vkPfJr9uxeQ > dOIQwXC) {
                                    if (lf8y7F[dOIQwXC][hn5BTA4] >= 0)
                                        qdKa54IR = qdKa54IR < lf8y7F[dOIQwXC][hn5BTA4] ? qdKa54IR : lf8y7F[dOIQwXC][hn5BTA4];
                                    dOIQwXC++;
                                }
                            }
                            {
                                int dOIQwXC;
                                dOIQwXC = 0;
                                while (dOIQwXC < vkPfJr9uxeQ) {
                                    lf8y7F[dOIQwXC][hn5BTA4] -= qdKa54IR;
                                    dOIQwXC = dOIQwXC + 1;
                                }
                            }
                            hn5BTA4 = hn5BTA4 + 1;
                        }
                    }
                    QHz6L0xwJq += lf8y7F[qumMYPsK3t4][qumMYPsK3t4];
                    for (int hn5BTA4 = 0;
                    hn5BTA4 < vkPfJr9uxeQ; hn5BTA4++)
                        lf8y7F[qumMYPsK3t4][hn5BTA4] = -1;
                    {
                        int hn5BTA4 = 0;
                        while (hn5BTA4 < vkPfJr9uxeQ) {
                            lf8y7F[hn5BTA4][qumMYPsK3t4] = -1;
                            hn5BTA4 = hn5BTA4 + 1;
                        }
                    }
                    qumMYPsK3t4 = qumMYPsK3t4 + 1;
                }
            }
            cout << QHz6L0xwJq << endl;
        }
    }
    return 0;
}

