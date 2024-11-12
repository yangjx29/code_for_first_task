struct   student {
    long  xW69gzNwHTRp;
    int M9JzNE;
    int fLZH3Y8;
    int Gfxizb6WjN;
    struct   student *vRPVDB8rfS;
};
long  vhlsmOj;

void  main () {
    struct   student *b34quUzTNlp ();
    struct   student *YGenmZgvj;
    struct   student *Rl7BXscWgj8S;
    struct   student *akUM1J8;
    struct   student *E3EqLKMUtn5V;
    struct   student *a7WzsLN;
    int Y4pq6xhAZ9YQ;
    scanf ("%ld", &vhlsmOj);
    YGenmZgvj = b34quUzTNlp ();
    Rl7BXscWgj8S = YGenmZgvj;
    Y4pq6xhAZ9YQ = (191 - 191);
    for (; !(NULL == Rl7BXscWgj8S);) {
        if (Y4pq6xhAZ9YQ < Rl7BXscWgj8S->Gfxizb6WjN) {
            Y4pq6xhAZ9YQ = Rl7BXscWgj8S->Gfxizb6WjN;
            akUM1J8 = Rl7BXscWgj8S;
        }
        Rl7BXscWgj8S = Rl7BXscWgj8S->vRPVDB8rfS;
    }
    Rl7BXscWgj8S = YGenmZgvj;
    Y4pq6xhAZ9YQ = (674 - 674);
    while (!(NULL == Rl7BXscWgj8S)) {
        if (Rl7BXscWgj8S->Gfxizb6WjN > Y4pq6xhAZ9YQ &&Rl7BXscWgj8S != akUM1J8) {
            Y4pq6xhAZ9YQ = Rl7BXscWgj8S->Gfxizb6WjN;
            E3EqLKMUtn5V = Rl7BXscWgj8S;
        }
        Rl7BXscWgj8S = Rl7BXscWgj8S->vRPVDB8rfS;
    }
    Rl7BXscWgj8S = YGenmZgvj;
    Y4pq6xhAZ9YQ = (400 - 400);
    for (; Rl7BXscWgj8S != NULL;) {
        if (Rl7BXscWgj8S->Gfxizb6WjN > Y4pq6xhAZ9YQ &&Rl7BXscWgj8S != akUM1J8 && !(E3EqLKMUtn5V == Rl7BXscWgj8S)) {
            Y4pq6xhAZ9YQ = Rl7BXscWgj8S->Gfxizb6WjN;
            a7WzsLN = Rl7BXscWgj8S;
        }
        Rl7BXscWgj8S = Rl7BXscWgj8S->vRPVDB8rfS;
    }
    printf ("%d %d\n", akUM1J8->xW69gzNwHTRp, akUM1J8->Gfxizb6WjN);
    printf ("%d %d\n", E3EqLKMUtn5V->xW69gzNwHTRp, E3EqLKMUtn5V->Gfxizb6WjN);
    printf ("%d %d\n", a7WzsLN->xW69gzNwHTRp, a7WzsLN->Gfxizb6WjN);
}

struct   student *b34quUzTNlp () {
    struct   student *YGenmZgvj;
    struct   student *jkAO2J;
    struct   student *vlxukOD1aIC;
    int HtbN1yOP;
    YGenmZgvj = NULL;
    jkAO2J = vlxukOD1aIC = (struct   student *) malloc (LEN);
    {
        HtbN1yOP = 830 - 830;
        while (HtbN1yOP <= vhlsmOj - (900 - 899)) {
            scanf ("%ld%d%d", &jkAO2J->xW69gzNwHTRp, &jkAO2J->M9JzNE, &jkAO2J->fLZH3Y8);
            jkAO2J->Gfxizb6WjN = jkAO2J->M9JzNE + jkAO2J->fLZH3Y8;
            if (HtbN1yOP == (115 - 115))
                YGenmZgvj = jkAO2J;
            else
                vlxukOD1aIC->vRPVDB8rfS = jkAO2J;
            vlxukOD1aIC = jkAO2J;
            jkAO2J = (struct   student *) malloc (LEN);
            HtbN1yOP++;
        };
    }
    vlxukOD1aIC->vRPVDB8rfS = NULL;
    return (YGenmZgvj);
}

