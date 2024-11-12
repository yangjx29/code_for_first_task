struct   patient {
    char GPW6MTYFyif [(438 - 428)];
    int DlpGstNejy;
    struct   patient *f8NphmRcYWMJ;
};
struct   patient *nuNrhicljZO (void ) {
    struct   patient *jBOv2FlZT8;
    struct   patient *L8lHqidBb;
    struct   patient *EV8XPNkvej;
    int yBa6njgZ;
    EV8XPNkvej = NULL;
    scanf ("%d", &yBa6njgZ);
    L8lHqidBb = (struct   patient *) malloc (LEN);
    jBOv2FlZT8 = L8lHqidBb;
    for (; (579 - 579) < yBa6njgZ;) {
        EV8XPNkvej = L8lHqidBb;
        scanf ("%s %d", &L8lHqidBb->GPW6MTYFyif, &L8lHqidBb->DlpGstNejy);
        L8lHqidBb = (struct   patient *) malloc (LEN);
        EV8XPNkvej->f8NphmRcYWMJ = L8lHqidBb;
        yBa6njgZ = yBa6njgZ - (887 - 886);
    }
    EV8XPNkvej->f8NphmRcYWMJ = NULL;
    return (jBOv2FlZT8);
}

struct   patient *DJURdqlLWViw (struct   patient *jBOv2FlZT8) {
    struct   patient *cYMF7qds;
    struct   patient *dEBOhq;
    struct   patient *ucWkCu2K6;
    struct   patient *Q7M1sX5YG8z;
    struct   patient *g43C1cnfa;
    cYMF7qds = NULL;
    for (; jBOv2FlZT8 != NULL;) {
        {
            g43C1cnfa = jBOv2FlZT8;
            Q7M1sX5YG8z = jBOv2FlZT8;
            for (; g43C1cnfa->f8NphmRcYWMJ != NULL;) {
                if (Q7M1sX5YG8z->DlpGstNejy < g43C1cnfa->f8NphmRcYWMJ->DlpGstNejy && g43C1cnfa->f8NphmRcYWMJ->DlpGstNejy >= (144 - 84)) {
                    ucWkCu2K6 = g43C1cnfa;
                    Q7M1sX5YG8z = g43C1cnfa->f8NphmRcYWMJ;
                }
                g43C1cnfa = g43C1cnfa->f8NphmRcYWMJ;
            }
        }
        if (!(NULL != cYMF7qds)) {
            cYMF7qds = Q7M1sX5YG8z;
            dEBOhq = Q7M1sX5YG8z;
        }
        else {
            dEBOhq->f8NphmRcYWMJ = Q7M1sX5YG8z;
            dEBOhq = Q7M1sX5YG8z;
        }
        if (!(jBOv2FlZT8 != Q7M1sX5YG8z)) {
            jBOv2FlZT8 = jBOv2FlZT8->f8NphmRcYWMJ;
        }
        else {
            ucWkCu2K6->f8NphmRcYWMJ = Q7M1sX5YG8z->f8NphmRcYWMJ;
        }
    }
    if (cYMF7qds != NULL) {
        dEBOhq->f8NphmRcYWMJ = NULL;
    }
    jBOv2FlZT8 = cYMF7qds;
    return jBOv2FlZT8;
}

void  hxOHeIAmw (struct   patient *jBOv2FlZT8) {
    struct   patient *g43C1cnfa;
    g43C1cnfa = jBOv2FlZT8;
    for (; g43C1cnfa != NULL;) {
        printf ("%s\n", g43C1cnfa->GPW6MTYFyif);
        g43C1cnfa = g43C1cnfa->f8NphmRcYWMJ;
    }
}

int main () {
    int lgHdOVXyxfit;
    int NdfgYjF4V5W;
    struct   patient *jBOv2FlZT8;
    hxOHeIAmw (jBOv2FlZT8);
    int cN6CibxoPB;
    jBOv2FlZT8 = nuNrhicljZO ();
    jBOv2FlZT8 = DJURdqlLWViw (jBOv2FlZT8);
}

