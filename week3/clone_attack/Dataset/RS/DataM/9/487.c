void  main () {
    int Ymi3z5Z4;
    int r2qTOeoY;
    int pvGZ6gsXYtPV;
    struct   p {
        char zW7bkptLcP [30];
        int g1oqD9MB;
    }
    Rpjhsv9w [105];
    struct   p {
        char zW7bkptLcP [30];
        int g1oqD9MB;
    }
    temp;
    scanf ("%d", &Ymi3z5Z4);
    {
        r2qTOeoY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (r2qTOeoY < Ymi3z5Z4) {
            scanf ("%s %d", Rpjhsv9w[r2qTOeoY].zW7bkptLcP, &Rpjhsv9w[r2qTOeoY].g1oqD9MB);
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
            r2qTOeoY++;
        };
    }
    for (r2qTOeoY = 0; r2qTOeoY < Ymi3z5Z4 -1; r2qTOeoY++) {
        pvGZ6gsXYtPV = 1;
        while (Ymi3z5Z4 -r2qTOeoY > pvGZ6gsXYtPV) {
            if (Rpjhsv9w[pvGZ6gsXYtPV - 1].g1oqD9MB >= 60 && Rpjhsv9w[pvGZ6gsXYtPV].g1oqD9MB >= 60) {
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
                if (Rpjhsv9w[pvGZ6gsXYtPV].g1oqD9MB > Rpjhsv9w[pvGZ6gsXYtPV - 1].g1oqD9MB) {
                    temp = Rpjhsv9w[pvGZ6gsXYtPV - 1];
                    Rpjhsv9w[pvGZ6gsXYtPV - 1] = Rpjhsv9w[pvGZ6gsXYtPV];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    Rpjhsv9w[pvGZ6gsXYtPV] = temp;
                };
            }
            else {
                if (Rpjhsv9w[pvGZ6gsXYtPV - 1].g1oqD9MB < 60 && Rpjhsv9w[pvGZ6gsXYtPV].g1oqD9MB >= 60) {
                    temp = Rpjhsv9w[pvGZ6gsXYtPV - 1];
                    Rpjhsv9w[pvGZ6gsXYtPV - 1] = Rpjhsv9w[pvGZ6gsXYtPV];
                    Rpjhsv9w[pvGZ6gsXYtPV] = temp;
                };
            }
            pvGZ6gsXYtPV = pvGZ6gsXYtPV + 1;
        };
    }
    {
        r2qTOeoY = 0;
        while (r2qTOeoY < Ymi3z5Z4) {
            printf ("%s\n", Rpjhsv9w[r2qTOeoY].zW7bkptLcP);
            r2qTOeoY++;
        };
    };
}

