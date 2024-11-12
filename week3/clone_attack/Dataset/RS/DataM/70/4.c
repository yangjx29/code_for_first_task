int main () {
    int g5pKUek, R5n89W1Q, j, LHIVGcSpkwb7;
    float gat69g;
    float qpR1lcO;
    float MgBGpzL;
    gat69g = 0;
    float ele1gcqm3 [100], FYKlUbrTpZ [100], c = 0, d;
    scanf ("%d", &g5pKUek);
    {
        R5n89W1Q = 0;
        while (R5n89W1Q < g5pKUek) {
            scanf ("%f %f", &qpR1lcO, &MgBGpzL);
            ele1gcqm3[R5n89W1Q] = qpR1lcO;
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
            FYKlUbrTpZ[R5n89W1Q] = MgBGpzL;
            R5n89W1Q = R5n89W1Q +1;
        };
    }
    {
        j = 0;
        while (j < g5pKUek) {
            for (LHIVGcSpkwb7 = 0; LHIVGcSpkwb7 < g5pKUek; LHIVGcSpkwb7 = LHIVGcSpkwb7 +1) {
                d = sqrt ((ele1gcqm3[j] - ele1gcqm3[LHIVGcSpkwb7]) * (ele1gcqm3[j] - ele1gcqm3[LHIVGcSpkwb7]) + (FYKlUbrTpZ[j] - FYKlUbrTpZ[LHIVGcSpkwb7]) * (FYKlUbrTpZ[j] - FYKlUbrTpZ[LHIVGcSpkwb7]));
                if (d > c)
                    c = d;
            }
            j = j + 1;
        };
    }
    printf ("%.4f", c);
    return 0;
}

