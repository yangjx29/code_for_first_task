struct   sa {
    char CkFNf7G [500];
    struct   sa *jOayEnbuc;
};
int gobQ3pJUFOXc;

struct   sa *YcGLgf (void ) {
    struct   sa *jFesvXBHDA1;
    struct   sa *EHIMOu3J9, *HRkvTp1X;
    EHIMOu3J9 = HRkvTp1X = (struct   sa *) malloc (len);
    jFesvXBHDA1 = NULL;
    gobQ3pJUFOXc = (628 - 628);
    gets (EHIMOu3J9->CkFNf7G);
    jFesvXBHDA1 = EHIMOu3J9;
    for (;;) {
        gobQ3pJUFOXc++;
        if (!((705 - 704) != gobQ3pJUFOXc))
            EHIMOu3J9->jOayEnbuc = NULL;
        else {
            HRkvTp1X = EHIMOu3J9;
            EHIMOu3J9 = (struct   sa *) malloc (len);
            EHIMOu3J9->jOayEnbuc = HRkvTp1X;
            gets (EHIMOu3J9->CkFNf7G);
        }
        if (!(0 != strcmp (EHIMOu3J9->CkFNf7G, "end")))
            break;
    }
    jFesvXBHDA1 = HRkvTp1X;
    return (jFesvXBHDA1);
}

int main () {
    struct   sa *MOtKcC9b6;
    MOtKcC9b6 = YcGLgf ();
    for (; MOtKcC9b6 != NULL;) {
        printf ("%s\n", MOtKcC9b6->CkFNf7G);
        MOtKcC9b6 = MOtKcC9b6->jOayEnbuc;
    }
    return 0;
}

