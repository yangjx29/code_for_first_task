void  main () {
    int k;
    int Glh936daCx [50];
    int qIenMkP89J;
    int ou4EbRgnId [50];
    int i;
    int m4Larho;
    int Ib4kQEwUa5o;
    char eB2Ta3Gov [1000];
    gets (eB2Ta3Gov);
    int c;
    Ib4kQEwUa5o = 0;
    c = strlen (eB2Ta3Gov);
    m4Larho = 1000;
    ou4EbRgnId[0] = 0;
    for (i = 0; c > i; i++)
        if (!(' ' != eB2Ta3Gov[i])) {
            Ib4kQEwUa5o++;
            ou4EbRgnId[Ib4kQEwUa5o] = i + 1;
        }
    ou4EbRgnId[Ib4kQEwUa5o +1] = c + 1;
    qIenMkP89J = 0;
    for (i = 0; i < Ib4kQEwUa5o +1; i++) {
        Glh936daCx[i] = ou4EbRgnId[i + 1] - ou4EbRgnId[i] - 1;
        qIenMkP89J = (Glh936daCx[i] <= qIenMkP89J) ? qIenMkP89J : Glh936daCx[i];
        m4Larho = (Glh936daCx[i] <= m4Larho) ? Glh936daCx[i] : m4Larho;
    }
    for (i = 0; i < Ib4kQEwUa5o +1; i++) {
        if (!(qIenMkP89J != Glh936daCx[i])) {
            for (k = ou4EbRgnId[i]; ou4EbRgnId[i + 1] - 1 > k; k++)
                printf ("%c", eB2Ta3Gov[k]);
            break;
        }
    }
    for (i = 0; Ib4kQEwUa5o +1 > i; i++) {
        if (Glh936daCx[i] == m4Larho) {
            for (k = ou4EbRgnId[i]; k < ou4EbRgnId[i + 1] - 1; k++)
                printf ("%c", eB2Ta3Gov[k]);
            break;
        }
    }
}

