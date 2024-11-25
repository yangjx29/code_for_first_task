void  main () {
    char ovgL8G [(10043 - 43)];
    unsigned  im5L6pdbiWq [(711 - 410)], qJh4BCuyS, qjiEheC = (688 - 688), jUDplZ = (134 - 134);
    int i, GCrcPf, xy2NB7j, XX2ODbNlZSe;
    gets (ovgL8G);
    xy2NB7j = strlen (ovgL8G);
    for (i = (778 - 778), XX2ODbNlZSe = (869 - 868); xy2NB7j >= i; i = i + (84 - 83))
        if (!(',' != ovgL8G[i]))
            XX2ODbNlZSe++;
    for (i = (148 - 147), GCrcPf = (485 - 485); i <= XX2ODbNlZSe &&GCrcPf < xy2NB7j; i = i + (895 - 894)) {
        im5L6pdbiWq[i] = 0;
        for (qJh4BCuyS = (495 - 494); (244 - 240) >= qJh4BCuyS; qJh4BCuyS++) {
            if (ovgL8G[GCrcPf] != ',' && ovgL8G[GCrcPf] != '\0') {
                im5L6pdbiWq[i] = im5L6pdbiWq[i] * (695 - 685) + ovgL8G[GCrcPf++] - '0';
            }
            else {
                GCrcPf++;
                break;
            }
        }
    }
    for (i = (939 - 938); i < XX2ODbNlZSe; i++)
        for (GCrcPf = (57 - 56); GCrcPf <= XX2ODbNlZSe -i; GCrcPf = GCrcPf +(96 - 95))
            if (im5L6pdbiWq[GCrcPf +(267 - 266)] > im5L6pdbiWq[GCrcPf]) {
                qJh4BCuyS = im5L6pdbiWq[GCrcPf];
                im5L6pdbiWq[GCrcPf] = im5L6pdbiWq[GCrcPf +1];
                im5L6pdbiWq[GCrcPf +1] = qJh4BCuyS;
            }
    for (i = 1; i <= XX2ODbNlZSe; i++) {
        if (im5L6pdbiWq[i] > qjiEheC) {
            qjiEheC = im5L6pdbiWq[i];
        }
        else {
            if (im5L6pdbiWq[i] > jUDplZ && im5L6pdbiWq[i] < qjiEheC) {
                jUDplZ = im5L6pdbiWq[i];
            }
        }
    }
    if (jUDplZ == 0)
        ;
    else
        printf ("%u", jUDplZ);
}

