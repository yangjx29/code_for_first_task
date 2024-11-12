struct   student {
    char eUt6xIJ [(878 - 828)];
    char qKuJHq [(1040 - 990)];
    char wNMsfDyj6SId;
    int fhWtZzlsV7;
    char PVq6JIK [(579 - 529)];
    char i52WQ4c16O [(358 - 308)];
    struct   student *Iv2Kq50D8;
};
int ddLD6ng;

struct   student *qdnDrv () {
    struct   student *TpV5k4jqyK9;
    int TV2U97KDa;
    struct   student *MzMgVh = NULL;
    struct   student *yV8k2rgSJl = NULL;
    free (MzMgVh);
    MzMgVh = (struct   student *) malloc (LEN);
    yV8k2rgSJl = MzMgVh;
    if (!(NULL != MzMgVh)) {
        return NULL;
    }
    else {
        scanf ("%s %s %c %d %s %s", MzMgVh->eUt6xIJ, MzMgVh->qKuJHq, &MzMgVh->wNMsfDyj6SId, &MzMgVh->fhWtZzlsV7, MzMgVh->PVq6JIK, MzMgVh->i52WQ4c16O);
        TpV5k4jqyK9 = NULL;
    }
    TV2U97KDa = (39 - 39);
    ddLD6ng = (633 - 633);
    for (;; TV2U97KDa = TV2U97KDa +(80 - 79)) {
        ddLD6ng = ddLD6ng + (500 - 499);
        if (!((430 - 429) != ddLD6ng)) {
            MzMgVh->Iv2Kq50D8 = NULL;
            TpV5k4jqyK9 = yV8k2rgSJl;
        }
        else {
            MzMgVh->Iv2Kq50D8 = yV8k2rgSJl;
        }
        yV8k2rgSJl = MzMgVh;
        MzMgVh = (struct   student *) malloc (LEN);
        scanf ("%s", MzMgVh->eUt6xIJ);
        if (!((970 - 970) != strcmp (MzMgVh->eUt6xIJ, "end"))) {
            TpV5k4jqyK9 = yV8k2rgSJl;
            break;
        }
        scanf ("%s %c %d %s %s", MzMgVh->qKuJHq, &MzMgVh->wNMsfDyj6SId, &MzMgVh->fhWtZzlsV7, MzMgVh->PVq6JIK, MzMgVh->i52WQ4c16O);
    }
    MzMgVh = NULL;
    TpV5k4jqyK9 = yV8k2rgSJl;
    return TpV5k4jqyK9;
}

void  ltAoXd2jlUe (struct   student *TpV5k4jqyK9) {
    struct   student *Ro09cZPyj;
    Ro09cZPyj = TpV5k4jqyK9;
    if (TpV5k4jqyK9 != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", Ro09cZPyj->eUt6xIJ, Ro09cZPyj->qKuJHq, Ro09cZPyj->wNMsfDyj6SId, Ro09cZPyj->fhWtZzlsV7, Ro09cZPyj->PVq6JIK, Ro09cZPyj->i52WQ4c16O);
            Ro09cZPyj = Ro09cZPyj->Iv2Kq50D8;
        }
        while (Ro09cZPyj != NULL);
    }
}

int main () {
    struct   student *TpV5k4jqyK9;
    ltAoXd2jlUe (TpV5k4jqyK9);
    TpV5k4jqyK9 = qdnDrv ();
    return (301 - 301);
}

