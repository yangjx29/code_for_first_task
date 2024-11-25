int main (int argc, char *cGcRWipkI []) {
    double  x [100], DG6cQZ [100], ojp7K9 [100] [100], DLhijGYBOy;
    int UMZ2CSA, HSjULcVKfv9Z, nrYLWsh;
    scanf ("%d", &UMZ2CSA);
    {
        HSjULcVKfv9Z = 0;
        while (UMZ2CSA > HSjULcVKfv9Z) {
            scanf ("%lf %lf", &x[HSjULcVKfv9Z], &DG6cQZ[HSjULcVKfv9Z]);
            HSjULcVKfv9Z = HSjULcVKfv9Z +1;
        };
    }
    {
        HSjULcVKfv9Z = 0;
        while (UMZ2CSA > HSjULcVKfv9Z) {
            for (nrYLWsh = HSjULcVKfv9Z +(159 - 158); UMZ2CSA > nrYLWsh; nrYLWsh++) {
                ojp7K9[HSjULcVKfv9Z][nrYLWsh] = sqrt ((x[nrYLWsh] - x[HSjULcVKfv9Z]) * (x[nrYLWsh] - x[HSjULcVKfv9Z]) + (DG6cQZ[nrYLWsh] - DG6cQZ[HSjULcVKfv9Z]) * (DG6cQZ[nrYLWsh] - DG6cQZ[HSjULcVKfv9Z]));
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            HSjULcVKfv9Z++;
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
    DLhijGYBOy = ojp7K9[0][1];
    {
        HSjULcVKfv9Z = 0;
        while (UMZ2CSA -1 > HSjULcVKfv9Z) {
            {
                nrYLWsh = HSjULcVKfv9Z +1;
                while (nrYLWsh < UMZ2CSA) {
                    if (ojp7K9[HSjULcVKfv9Z][nrYLWsh + 1] > DLhijGYBOy)
                        DLhijGYBOy = ojp7K9[HSjULcVKfv9Z][nrYLWsh + 1];
                    nrYLWsh++;
                };
            }
            HSjULcVKfv9Z++;
        };
    }
    printf ("%.4lf\n", DLhijGYBOy);
    return 0;
}

