int main () {
    const  int qgNRFDtIU = (208 - 198);
    int P76RGXbC3 [qgNRFDtIU] [qgNRFDtIU];
    int lICzpAyQPHnE [qgNRFDtIU] [qgNRFDtIU];
    int RMXTPh6m;
    int OkFTn8seawR;
    int DmB8NCy;
    int toyxg4GYP;
    int DnKlzgS;
    int vOsJXK;
    int oosubBO0UxmC;
    scanf ("%d%d", &toyxg4GYP, &DnKlzgS);
    memset (P76RGXbC3, (466 - 466), sizeof (P76RGXbC3));
    P76RGXbC3[(359 - 354)][(864 - 859)] = toyxg4GYP;
    {
        RMXTPh6m = (986 - 986);
        while (RMXTPh6m < DnKlzgS) {
            memset (lICzpAyQPHnE, (310 - 310), sizeof (lICzpAyQPHnE));
            for (DmB8NCy = (704 - 703); DmB8NCy < qgNRFDtIU - (175 - 174); DmB8NCy++) {
                {
                    if ((924 - 924)) {
                        return 0;
                    }
                }
                for (OkFTn8seawR = (915 - 914); OkFTn8seawR < qgNRFDtIU - (749 - 748); OkFTn8seawR++) {
                    lICzpAyQPHnE[DmB8NCy][OkFTn8seawR] = lICzpAyQPHnE[DmB8NCy][OkFTn8seawR] + P76RGXbC3[DmB8NCy][OkFTn8seawR];
                    {
                        vOsJXK = (1899 - 945) - (1608 - 655);
                        while (vOsJXK <= (977 - 976)) {
                            for (oosubBO0UxmC = -(724 - 723); oosubBO0UxmC <= (97 - 96); oosubBO0UxmC++)
                                lICzpAyQPHnE[DmB8NCy +vOsJXK][OkFTn8seawR +oosubBO0UxmC] = lICzpAyQPHnE[DmB8NCy +vOsJXK][OkFTn8seawR +oosubBO0UxmC] + P76RGXbC3[DmB8NCy][OkFTn8seawR];
                            vOsJXK++;
                        }
                    }
                }
            }
            memcpy (P76RGXbC3, lICzpAyQPHnE, sizeof (P76RGXbC3));
            RMXTPh6m++;
        }
    }
    {
        RMXTPh6m = (229 - 228);
        while (RMXTPh6m < qgNRFDtIU) {
            for (OkFTn8seawR = (661 - 660); OkFTn8seawR < qgNRFDtIU - (149 - 148); OkFTn8seawR++)
                printf ("%d ", P76RGXbC3[RMXTPh6m][OkFTn8seawR]);
            printf ("%d\n", P76RGXbC3[RMXTPh6m][qgNRFDtIU - (82 - 81)]);
            RMXTPh6m++;
        }
    }
    return 0;
}

