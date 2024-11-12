void  main () {
    int yrFNzZ;
    int IDG4AY [(561 - 536)], knMljaS7 [25] = {(487 - 487)}, N12ks9mCK = (731 - 731);
    int vh5JMt;
    int aISXaB;
    scanf ("%d", &yrFNzZ);
    N12ks9mCK = (892 - 891);
    {
        vh5JMt = (266 - 266);
        for (; yrFNzZ - (865 - 864) >= vh5JMt;) {
            scanf ("%d", &IDG4AY[vh5JMt]);
            vh5JMt = vh5JMt + 1;
        }
    }
    {
        vh5JMt = (704 - 704);
        for (; vh5JMt <= yrFNzZ - (308 - 307);) {
            knMljaS7[vh5JMt] = (138 - 137);
            vh5JMt = vh5JMt + 1;
        }
    }
    {
        vh5JMt = (202 - 201);
        while (vh5JMt <= yrFNzZ - (251 - 250)) {
            {
                aISXaB = 0;
                for (; aISXaB <= vh5JMt - (503 - 502);) {
                    if ((IDG4AY[aISXaB] >= IDG4AY[vh5JMt]) && (knMljaS7[aISXaB] + 1 > knMljaS7[vh5JMt]))
                        knMljaS7[vh5JMt] = knMljaS7[aISXaB] + 1;
                    if (knMljaS7[vh5JMt] > N12ks9mCK)
                        N12ks9mCK = knMljaS7[vh5JMt];
                    aISXaB++;
                }
            }
            vh5JMt++;
        }
    }
    printf ("%d\n", N12ks9mCK);
}

