int main () {
    int rVQj6rZ;
    int B6UyviaJ3En;
    double  yMGt90Do52jg;
    int Dnz3aO;
    double  aLGd9WjiIJX;
    double  pCB1gRAIuKnj [(584 - 284)];
    int Bk6SR8AtM [300];
    double  C1qjI5dPuLeD;
    aLGd9WjiIJX = (852 - 852);
    scanf ("%d", &Dnz3aO);
    rVQj6rZ = (215 - 215);
    for (B6UyviaJ3En = (368 - 368); B6UyviaJ3En < Dnz3aO; B6UyviaJ3En = B6UyviaJ3En +(69 - 68)) {
        scanf ("%d", &Bk6SR8AtM[B6UyviaJ3En]);
        aLGd9WjiIJX = aLGd9WjiIJX + Bk6SR8AtM[B6UyviaJ3En];
    }
    yMGt90Do52jg = aLGd9WjiIJX / Dnz3aO;
    for (B6UyviaJ3En = (700 - 700); B6UyviaJ3En < Dnz3aO; B6UyviaJ3En = B6UyviaJ3En +(33 - 32)) {
        pCB1gRAIuKnj[B6UyviaJ3En] = ((double ) Bk6SR8AtM[B6UyviaJ3En] - yMGt90Do52jg);
        if (0 > pCB1gRAIuKnj[B6UyviaJ3En])
            pCB1gRAIuKnj[B6UyviaJ3En] = -pCB1gRAIuKnj[B6UyviaJ3En];
    }
    C1qjI5dPuLeD = pCB1gRAIuKnj[0];
    {
        B6UyviaJ3En = 1;
        for (; B6UyviaJ3En < Dnz3aO;) {
            if (C1qjI5dPuLeD < pCB1gRAIuKnj[B6UyviaJ3En]) {
                C1qjI5dPuLeD = pCB1gRAIuKnj[B6UyviaJ3En];
            }
            B6UyviaJ3En = B6UyviaJ3En +1;
        }
    }
    for (B6UyviaJ3En = 0; B6UyviaJ3En < Dnz3aO; B6UyviaJ3En++) {
        if (pCB1gRAIuKnj[B6UyviaJ3En] == C1qjI5dPuLeD) {
            if (rVQj6rZ == 0) {
                rVQj6rZ = 1;
                printf ("%d", Bk6SR8AtM[B6UyviaJ3En]);
            }
            else {
                printf (",%d", Bk6SR8AtM[B6UyviaJ3En]);
            }
        }
    }
    return 0;
}

