void  eBOE2bVd (int fb1z9iu6hO [], float da30bMsCwzn []) {
    int bqDweU = 0, Vx6RZ8tK2E = 0, qohPswb;
    float mqyQTlu54N7c;
    for (; fb1z9iu6hO[bqDweU] != 0; bqDweU = bqDweU + 1)
        Vx6RZ8tK2E = Vx6RZ8tK2E +fb1z9iu6hO[bqDweU];
    mqyQTlu54N7c = (float) Vx6RZ8tK2E / bqDweU;
    {
        qohPswb = 0;
        for (; qohPswb < bqDweU;) {
            da30bMsCwzn[qohPswb] = fb1z9iu6hO[qohPswb] - mqyQTlu54N7c;
            qohPswb = qohPswb + 1;
        };
    };
}

float Ukg3Bc (float da30bMsCwzn [], int bqDweU) {
    int qKbTBAl;
    int qohPswb;
    qKbTBAl = 0;
    {
        qohPswb = 0;
        while (qohPswb < bqDweU) {
            if (fabs (da30bMsCwzn[qKbTBAl]) < fabs (da30bMsCwzn[qohPswb]))
                qKbTBAl = qohPswb;
            qohPswb = qohPswb + 1;
        };
    }
    return fabs (da30bMsCwzn[qKbTBAl]);
}

void  main () {
    int bqDweU, fb1z9iu6hO [300] = {0}, qohPswb, sLB4GFaZ = 0;
    float da30bMsCwzn [300] = {0}, QTf8FRdQ;
    scanf ("%d", &bqDweU);
    {
        qohPswb = 0;
        while (bqDweU > qohPswb) {
            scanf ("%d", &fb1z9iu6hO[qohPswb]);
            qohPswb = qohPswb + 1;
        };
    }
    eBOE2bVd (fb1z9iu6hO, da30bMsCwzn);
    QTf8FRdQ = Ukg3Bc (da30bMsCwzn, bqDweU);
    {
        qohPswb = 0;
        while (qohPswb < bqDweU) {
            if (!((-QTf8FRdQ) != da30bMsCwzn[qohPswb])) {
                printf ("%d", fb1z9iu6hO[qohPswb]);
                if (sLB4GFaZ != 0)
                    ;
                sLB4GFaZ = sLB4GFaZ + 1;
            }
            qohPswb = qohPswb + 1;
        };
    }
    {
        qohPswb = 0;
        for (; qohPswb < bqDweU;) {
            if (!(QTf8FRdQ != da30bMsCwzn[qohPswb])) {
                if (sLB4GFaZ != 0)
                    ;
                printf ("%d", fb1z9iu6hO[qohPswb]);
            }
            qohPswb = qohPswb + 1;
        };
    };
}

