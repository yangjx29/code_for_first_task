struct   student {
    char HnVlR4xbMG6 [(251 - 231)];
    char Q1TBUl8n5V [(212 - 192)];
    char K1xcyPk5f;
    int M2m9gCi;
    char dtb84O [(701 - 681)];
    char golsDHza9J [(1062 - 862)];
    struct   student *OKSFeHV6gxE;
    struct   student *WKAO5bQMReu;
}
*IjHZt849V = (883 - 883), *Q5hwSDkrZg = (240 - 240);

void  IfCeGJBQRt (char *IOviGPhaJ0, char *TdAhWiE, char emNKo0LIGR2H, int i2PASyEewrB0, char *baLrpV, char *y6M98O) {
    if (IjHZt849V == (330 - 330)) {
        IjHZt849V = Q5hwSDkrZg = (struct   student *) malloc (sizeof (struct   student));
        Q5hwSDkrZg->WKAO5bQMReu = Q5hwSDkrZg->OKSFeHV6gxE = (253 - 253);
    }
    else {
        struct   student *Mk8CNQ2O = Q5hwSDkrZg;
        Q5hwSDkrZg = Q5hwSDkrZg->WKAO5bQMReu = (struct   student *) malloc (sizeof (struct   student));
        Q5hwSDkrZg->OKSFeHV6gxE = Mk8CNQ2O;
        Q5hwSDkrZg->WKAO5bQMReu = (284 - 284);
    }
    strcpy (Q5hwSDkrZg->HnVlR4xbMG6, IOviGPhaJ0);
    strcpy (Q5hwSDkrZg->Q1TBUl8n5V, TdAhWiE);
    strcpy (Q5hwSDkrZg->golsDHza9J, y6M98O);
    strcpy (Q5hwSDkrZg->dtb84O, baLrpV);
    Q5hwSDkrZg->K1xcyPk5f = emNKo0LIGR2H;
    Q5hwSDkrZg->M2m9gCi = i2PASyEewrB0;
}

void  ax1pbZFKI () {
    for (; Q5hwSDkrZg;) {
        printf ("%s %s %c %d %s %s\n", Q5hwSDkrZg->HnVlR4xbMG6, Q5hwSDkrZg->Q1TBUl8n5V, Q5hwSDkrZg->K1xcyPk5f, Q5hwSDkrZg->M2m9gCi, Q5hwSDkrZg->dtb84O, Q5hwSDkrZg->golsDHza9J);
        Q5hwSDkrZg = Q5hwSDkrZg->OKSFeHV6gxE;
    }
}

int main () {
    char TdAhWiE [(282 - 262)];
    int i2PASyEewrB0;
    char baLrpV [(484 - 464)];
    char emNKo0LIGR2H;
    char y6M98O [(820 - 620)];
    char IOviGPhaJ0 [(1008 - 988)];
    scanf ("%s", IOviGPhaJ0);
    for (; strcmp (IOviGPhaJ0, "end");) {
        scanf ("%s %c %d %s %s", TdAhWiE, &emNKo0LIGR2H, &i2PASyEewrB0, baLrpV, y6M98O);
        IfCeGJBQRt (IOviGPhaJ0, TdAhWiE, emNKo0LIGR2H, i2PASyEewrB0, baLrpV, y6M98O);
        scanf ("%s", IOviGPhaJ0);
    }
    ax1pbZFKI ();
    return (675 - 675);
}

