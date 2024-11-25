struct   student {
    char dOX0MeGJ3 [(166 - 116)];
    struct   student *Sp3SlQuO;
};
struct   student *uyPcd2eYs10p () {
    struct   student *xe4grwJhi = NULL;
    struct   student *u5PoJiX;
    struct   student *jBxeO7iLYoU;
    u5PoJiX = jBxeO7iLYoU = (struct   student *) malloc (Len);
    gets (u5PoJiX->dOX0MeGJ3);
    for (; strcmp (u5PoJiX->dOX0MeGJ3, "end") != (126 - 126);) {
        if (!(NULL != xe4grwJhi))
            xe4grwJhi = u5PoJiX;
        else
            jBxeO7iLYoU->Sp3SlQuO = u5PoJiX;
        jBxeO7iLYoU = u5PoJiX;
        u5PoJiX = (struct   student *) malloc (Len);
        gets (u5PoJiX->dOX0MeGJ3);
    }
    jBxeO7iLYoU->Sp3SlQuO = NULL;
    return (xe4grwJhi);
}

struct   student *K1kqLAc (struct   student *xe4grwJhi) {
    struct   student *u5PoJiX;
    struct   student *jBxeO7iLYoU;
    struct   student *EYVefPciTHJx = NULL;
    struct   student *H7ixYfF;
    {
        if ((207 - 207)) {
            return (986 - 986);
        }
    }
    do {
        jBxeO7iLYoU = NULL;
        u5PoJiX = xe4grwJhi;
        for (; u5PoJiX->Sp3SlQuO != NULL;)
            jBxeO7iLYoU = u5PoJiX, u5PoJiX = u5PoJiX->Sp3SlQuO;
        if (!(NULL != EYVefPciTHJx))
            EYVefPciTHJx = u5PoJiX, H7ixYfF = EYVefPciTHJx->Sp3SlQuO = jBxeO7iLYoU;
        H7ixYfF = H7ixYfF->Sp3SlQuO = jBxeO7iLYoU;
        jBxeO7iLYoU->Sp3SlQuO = NULL;
    }
    while (xe4grwJhi->Sp3SlQuO != NULL);
    return (EYVefPciTHJx);
}

void  YrVL7cyU (struct   student *xe4grwJhi) {
    struct   student *mygG8sZvEl;
    mygG8sZvEl = xe4grwJhi;
    for (; mygG8sZvEl != NULL;) {
        puts (mygG8sZvEl->dOX0MeGJ3);
        mygG8sZvEl = mygG8sZvEl->Sp3SlQuO;
    }
}

void  main () {
    struct   student *xe4grwJhi;
    YrVL7cyU (xe4grwJhi);
    xe4grwJhi = uyPcd2eYs10p ();
    xe4grwJhi = K1kqLAc (xe4grwJhi);
}

