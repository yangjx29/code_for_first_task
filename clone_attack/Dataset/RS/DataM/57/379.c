int main () {
    int nhgKmPV;
    int qLAsZ8e4MG;
    int A0TmNiFlAYS;
    int s;
    char Ps7niwGcI [51] [33];
    scanf ("%d", &qLAsZ8e4MG);
    {
        nhgKmPV = 0;
        while (qLAsZ8e4MG > nhgKmPV) {
            scanf ("%s", Ps7niwGcI[nhgKmPV]);
            s = strlen (Ps7niwGcI[nhgKmPV]);
            {
                A0TmNiFlAYS = s - 1;
                while (A0TmNiFlAYS > 0) {
                    if (Ps7niwGcI[nhgKmPV][s - 1] == 'r' && !('e' != Ps7niwGcI[nhgKmPV][s - 2]))
                        Ps7niwGcI[nhgKmPV][A0TmNiFlAYS -1] = '\0';
                    else {
                        if (Ps7niwGcI[nhgKmPV][A0TmNiFlAYS] == 'y' && Ps7niwGcI[nhgKmPV][A0TmNiFlAYS -1] == 'l')
                            Ps7niwGcI[nhgKmPV][A0TmNiFlAYS -1] = '\0';
                        else if (Ps7niwGcI[nhgKmPV][A0TmNiFlAYS] == 'g' && Ps7niwGcI[nhgKmPV][A0TmNiFlAYS -1] == 'n' && Ps7niwGcI[nhgKmPV][A0TmNiFlAYS -2] == 'i')
                            Ps7niwGcI[nhgKmPV][A0TmNiFlAYS -2] = '\0';
                    }
                    A0TmNiFlAYS--;
                };
            }
            nhgKmPV++;
        };
    }
    for (nhgKmPV = 0; nhgKmPV < qLAsZ8e4MG; nhgKmPV = nhgKmPV + 1) {
        printf ("%s\n", Ps7niwGcI[nhgKmPV]);
    }
    return 0;
}

