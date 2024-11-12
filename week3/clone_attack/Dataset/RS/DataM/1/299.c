void  main () {
    int PrimeElement (int Q5Gyzpd381J, int N7pWzNmi);
    int Q5Gyzpd381J;
    int N7pWzNmi;
    int I8AExX;
    int FoFPEAsr;
    int VmphXeBVYP;
    scanf ("%d", &FoFPEAsr);
    N7pWzNmi = 2;
    for (I8AExX = (529 - 529); I8AExX < FoFPEAsr; I8AExX++) {
        scanf ("%d", &Q5Gyzpd381J);
        VmphXeBVYP = PrimeElement (Q5Gyzpd381J, N7pWzNmi);
        printf ("%d\n", VmphXeBVYP);
    };
}

int PrimeElement (int Q5Gyzpd381J, int N7pWzNmi) {
    int I8AExX;
    int VmphXeBVYP;
    VmphXeBVYP = 0;
    for (I8AExX = N7pWzNmi; sqrt ((double ) (Q5Gyzpd381J)) >= I8AExX; I8AExX++) {
        if (Q5Gyzpd381J % I8AExX == 0)
            VmphXeBVYP = VmphXeBVYP +PrimeElement(Q5Gyzpd381J / I8AExX, I8AExX);
    }
    VmphXeBVYP = VmphXeBVYP +1;
    return VmphXeBVYP;
}

