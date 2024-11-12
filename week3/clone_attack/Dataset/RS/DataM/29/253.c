int main () {
    int m, SHmzjF67h, ohEFwQeJ, Wa760CHL23;
    double  yfLJQcnR1E, y1iQ8up [100], J93GqSAf0p [100];
    scanf ("%d", &m);
    {
        ohEFwQeJ = 0;
        while (ohEFwQeJ < m) {
            scanf ("%d", &SHmzjF67h);
            y1iQ8up[0] = 2;
            y1iQ8up[1] = 3;
            J93GqSAf0p[0] = 1;
            J93GqSAf0p[1] = 2;
            yfLJQcnR1E = 3.5;
            {
                Wa760CHL23 = 2;
                while (Wa760CHL23 < SHmzjF67h) {
                    y1iQ8up[Wa760CHL23] = y1iQ8up[Wa760CHL23 -1] + y1iQ8up[Wa760CHL23 -2];
                    J93GqSAf0p[Wa760CHL23] = J93GqSAf0p[Wa760CHL23 -1] + J93GqSAf0p[Wa760CHL23 -2];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    yfLJQcnR1E += 1.0 * y1iQ8up[Wa760CHL23] / J93GqSAf0p[Wa760CHL23];
                    Wa760CHL23 = Wa760CHL23 +1;
                };
            }
            if (SHmzjF67h == 1) {
                printf ("2.000\n");
            }
            else {
                printf ("%.3lf\n", yfLJQcnR1E);
            }
            ohEFwQeJ++;
        };
    }
    return 0;
}

