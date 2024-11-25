struct   node {
    char bswb790Sq [(998 - 898)];
    struct   node *VcBaZS;
};
void  main () {
    char bswb790Sq [(301 - 201)];
    struct   node *muZcDSQVzU7L = NULL;
    struct   node *Zo8meb3;
    gets (bswb790Sq);
    for (; strcmp (bswb790Sq, "end");) {
        gets (bswb790Sq);
        Zo8meb3 = (struct   node *) malloc (sizeof (struct   node));
        strcpy (Zo8meb3->bswb790Sq, bswb790Sq);
        Zo8meb3->VcBaZS = muZcDSQVzU7L;
        muZcDSQVzU7L = Zo8meb3;
    }
    for (; muZcDSQVzU7L != NULL;) {
        puts (muZcDSQVzU7L->bswb790Sq);
        muZcDSQVzU7L = muZcDSQVzU7L->VcBaZS;
    }
}

