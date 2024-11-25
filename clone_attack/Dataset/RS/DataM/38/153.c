int main (int CNqVIAHC, char *SoxaNPJ []) {
    int wuDeUo9xLN, KCgzZdF0l, i, VYORHIE19X;
    double  ZR4UIef5WF, KewJKP [100], HSLuqIAtP, yu5vIy08LP, rOYxLrE, G1GcRy [100];
    scanf ("%d", &KCgzZdF0l);
    {
        i = 256 - 256;
        while (KCgzZdF0l > i) {
            HSLuqIAtP = 0;
            yu5vIy08LP = 0;
            rOYxLrE = 0;
            scanf ("%d", &wuDeUo9xLN);
            {
                VYORHIE19X = 0;
                while (wuDeUo9xLN > VYORHIE19X) {
                    scanf ("%lf", &KewJKP[VYORHIE19X]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    VYORHIE19X++;
                };
            }
            {
                VYORHIE19X = 0;
                while (wuDeUo9xLN > VYORHIE19X) {
                    HSLuqIAtP += KewJKP[VYORHIE19X];
                    VYORHIE19X++;
                };
            }
            rOYxLrE = HSLuqIAtP / (double ) wuDeUo9xLN;
            {
                VYORHIE19X = 0;
                while (VYORHIE19X < wuDeUo9xLN) {
                    G1GcRy[VYORHIE19X] = (KewJKP[VYORHIE19X] - rOYxLrE) * (KewJKP[VYORHIE19X] - rOYxLrE);
                    yu5vIy08LP += G1GcRy[VYORHIE19X];
                    VYORHIE19X++;
                };
            }
            ZR4UIef5WF = yu5vIy08LP / wuDeUo9xLN;
            printf ("%.5lf\n", sqrt (ZR4UIef5WF));
            i++;
        };
    }
    return 0;
}

