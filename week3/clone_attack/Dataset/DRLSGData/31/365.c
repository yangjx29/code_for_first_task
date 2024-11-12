struct   ElnxFpc1AKdZ {
    struct   ElnxFpc1AKdZ *R0b4TAuYyxa;
    char ElnxFpc1AKdZ [20];
    char JIX7Yz [20];
    char Cr1knyCawQ52;
    int DgXsLNB;
    char ZDWa5xeFA [20];
    char NEnqiRk [20];
    struct   ElnxFpc1AKdZ *iUh2kSsQ6;
};
int main () {
    struct   ElnxFpc1AKdZ *autj2Al9;
    char ZOuC7GVxo3;
    struct   ElnxFpc1AKdZ *pEnd;
    struct   ElnxFpc1AKdZ *HR9ZznVWswf;
    struct   ElnxFpc1AKdZ *r4j0iuB;
    autj2Al9 = (struct   ElnxFpc1AKdZ *) malloc (sizeof (struct   ElnxFpc1AKdZ));
    autj2Al9->R0b4TAuYyxa = NULL;
    HR9ZznVWswf = autj2Al9;
    for (;;) {
        r4j0iuB = (struct   ElnxFpc1AKdZ *) malloc (sizeof (struct   ElnxFpc1AKdZ));
        scanf ("%s", r4j0iuB->ElnxFpc1AKdZ);
        ZOuC7GVxo3 = *r4j0iuB->ElnxFpc1AKdZ;
        if (!('e' != ZOuC7GVxo3)) {
            pEnd = r4j0iuB;
            r4j0iuB->R0b4TAuYyxa = HR9ZznVWswf;
            HR9ZznVWswf->iUh2kSsQ6 = r4j0iuB;
            r4j0iuB->iUh2kSsQ6 = NULL;
            break;
        }
        r4j0iuB->R0b4TAuYyxa = HR9ZznVWswf;
        HR9ZznVWswf->iUh2kSsQ6 = r4j0iuB;
        HR9ZznVWswf = r4j0iuB;
        scanf ("%s %c %d %s %s", r4j0iuB->JIX7Yz, &r4j0iuB->Cr1knyCawQ52, &r4j0iuB->DgXsLNB, &r4j0iuB->ZDWa5xeFA, r4j0iuB->NEnqiRk);
    }
    printf ("%s %s %c %d %s %s\n", HR9ZznVWswf->ElnxFpc1AKdZ, HR9ZznVWswf->JIX7Yz, HR9ZznVWswf->Cr1knyCawQ52, HR9ZznVWswf->DgXsLNB, HR9ZznVWswf->ZDWa5xeFA, HR9ZznVWswf->NEnqiRk);
    for (;;) {
        printf ("%s %s %c %d %s %s\n", HR9ZznVWswf->R0b4TAuYyxa->ElnxFpc1AKdZ, HR9ZznVWswf->R0b4TAuYyxa->JIX7Yz, HR9ZznVWswf->R0b4TAuYyxa->Cr1knyCawQ52, HR9ZznVWswf->R0b4TAuYyxa->DgXsLNB, HR9ZznVWswf->R0b4TAuYyxa->ZDWa5xeFA, HR9ZznVWswf->R0b4TAuYyxa->NEnqiRk);
        HR9ZznVWswf = HR9ZznVWswf->R0b4TAuYyxa;
        free (HR9ZznVWswf->iUh2kSsQ6);
        if (!(NULL != HR9ZznVWswf->R0b4TAuYyxa->R0b4TAuYyxa))
            break;
    }
    r4j0iuB = pEnd;
}

