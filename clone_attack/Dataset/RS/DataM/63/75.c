int main () {
    int m8MKhwb3fU;
    int PProfBj;
    int J4BZKmxTV8cC;
    int arnVJbvdP [100] [100], AimY8W12 [100] [100], Glk05KPB9aS [100] [100] = {0};
    int qYMGCUZ0zK, YDrgn89, n;
    scanf ("%d %d", &qYMGCUZ0zK, &YDrgn89);
    {
        m8MKhwb3fU = 0;
        while (qYMGCUZ0zK > m8MKhwb3fU) {
            {
                PProfBj = 0;
                while (YDrgn89 > PProfBj) {
                    scanf ("%d", &arnVJbvdP[m8MKhwb3fU][PProfBj]);
                    PProfBj++;
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
            m8MKhwb3fU = m8MKhwb3fU + 1;
        };
    }
    scanf ("%d %d", &YDrgn89, &n);
    {
        m8MKhwb3fU = 0;
        while (m8MKhwb3fU < YDrgn89) {
            {
                PProfBj = 0;
                while (n > PProfBj) {
                    scanf ("%d", &AimY8W12[m8MKhwb3fU][PProfBj]);
                    PProfBj++;
                };
            }
            m8MKhwb3fU++;
        };
    }
    {
        m8MKhwb3fU = 0;
        while (qYMGCUZ0zK > m8MKhwb3fU) {
            for (PProfBj = 0; n > PProfBj; PProfBj++)
                for (J4BZKmxTV8cC = 0; YDrgn89 > J4BZKmxTV8cC; J4BZKmxTV8cC = J4BZKmxTV8cC +1)
                    Glk05KPB9aS[m8MKhwb3fU][PProfBj] = Glk05KPB9aS[m8MKhwb3fU][PProfBj] + arnVJbvdP[m8MKhwb3fU][J4BZKmxTV8cC] * AimY8W12[J4BZKmxTV8cC][PProfBj];
            m8MKhwb3fU++;
        };
    }
    {
        m8MKhwb3fU = 0;
        while (m8MKhwb3fU < qYMGCUZ0zK) {
            for (PProfBj = 0; n - 1 > PProfBj; PProfBj++) {
                printf ("%d ", Glk05KPB9aS[m8MKhwb3fU][PProfBj]);
            }
            printf ("%d\n", Glk05KPB9aS[m8MKhwb3fU][PProfBj]);
            m8MKhwb3fU++;
        };
    };
}

