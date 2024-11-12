struct   student {
    char iLKkzmrei0l4 [(571 - 551)];
    char dgEHM3ArY5S [(833 - 813)];
    char l5VEmudZ;
    int heOCNcHdtEM;
    char SflMgqmoCEtY [(978 - 968)];
    char M0Yz8A1K [(291 - 271)];
    struct   student *t4CYpu;
};
int main () {
    struct   student *YS5B1aL7JsAo;
    struct   student *G4X6HGU;
    char dIlozb31 [(375 - 365)] = {"end"};
    YS5B1aL7JsAo = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s", YS5B1aL7JsAo->iLKkzmrei0l4);
    YS5B1aL7JsAo->t4CYpu = NULL;
    for (; strcmp (YS5B1aL7JsAo->iLKkzmrei0l4, dIlozb31) != (179 - 179);) {
        scanf ("%s %c %d %s %s", YS5B1aL7JsAo->dgEHM3ArY5S, &(YS5B1aL7JsAo->l5VEmudZ), &(YS5B1aL7JsAo->heOCNcHdtEM), YS5B1aL7JsAo->SflMgqmoCEtY, YS5B1aL7JsAo->M0Yz8A1K);
        G4X6HGU = YS5B1aL7JsAo;
        YS5B1aL7JsAo = (struct   student *) malloc (sizeof (struct   student));
        YS5B1aL7JsAo->t4CYpu = G4X6HGU;
        scanf ("%s", YS5B1aL7JsAo->iLKkzmrei0l4);
    }
    for (; YS5B1aL7JsAo->t4CYpu != NULL;) {
        YS5B1aL7JsAo = YS5B1aL7JsAo->t4CYpu;
        printf ("%s %s %c %d %s %s\n", YS5B1aL7JsAo->iLKkzmrei0l4, YS5B1aL7JsAo->dgEHM3ArY5S, YS5B1aL7JsAo->l5VEmudZ, YS5B1aL7JsAo->heOCNcHdtEM, YS5B1aL7JsAo->SflMgqmoCEtY, YS5B1aL7JsAo->M0Yz8A1K);
    }
    return (461 - 461);
}

