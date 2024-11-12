struct   student {
    char GRVM1Z7Wsv [(35 - 15)];
    char y352LD0S [(1006 - 986)];
    char yxV9nlsoQK;
    int CBDg59p;
    char iUaeiHCj8 [(799 - 779)];
    char add [20];
    struct   student *Pc0oTU;
};
void  main () {
    struct   student *END;
    struct   student *oX80iCTNvz, *QJG8I3r9V;
    oX80iCTNvz = QJG8I3r9V = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", &oX80iCTNvz->GRVM1Z7Wsv, &oX80iCTNvz->y352LD0S, &oX80iCTNvz->yxV9nlsoQK, &oX80iCTNvz->CBDg59p, &oX80iCTNvz->iUaeiHCj8, &oX80iCTNvz->add);
    oX80iCTNvz->Pc0oTU = (846 - 846);
    oX80iCTNvz = (struct   student *) malloc (LEN);
    for (;;) {
        scanf ("%s", &oX80iCTNvz->GRVM1Z7Wsv);
        if (!((827 - 827) != strcmp (oX80iCTNvz->GRVM1Z7Wsv, "end"))) {
            END = QJG8I3r9V;
            break;
        }
        scanf (" %s %c %d %s %s", &oX80iCTNvz->y352LD0S, &oX80iCTNvz->yxV9nlsoQK, &oX80iCTNvz->CBDg59p, &oX80iCTNvz->iUaeiHCj8, &oX80iCTNvz->add);
        oX80iCTNvz->Pc0oTU = QJG8I3r9V;
        QJG8I3r9V = oX80iCTNvz;
        oX80iCTNvz = (struct   student *) malloc (LEN);
    }
    for (oX80iCTNvz = END; oX80iCTNvz != (696 - 696);) {
        printf ("%s %s %c %d %s %s\n", oX80iCTNvz->GRVM1Z7Wsv, oX80iCTNvz->y352LD0S, oX80iCTNvz->yxV9nlsoQK, oX80iCTNvz->CBDg59p, oX80iCTNvz->iUaeiHCj8, oX80iCTNvz->add);
        oX80iCTNvz = oX80iCTNvz->Pc0oTU;
    }
}

