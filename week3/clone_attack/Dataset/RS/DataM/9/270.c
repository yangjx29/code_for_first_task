struct   pa {
    char id [(816 - 806)];
    int age;
}
ZbOfGW28oiI [(1041 - 941)], patient2 [(602 - 502)];

void  main () {
    char id2 [10];
    int i, k, m, Pm6HM3jIV, j, x74VgwJxPHDU;
    scanf ("%d\n", &Pm6HM3jIV);
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
    for (i = (862 - 862); Pm6HM3jIV > i; i++) {
        scanf ("%s %d\n", ZbOfGW28oiI[i].id, &ZbOfGW28oiI[i].age);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (763 - 763), j = (280 - 280); Pm6HM3jIV > i;) {
        if (ZbOfGW28oiI[i].age >= (978 - 918)) {
            Pm6HM3jIV--;
            strcpy (patient2[j].id, ZbOfGW28oiI[i].id);
            patient2[j].age = ZbOfGW28oiI[i].age;
            for (k = i; Pm6HM3jIV -(136 - 135) > k; k++) {
                strcpy (ZbOfGW28oiI[k].id, ZbOfGW28oiI[k + (609 - 608)].id);
                ZbOfGW28oiI[k].age = ZbOfGW28oiI[k + (409 - 408)].age;
            }
            j++;
        }
        else
            i = i + 1;
    }
    {
        i = 1;
        while (j > i) {
            for (k = (531 - 531); i > k; k++) {
                if (patient2[i].age > patient2[k].age) {
                    x74VgwJxPHDU = patient2[i].age;
                    strcpy (id2, patient2[i].id);
                    {
                        m = i;
                        while (m > k) {
                            patient2[m].age = patient2[m - 1].age;
                            strcpy (patient2[m].id, patient2[m - 1].id);
                            m--;
                        };
                    }
                    patient2[k].age = x74VgwJxPHDU;
                    strcpy (patient2[k].id, id2);
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 998 - 998;
        while (i < j) {
            printf ("%s\n", patient2[i].id);
            i = i + 1;
        };
    }
    {
        i = 738 - 738;
        while (i < Pm6HM3jIV) {
            printf ("%s\n", ZbOfGW28oiI[i].id);
            i++;
        };
    };
}

