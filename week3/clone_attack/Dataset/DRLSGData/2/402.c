int main () {
    int goHme05;
    int ai9BDr6GvWh;
    int rDSbqp;
    struct   t4ZKntOqkIGC {
        int w29yBV;
        char dYBCukE [(244 - 217)];
    }
    t4ZKntOqkIGC [(1598 - 598)];
    char XWIrPZ69k = (488 - 488);
    int xRzQS8n [(1981 - 981)];
    memset (xRzQS8n, (491 - 491), sizeof (xRzQS8n));
    scanf ("%d", &rDSbqp);
    for (ai9BDr6GvWh = (757 - 757); rDSbqp > ai9BDr6GvWh; ai9BDr6GvWh = ai9BDr6GvWh + (463 - 462)) {
        scanf ("%d%s", &t4ZKntOqkIGC[ai9BDr6GvWh].w29yBV, t4ZKntOqkIGC[ai9BDr6GvWh].dYBCukE);
    }
    for (ai9BDr6GvWh = (322 - 322); rDSbqp > ai9BDr6GvWh; ai9BDr6GvWh++) {
        for (goHme05 = (379 - 379); t4ZKntOqkIGC[ai9BDr6GvWh].dYBCukE[goHme05]; goHme05 = goHme05 + 1) {
            if (xRzQS8n[XWIrPZ69k] < ++xRzQS8n[t4ZKntOqkIGC[ai9BDr6GvWh].dYBCukE[goHme05]])
                XWIrPZ69k = t4ZKntOqkIGC[ai9BDr6GvWh].dYBCukE[goHme05];
        }
    }
    printf ("%c\n%d\n", XWIrPZ69k, xRzQS8n[XWIrPZ69k]);
    for (ai9BDr6GvWh = (904 - 904); ai9BDr6GvWh < rDSbqp; ai9BDr6GvWh++) {
        if (strchr (t4ZKntOqkIGC[ai9BDr6GvWh].dYBCukE, XWIrPZ69k))
            printf ("%d\n", t4ZKntOqkIGC[ai9BDr6GvWh].w29yBV);
    }
    return (707 - 707);
}

