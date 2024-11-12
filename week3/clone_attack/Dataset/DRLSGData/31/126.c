struct   student {
    char qkodjw6DC9 [(784 - 734)];
    char vMJo97E [(157 - 107)];
    char eK4GTA8Xi;
    int R36sphyuW0;
    char b1fxpEs [(175 - 165)];
    char Ta3WOok [(502 - 482)];
    struct   student *ShcLExmF;
};
int main () {
    struct   student *fWEygJ;
    struct   student *Aj7CtUPK4JXR;
    Aj7CtUPK4JXR = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", Aj7CtUPK4JXR->qkodjw6DC9, Aj7CtUPK4JXR->vMJo97E, &Aj7CtUPK4JXR->eK4GTA8Xi, &Aj7CtUPK4JXR->R36sphyuW0, Aj7CtUPK4JXR->b1fxpEs, Aj7CtUPK4JXR->Ta3WOok);
    Aj7CtUPK4JXR->ShcLExmF = NULL;
    fWEygJ = Aj7CtUPK4JXR;
    Aj7CtUPK4JXR = (struct   student *) malloc (LEN);
    scanf ("%s", Aj7CtUPK4JXR->qkodjw6DC9);
    for (; strcmp (Aj7CtUPK4JXR->qkodjw6DC9, "end") != (869 - 869);) {
        scanf ("%s %c %d %s %s", Aj7CtUPK4JXR->vMJo97E, &Aj7CtUPK4JXR->eK4GTA8Xi, &Aj7CtUPK4JXR->R36sphyuW0, Aj7CtUPK4JXR->b1fxpEs, Aj7CtUPK4JXR->Ta3WOok);
        Aj7CtUPK4JXR->ShcLExmF = fWEygJ;
        fWEygJ = Aj7CtUPK4JXR;
        Aj7CtUPK4JXR = (struct   student *) malloc (LEN);
        scanf ("%s", Aj7CtUPK4JXR->qkodjw6DC9);
    }
    printf ("%s %s %c %d %s %s\n", fWEygJ->qkodjw6DC9, fWEygJ->vMJo97E, fWEygJ->eK4GTA8Xi, fWEygJ->R36sphyuW0, fWEygJ->b1fxpEs, fWEygJ->Ta3WOok);
    for (; fWEygJ->ShcLExmF != NULL;) {
        fWEygJ = fWEygJ->ShcLExmF;
        printf ("%s %s %c %d %s %s\n", fWEygJ->qkodjw6DC9, fWEygJ->vMJo97E, fWEygJ->eK4GTA8Xi, fWEygJ->R36sphyuW0, fWEygJ->b1fxpEs, fWEygJ->Ta3WOok);
    }
    return (717 - 717);
}

