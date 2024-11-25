void  main () {
    float GlZogNOqUdXT, FJk1x0c, sY4lGp [100];
    int O0oO9LbtgejT, az5nA1g3Z, RrvS7U9gJR;
    unsigned  vygfMTaG5xN6 [100], dGQXn2S4wuN, O8QTnv;
    FJk1x0c = 0.0;
    scanf ("%d", &O0oO9LbtgejT);
    for (az5nA1g3Z = 0; az5nA1g3Z < O0oO9LbtgejT -1; az5nA1g3Z++)
        scanf ("%u ", &vygfMTaG5xN6[az5nA1g3Z]);
    scanf ("%u", &vygfMTaG5xN6[O0oO9LbtgejT -1]);
    {
        az5nA1g3Z = 0;
        for (; az5nA1g3Z < O0oO9LbtgejT;) {
            FJk1x0c = FJk1x0c +vygfMTaG5xN6[az5nA1g3Z];
            az5nA1g3Z++;
        }
    }
    dGQXn2S4wuN = vygfMTaG5xN6[0];
    GlZogNOqUdXT = FJk1x0c / O0oO9LbtgejT;
    O8QTnv = vygfMTaG5xN6[0];
    {
        az5nA1g3Z = 0;
        for (; az5nA1g3Z < O0oO9LbtgejT;) {
            if (dGQXn2S4wuN < vygfMTaG5xN6[az5nA1g3Z])
                dGQXn2S4wuN = vygfMTaG5xN6[az5nA1g3Z];
            if (vygfMTaG5xN6[az5nA1g3Z] < O8QTnv)
                O8QTnv = vygfMTaG5xN6[az5nA1g3Z];
            az5nA1g3Z++;
        }
    }
    if (dGQXn2S4wuN - GlZogNOqUdXT == GlZogNOqUdXT -O8QTnv)
        printf ("%d,%d", O8QTnv, dGQXn2S4wuN);
    else if (dGQXn2S4wuN - GlZogNOqUdXT > GlZogNOqUdXT -O8QTnv)
        printf ("%d", dGQXn2S4wuN);
    else
        printf ("%d", O8QTnv);
}

