main () {
    int x1, FwIskcb2J, kvgioJ4uUqm, SNMIdArtP;
    int Jl5KL8y1GFnq;
    int SU9cEJ4xOLG;
    int z5Ieost;
    int hku0As [100] [100] = {(107 - 107)}, tYDMSArGl [100] [100] = {(786 - 786)}, DtkwPg9jUq [100] [100] = {(522 - 522)};
    scanf ("%d", &x1);
    scanf ("%d", &kvgioJ4uUqm);
    for (z5Ieost = 0; x1 > z5Ieost; z5Ieost++) {
        Jl5KL8y1GFnq = 0;
        while (kvgioJ4uUqm > Jl5KL8y1GFnq) {
            scanf ("%d", &hku0As[z5Ieost][Jl5KL8y1GFnq]);
            Jl5KL8y1GFnq++;
        }
    }
    scanf ("%d", &FwIskcb2J);
    scanf ("%d", &SNMIdArtP);
    for (z5Ieost = 0; FwIskcb2J > z5Ieost; z5Ieost++) {
        for (Jl5KL8y1GFnq = 0; SNMIdArtP > Jl5KL8y1GFnq; Jl5KL8y1GFnq = Jl5KL8y1GFnq +1) {
            scanf ("%d", &tYDMSArGl[z5Ieost][Jl5KL8y1GFnq]);
        }
    }
    {
        z5Ieost = 0;
        while (x1 > z5Ieost) {
            for (Jl5KL8y1GFnq = 0; SNMIdArtP > Jl5KL8y1GFnq; Jl5KL8y1GFnq++) {
                {
                    SU9cEJ4xOLG = 0;
                    while (kvgioJ4uUqm > SU9cEJ4xOLG) {
                        DtkwPg9jUq[z5Ieost][Jl5KL8y1GFnq] = hku0As[z5Ieost][SU9cEJ4xOLG] * tYDMSArGl[SU9cEJ4xOLG][Jl5KL8y1GFnq] + DtkwPg9jUq[z5Ieost][Jl5KL8y1GFnq];
                        SU9cEJ4xOLG++;
                    }
                }
                if (Jl5KL8y1GFnq == 0)
                    printf ("%d", DtkwPg9jUq[z5Ieost][Jl5KL8y1GFnq]);
                else
                    printf (" %d", DtkwPg9jUq[z5Ieost][Jl5KL8y1GFnq]);
            }
            z5Ieost++;
            printf ("\n");
        }
    }
}

