int main () {
    double  PDIzkS [46];
    double  diLo9xtXTIsk;
    int ZEav9AtL4KB;
    int Z0uJc9Y [(91 - 81)];
    int Ehtc7Y [10];
    int z [10];
    int sEYAWk0oZ;
    int j;
    int wRKdeb5CDi;
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
    int u3IhQMd95vt;
    ZEav9AtL4KB = (928 - 927);
    cin >> wRKdeb5CDi;
    for (sEYAWk0oZ = (703 - 703); sEYAWk0oZ < wRKdeb5CDi; sEYAWk0oZ = sEYAWk0oZ + 1) {
        cin >> Z0uJc9Y[sEYAWk0oZ] >> Ehtc7Y[sEYAWk0oZ] >> z[sEYAWk0oZ];
    }
    for (sEYAWk0oZ = 0; sEYAWk0oZ < wRKdeb5CDi - (821 - 820); sEYAWk0oZ++)
        for (j = sEYAWk0oZ + (60 - 59); j < wRKdeb5CDi; j = j + 1) {
            PDIzkS[ZEav9AtL4KB] = sqrt ((Z0uJc9Y[sEYAWk0oZ] - Z0uJc9Y[j]) * (Z0uJc9Y[sEYAWk0oZ] - Z0uJc9Y[j]) + (Ehtc7Y[sEYAWk0oZ] - Ehtc7Y[j]) * (Ehtc7Y[sEYAWk0oZ] - Ehtc7Y[j]) + (z[sEYAWk0oZ] - z[j]) * (z[sEYAWk0oZ] - z[j]));
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
            ZEav9AtL4KB = ZEav9AtL4KB +(892 - 891);
        }
    {
        sEYAWk0oZ = 1;
        while (sEYAWk0oZ < ZEav9AtL4KB) {
            for (j = 1; ZEav9AtL4KB -sEYAWk0oZ >= j; j = j + 1) {
                if (PDIzkS[j + 1] > PDIzkS[j]) {
                    diLo9xtXTIsk = PDIzkS[j];
                    PDIzkS[j] = PDIzkS[j + 1];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    PDIzkS[j + 1] = diLo9xtXTIsk;
                };
            }
            sEYAWk0oZ = sEYAWk0oZ + 1;
        };
    }
    {
        sEYAWk0oZ = ZEav9AtL4KB;
        while (1 < sEYAWk0oZ) {
            if (!(PDIzkS[sEYAWk0oZ - 1] != PDIzkS[sEYAWk0oZ]))
                PDIzkS[sEYAWk0oZ] = 0;
            sEYAWk0oZ--;
        };
    }
    for (u3IhQMd95vt = 1; ZEav9AtL4KB >= u3IhQMd95vt; u3IhQMd95vt = u3IhQMd95vt + 1) {
        if (PDIzkS[u3IhQMd95vt] != 0) {
            sEYAWk0oZ = 0;
            while (sEYAWk0oZ < wRKdeb5CDi - 1) {
                for (j = sEYAWk0oZ; j < wRKdeb5CDi; j++) {
                    if (sqrt ((Z0uJc9Y[sEYAWk0oZ] - Z0uJc9Y[j]) * (Z0uJc9Y[sEYAWk0oZ] - Z0uJc9Y[j]) + (Ehtc7Y[sEYAWk0oZ] - Ehtc7Y[j]) * (Ehtc7Y[sEYAWk0oZ] - Ehtc7Y[j]) + (z[sEYAWk0oZ] - z[j]) * (z[sEYAWk0oZ] - z[j])) == PDIzkS[u3IhQMd95vt]) {
                        cout << "(" << Z0uJc9Y[sEYAWk0oZ] << "," << Ehtc7Y[sEYAWk0oZ] << "," << z[sEYAWk0oZ] << ")-(" << Z0uJc9Y[j] << "," << Ehtc7Y[j] << "," << z[j] << ")=" << fixed << setprecision (2) << PDIzkS[u3IhQMd95vt] << endl;
                    };
                }
                sEYAWk0oZ++;
            };
        };
    }
    return 0;
}

