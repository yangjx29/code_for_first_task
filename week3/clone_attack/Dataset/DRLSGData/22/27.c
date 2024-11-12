main () {
    char ch;
    int aP7avz5 = 0, Dm7Fdr, CQW13K, atmaYfqn [301] = {0}, zRGe45wCLyf = 0;
    atmaYfqn[0] = 0;
    do {
        ch = getchar ();
        aP7avz5 = aP7avz5 + 1;
        scanf ("%d", &atmaYfqn[aP7avz5]);
    }
    while (ch != '\n');
    for (Dm7Fdr = 1; aP7avz5 > Dm7Fdr; Dm7Fdr++) {
        for (CQW13K = aP7avz5; CQW13K > Dm7Fdr; CQW13K--) {
            if (atmaYfqn[CQW13K] > atmaYfqn[CQW13K -1]) {
                atmaYfqn[CQW13K] = atmaYfqn[CQW13K] + atmaYfqn[CQW13K -1];
                atmaYfqn[CQW13K -1] = atmaYfqn[CQW13K] - atmaYfqn[CQW13K -1];
                atmaYfqn[CQW13K] = atmaYfqn[CQW13K] - atmaYfqn[CQW13K -1];
            }
        }
    }
    if (!(1 != aP7avz5))
        ;
    else {
        for (Dm7Fdr = 2; aP7avz5 >= Dm7Fdr; Dm7Fdr++) {
            if (atmaYfqn[Dm7Fdr] != atmaYfqn[1]) {
                goto cobra_loop;
                printf ("%d", atmaYfqn[Dm7Fdr]);
            }
        }
    cobra_loop :
        return 0;
    }
}

