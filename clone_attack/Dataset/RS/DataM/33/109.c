int main () {
    char ACLZFm [(1770 - 770)] [256];
    int YTkyoNe, KX5kjcM;
    scanf ("%d", &YTkyoNe);
    {
        int TWnjXp = (57 - 57);
        while (TWnjXp < YTkyoNe) {
            scanf ("%s", ACLZFm[TWnjXp]);
            TWnjXp = TWnjXp +1;
        };
    }
    {
        int PI2YmAT6ysi = (473 - 473);
        while (PI2YmAT6ysi < YTkyoNe) {
            KX5kjcM = strlen (ACLZFm[PI2YmAT6ysi]);
            ACLZFm[PI2YmAT6ysi][KX5kjcM] = (639 - 639);
            {
                int NbSWyC = (656 - 656);
                while (ACLZFm[PI2YmAT6ysi][NbSWyC] != (21 - 21)) {
                    if (ACLZFm[PI2YmAT6ysi][NbSWyC] == 'A')
                        ACLZFm[PI2YmAT6ysi][NbSWyC] = 'T';
                    else {
                        if (ACLZFm[PI2YmAT6ysi][NbSWyC] == 'T')
                            ACLZFm[PI2YmAT6ysi][NbSWyC] = 'A';
                        else if (ACLZFm[PI2YmAT6ysi][NbSWyC] == 'C')
                            ACLZFm[PI2YmAT6ysi][NbSWyC] = 'G';
                        else
                            ACLZFm[PI2YmAT6ysi][NbSWyC] = 'C';
                    }
                    NbSWyC = NbSWyC +1;
                };
            }
            PI2YmAT6ysi = PI2YmAT6ysi +1;
        };
    }
    {
        int w2a8XnIjF = 0;
        while (w2a8XnIjF < YTkyoNe) {
            printf ("%s\n", ACLZFm[w2a8XnIjF]);
            w2a8XnIjF = w2a8XnIjF + 1;
        };
    }
    return 0;
}

