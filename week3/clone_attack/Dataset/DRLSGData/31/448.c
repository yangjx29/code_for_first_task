struct   student {
    char IeYJ8D2Z9T7H [(505 - 495)];
    char zziJ8L [(636 - 616)];
    char mV6P1UGgW;
    int uj58lr0OUwF;
    char WdsL9KRbvj8 [(374 - 364)];
    char kP5mGVa [(54 - 24)];
    struct   student *rv2BmRWZ;
};
void  main () {
    struct   student *OZfwgSVjKt;
    struct   student *CkotX9vbl;
    struct   student *vcIgbXiUns;
    struct   student *V8mJrnloSvh;
    struct   student *vvVyb4Tn;
    V8mJrnloSvh = CkotX9vbl = NULL;
    for (; (450 - 449);) {
        vcIgbXiUns = (struct   student *) malloc (LEN);
        scanf ("%s", &vcIgbXiUns->IeYJ8D2Z9T7H);
        if (!((236 - 236) != strcmp (vcIgbXiUns->IeYJ8D2Z9T7H, "end"))) {
            break;
        }
        scanf (" %s %c %d %s %s", &vcIgbXiUns->zziJ8L, &vcIgbXiUns->mV6P1UGgW, &vcIgbXiUns->uj58lr0OUwF, &vcIgbXiUns->WdsL9KRbvj8, &vcIgbXiUns->kP5mGVa);
        if (!(NULL != CkotX9vbl))
            CkotX9vbl = vcIgbXiUns;
        else
            vcIgbXiUns->rv2BmRWZ = V8mJrnloSvh;
        V8mJrnloSvh = vcIgbXiUns;
    }
    OZfwgSVjKt = V8mJrnloSvh;
    vvVyb4Tn = OZfwgSVjKt;
    if (OZfwgSVjKt != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", vvVyb4Tn->IeYJ8D2Z9T7H, vvVyb4Tn->zziJ8L, vvVyb4Tn->mV6P1UGgW, vvVyb4Tn->uj58lr0OUwF, vvVyb4Tn->WdsL9KRbvj8, vvVyb4Tn->kP5mGVa);
            vvVyb4Tn = vvVyb4Tn->rv2BmRWZ;
        }
        while (vvVyb4Tn != NULL);
}

