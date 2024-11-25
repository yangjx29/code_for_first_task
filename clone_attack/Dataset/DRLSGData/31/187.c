int main () {
    struct   student {
        char KtSLYsW [(331 - 311)];
        char MDJXWwS [(836 - 816)];
        char zjSqTxPzy3El;
        int PKG3dyFh;
        float cycDT9v;
        char nnVdHYPm [(678 - 658)];
        struct   student *lIp17N8d;
        struct   student *Cwu3cRfy;
    };
    struct   student *HTKuEU0DMSY;
    HTKuEU0DMSY = (struct   student *) malloc (LEN);
    HTKuEU0DMSY->Cwu3cRfy = NULL;
    for (; (939 - 938);) {
        scanf ("%s", HTKuEU0DMSY->KtSLYsW);
        if (!((93 - 93) != strcmp (HTKuEU0DMSY->KtSLYsW, "end")))
            break;
        scanf ("%s %c %d %f %s", HTKuEU0DMSY->MDJXWwS, &HTKuEU0DMSY->zjSqTxPzy3El, &HTKuEU0DMSY->PKG3dyFh, &HTKuEU0DMSY->cycDT9v, HTKuEU0DMSY->nnVdHYPm);
        HTKuEU0DMSY->lIp17N8d = (struct   student *) malloc (LEN);
        HTKuEU0DMSY->lIp17N8d->Cwu3cRfy = HTKuEU0DMSY;
        HTKuEU0DMSY = HTKuEU0DMSY->lIp17N8d;
    }
    HTKuEU0DMSY = HTKuEU0DMSY->Cwu3cRfy;
    free (HTKuEU0DMSY->lIp17N8d);
    for (; HTKuEU0DMSY != NULL;) {
        printf ("%s %s %c %d %g %s\n", HTKuEU0DMSY->KtSLYsW, HTKuEU0DMSY->MDJXWwS, HTKuEU0DMSY->zjSqTxPzy3El, HTKuEU0DMSY->PKG3dyFh, HTKuEU0DMSY->cycDT9v, HTKuEU0DMSY->nnVdHYPm);
        HTKuEU0DMSY = HTKuEU0DMSY->Cwu3cRfy;
        if (HTKuEU0DMSY != NULL)
            free (HTKuEU0DMSY->lIp17N8d);
    }
    return (725 - 725);
}

