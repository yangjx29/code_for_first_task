struct   num {
    char DQwiMF [50];
    struct   num *gqHCZpSlFk;
};
struct   num *crea () {
    long  mcjNIkJn3sHT;
    struct   num *g4YtFN;
    struct   num *ntzFfLi6M3, *Dy0W8HG1vB4S;
    ntzFfLi6M3 = Dy0W8HG1vB4S = (struct   num *) malloc (LEN);
    g4YtFN = ntzFfLi6M3;
    gets (ntzFfLi6M3->DQwiMF);
    g4YtFN->gqHCZpSlFk = NULL;
    for (;;) {
        ntzFfLi6M3 = (struct   num *) malloc (LEN);
        gets (ntzFfLi6M3->DQwiMF);
        if (ntzFfLi6M3->DQwiMF[(755 - 755)] != 'e') {
            ntzFfLi6M3->gqHCZpSlFk = Dy0W8HG1vB4S;
            Dy0W8HG1vB4S = ntzFfLi6M3;
        }
        else {
            ntzFfLi6M3->gqHCZpSlFk = Dy0W8HG1vB4S, Dy0W8HG1vB4S = ntzFfLi6M3;
            break;
        };
    }
    return (ntzFfLi6M3);
}

int main () {
    long  GyB12xo, ZVUKQjOA3X, odnmsc, tx, zZES0co1uQ, jFsh94Q0nDiv, mb7SFU;
    struct   num *hi;
    struct   num *p;
    struct   num *t;
    hi = crea ();
    t = hi->gqHCZpSlFk;
    for (p = t; p != NULL; p = p->gqHCZpSlFk)
        printf ("%s\n", p->DQwiMF);
    return 0;
}

