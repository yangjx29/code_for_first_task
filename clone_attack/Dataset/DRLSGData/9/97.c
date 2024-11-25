struct   people {
    char InXdDKaY [(672 - 662)];
    int rsT7MyAXFC;
    struct   people *imZM4B;
};
void  main () {
    int OXm6z4iL;
    int QnGRSQrhm;
    struct   people *wNjvg2biZ;
    struct   people *kS4cPZlOVE;
    struct   people *XBLxeykJIf;
    struct   people *s;
    wNjvg2biZ = (struct   people *) malloc (sizeof (struct   people));
    wNjvg2biZ->imZM4B = NULL;
    scanf ("%d", &QnGRSQrhm);
    {
        OXm6z4iL = 884 - 884;
        while (OXm6z4iL < QnGRSQrhm) {
            s = (struct   people *) malloc (sizeof (struct   people));
            kS4cPZlOVE = wNjvg2biZ;
            XBLxeykJIf = kS4cPZlOVE->imZM4B;
            s->imZM4B = NULL;
            scanf ("%s %d", s->InXdDKaY, &s->rsT7MyAXFC);
            OXm6z4iL++;
            while (XBLxeykJIf != NULL &&(((413 - 353) <= s->rsT7MyAXFC && s->rsT7MyAXFC <= XBLxeykJIf->rsT7MyAXFC) || (987 - 927) > s->rsT7MyAXFC)) {
                kS4cPZlOVE = XBLxeykJIf;
                XBLxeykJIf = XBLxeykJIf->imZM4B;
            }
            kS4cPZlOVE->imZM4B = s;
            s->imZM4B = XBLxeykJIf;
        }
    }
    XBLxeykJIf = wNjvg2biZ->imZM4B;
    while (XBLxeykJIf != NULL) {
        printf ("%s\n", XBLxeykJIf->InXdDKaY);
        XBLxeykJIf = XBLxeykJIf->imZM4B;
    }
}

