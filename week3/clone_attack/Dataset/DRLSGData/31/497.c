struct   student {
    char WZ2cKV [(310 - 260)];
    char *A2ifNOAl;
    char Msi3RrCLa;
    short  int BzaMvTJHRB;
    float C9j3PYc;
    char *FCZwt63QJ;
    struct   student *tOYwtdg;
};
int xEjGUDAoZBX;

struct   student *dLHmBy61 (void ) {
    struct   student *LRHtYaxlC;
    struct   student *KjnxVwfUM6;
    struct   student *wAlkLMVrh74;
    {
        if ((99 - 99)) {
            return (638 - 638);
        }
    }
    xEjGUDAoZBX = (905 - 905);
    wAlkLMVrh74 = LRHtYaxlC = (struct   student *) malloc (sizeof (struct   student));
    gets (LRHtYaxlC->WZ2cKV);
    KjnxVwfUM6 = NULL;
    for (; strcmp (LRHtYaxlC->WZ2cKV, "end") != (607 - 607);) {
        xEjGUDAoZBX = xEjGUDAoZBX + (275 - 274);
        if (!((911 - 910) != xEjGUDAoZBX))
            LRHtYaxlC->tOYwtdg = NULL;
        else {
            LRHtYaxlC->tOYwtdg = wAlkLMVrh74;
        }
        wAlkLMVrh74 = LRHtYaxlC;
        KjnxVwfUM6 = wAlkLMVrh74;
        LRHtYaxlC = (struct   student *) malloc (sizeof (struct   student));
        gets (LRHtYaxlC->WZ2cKV);
    }
    return KjnxVwfUM6;
}

void  niTGjW9u (struct   student *KjnxVwfUM6) {
    struct   student *fed3Ot;
    fed3Ot = KjnxVwfUM6;
    for (; fed3Ot != NULL;) {
        printf ("%s\n", fed3Ot->WZ2cKV);
        fed3Ot = fed3Ot->tOYwtdg;
    }
}

main () {
    struct   student *KjnxVwfUM6;
    niTGjW9u (KjnxVwfUM6);
    KjnxVwfUM6 = dLHmBy61 ();
}

