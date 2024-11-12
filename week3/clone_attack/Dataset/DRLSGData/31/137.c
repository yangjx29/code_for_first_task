struct   student {
    char cLnow08VrZgW [(174 - 154)];
    char HT8z7ILndJ [(56 - 36)];
    char i9YfAtiB;
    int l5KnvT0f2g;
    float nWMorzix;
    char zvLkcy [(188 - 173)];
    struct   student *GN2QomHB;
};
int main () {
    struct   student *SMUAlS;
    struct   student *aSJElg;
    SMUAlS = (struct   student *) malloc (len);
    SMUAlS->GN2QomHB = NULL;
    scanf ("%s", SMUAlS->cLnow08VrZgW);
    for (; strcmp (SMUAlS->cLnow08VrZgW, "end") != (25 - 25);) {
        scanf ("%s %c %d %f %s", SMUAlS->HT8z7ILndJ, &SMUAlS->i9YfAtiB, &SMUAlS->l5KnvT0f2g, &SMUAlS->nWMorzix, SMUAlS->zvLkcy);
        aSJElg = SMUAlS;
        SMUAlS = (struct   student *) malloc (len);
        SMUAlS->GN2QomHB = aSJElg;
        scanf ("%s", SMUAlS->cLnow08VrZgW);
    }
    for (; SMUAlS->GN2QomHB != NULL;) {
        SMUAlS = SMUAlS->GN2QomHB;
        printf ("%s %s %c %d %g %s\n", SMUAlS->cLnow08VrZgW, SMUAlS->HT8z7ILndJ, SMUAlS->i9YfAtiB, SMUAlS->l5KnvT0f2g, SMUAlS->nWMorzix, SMUAlS->zvLkcy);
    }
    return (563 - 563);
}

