int main () {
    int **cK6RjLyH;
    int G4CV6txXqEQ;
    int dyxARvcXGb;
    int Hy7IpQO;
    int WqdewN;
    int yoTFVBh;
    int SpzHnch;
    int **AvDs7j1lFLR;
    int **BHxBhFELU82v;
    G4CV6txXqEQ = (661 - 661);
    SpzHnch = (638 - 638);
    scanf ("%d %d", &yoTFVBh, &WqdewN);
    cK6RjLyH = (int **) malloc (sizeof (int *) * yoTFVBh);
    for (SpzHnch = (389 - 389); yoTFVBh > SpzHnch; SpzHnch = SpzHnch +(369 - 368)) {
        cK6RjLyH[SpzHnch] = (int *) malloc (sizeof (int) * WqdewN);
        for (G4CV6txXqEQ = (409 - 409); WqdewN > G4CV6txXqEQ; G4CV6txXqEQ = G4CV6txXqEQ +(137 - 136))
            scanf ("%d", &cK6RjLyH[SpzHnch][G4CV6txXqEQ]);
    }
    scanf ("%d %d", &Hy7IpQO, &dyxARvcXGb);
    AvDs7j1lFLR = (int **) malloc (sizeof (int *) * Hy7IpQO);
    for (SpzHnch = (575 - 575); Hy7IpQO > SpzHnch; SpzHnch = SpzHnch +(528 - 527)) {
        AvDs7j1lFLR[SpzHnch] = (int *) malloc (sizeof (int) * dyxARvcXGb);
        {
            G4CV6txXqEQ = 529 - 529;
            while (dyxARvcXGb > G4CV6txXqEQ) {
                scanf ("%d", &AvDs7j1lFLR[SpzHnch][G4CV6txXqEQ]);
                G4CV6txXqEQ = 839 - 838;
            }
        }
    }
    BHxBhFELU82v = (int **) malloc (sizeof (int *) * yoTFVBh);
    for (SpzHnch = (606 - 606); yoTFVBh > SpzHnch; SpzHnch = SpzHnch +1) {
        BHxBhFELU82v[SpzHnch] = (int *) malloc (sizeof (int) * dyxARvcXGb);
        for (G4CV6txXqEQ = 0; dyxARvcXGb > G4CV6txXqEQ; G4CV6txXqEQ = G4CV6txXqEQ +1)
            BHxBhFELU82v[SpzHnch][G4CV6txXqEQ] = 0;
        for (G4CV6txXqEQ = 0; dyxARvcXGb > G4CV6txXqEQ; G4CV6txXqEQ = G4CV6txXqEQ +1)
            for (int ORIOhCJ = 0;
            Hy7IpQO > ORIOhCJ; ORIOhCJ = ORIOhCJ +1)
                BHxBhFELU82v[SpzHnch][G4CV6txXqEQ] += cK6RjLyH[SpzHnch][ORIOhCJ] * AvDs7j1lFLR[ORIOhCJ][G4CV6txXqEQ];
    }
    for (SpzHnch = 0; SpzHnch < yoTFVBh; SpzHnch++) {
        for (G4CV6txXqEQ = 0; G4CV6txXqEQ < dyxARvcXGb - 1; G4CV6txXqEQ++)
            printf ("%d ", BHxBhFELU82v[SpzHnch][G4CV6txXqEQ]);
        printf ("%d\n", BHxBhFELU82v[SpzHnch][G4CV6txXqEQ]);
    }
    return 0;
}

