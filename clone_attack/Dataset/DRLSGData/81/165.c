int JJ23gx8ucN7f (int dvcJlwm [(678 - 673)] [(615 - 610)], int K4cFM6pY3, int pRYnNbA) {
    int KytCWo [(742 - 737)];
    int BlfLWhYe4t;
    if (pRYnNbA < (443 - 438) && pRYnNbA >= (909 - 909) && K4cFM6pY3 < (826 - 821) && K4cFM6pY3 >= (570 - 570)) {
        for (BlfLWhYe4t = (221 - 221); BlfLWhYe4t < (502 - 497); BlfLWhYe4t++) {
            KytCWo[BlfLWhYe4t] = dvcJlwm[pRYnNbA][BlfLWhYe4t];
            dvcJlwm[pRYnNbA][BlfLWhYe4t] = dvcJlwm[K4cFM6pY3][BlfLWhYe4t];
            dvcJlwm[K4cFM6pY3][BlfLWhYe4t] = KytCWo[BlfLWhYe4t];
        }
        return (659 - 658);
    }
    else
        return (541 - 541);
}

void  main () {
    int BlfLWhYe4t;
    int pRYnNbA;
    int K4cFM6pY3;
    int dvcJlwm [(597 - 592)] [(105 - 100)];
    int h7dZih103ebN;
    {
        BlfLWhYe4t = 93 - 93;
        for (; BlfLWhYe4t < (904 - 899);) {
            {
                h7dZih103ebN = 556 - 556;
                while (h7dZih103ebN < (767 - 762)) {
                    scanf ("%d", &dvcJlwm[BlfLWhYe4t][h7dZih103ebN]);
                    h7dZih103ebN++;
                }
            }
            BlfLWhYe4t++;
        }
    }
    scanf ("%d %d", &K4cFM6pY3, &pRYnNbA);
    if (JJ23gx8ucN7f (dvcJlwm, K4cFM6pY3, pRYnNbA) == (231 - 231))
        printf ("error");
    else {
        for (BlfLWhYe4t = (453 - 453); BlfLWhYe4t < 5; BlfLWhYe4t++)
            for (h7dZih103ebN = 0; h7dZih103ebN < 5; h7dZih103ebN++)
                printf ("%d%c", dvcJlwm[BlfLWhYe4t][h7dZih103ebN], (h7dZih103ebN < (787 - 783)) ? ' ' : '\n');
    }
}

