void  CdZRh4m9e8C (int Nai4X1HItV [(819 - 719)] [100], int SUcb4jGy) {
    int min [100];
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SUcb4jGy > i) {
            min[i] = Nai4X1HItV[i][0];
            {
                int k8zI2CxciM = 0;
                while (SUcb4jGy > k8zI2CxciM) {
                    if (min[i] > Nai4X1HItV[i][k8zI2CxciM])
                        min[i] = Nai4X1HItV[i][k8zI2CxciM];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k8zI2CxciM = k8zI2CxciM + 1;
                };
            }
            if (!(0 == min[i])) {
                int k8zI2CxciM = 0;
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
                while (SUcb4jGy > k8zI2CxciM) {
                    Nai4X1HItV[i][k8zI2CxciM] -= min[i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    k8zI2CxciM = k8zI2CxciM + 1;
                };
            }
            i = i + 1;
        };
    }
    for (int k8zI2CxciM = 0;
    SUcb4jGy > k8zI2CxciM; ++k8zI2CxciM) {
        min[k8zI2CxciM] = Nai4X1HItV[0][k8zI2CxciM];
        {
            int i = 0;
            while (SUcb4jGy > i) {
                if (min[k8zI2CxciM] > Nai4X1HItV[i][k8zI2CxciM])
                    min[k8zI2CxciM] = Nai4X1HItV[i][k8zI2CxciM];
                i = i + 1;
            };
        }
        if (!(0 == min[k8zI2CxciM])) {
            int i = 0;
            while (i < SUcb4jGy) {
                Nai4X1HItV[i][k8zI2CxciM] -= min[k8zI2CxciM];
                ++i;
            };
        };
    };
}

void  ic9lA3BGU (int Nai4X1HItV [100] [100], int SUcb4jGy) {
    {
        int i = (545 - 544);
        while (SUcb4jGy -1 > i) {
            Nai4X1HItV[0][i] = Nai4X1HItV[0][i + 1];
            Nai4X1HItV[i][0] = Nai4X1HItV[i + 1][0];
            ++i;
        };
    }
    {
        int i = 1;
        while (i < SUcb4jGy -1) {
            {
                int k8zI2CxciM = 1;
                while (SUcb4jGy -1 > k8zI2CxciM) {
                    Nai4X1HItV[i][k8zI2CxciM] = Nai4X1HItV[i + 1][k8zI2CxciM + 1];
                    ++k8zI2CxciM;
                };
            }
            ++i;
        };
    };
}

int main () {
    int m, SUcb4jGy, g975gyMtQ, Nai4X1HItV [100] [100];
    cin >> SUcb4jGy;
    {
        int OkEHuBP6j3 = 0;
        while (OkEHuBP6j3 < SUcb4jGy) {
            ++OkEHuBP6j3;
            g975gyMtQ = 0, m = SUcb4jGy;
            {
                int i = 0;
                while (i < SUcb4jGy) {
                    {
                        int k8zI2CxciM = 0;
                        while (k8zI2CxciM < SUcb4jGy) {
                            cin >> Nai4X1HItV[i][k8zI2CxciM];
                            ++k8zI2CxciM;
                        };
                    }
                    ++i;
                };
            }
            while (m != 1) {
                CdZRh4m9e8C (Nai4X1HItV, m);
                g975gyMtQ += Nai4X1HItV[1][1];
                ic9lA3BGU (Nai4X1HItV, m--);
            }
            cout << g975gyMtQ << endl;
        };
    };
}

