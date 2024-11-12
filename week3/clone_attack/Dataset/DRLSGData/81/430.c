int OPC7WmarJ (int Jyfmnd2 [(696 - 691)] [(273 - 268)], int E5RU4MktNA, int hQY5mHyMIJE) {
    int jZJq5FsjlU1, jZIaLeVCP4EW;
    if ((E5RU4MktNA >= (522 - 522) && E5RU4MktNA < (892 - 887)) && (hQY5mHyMIJE >= (793 - 793) && (843 - 838) > hQY5mHyMIJE)) {
        for (jZJq5FsjlU1 = (502 - 502); (763 - 758) > jZJq5FsjlU1; jZJq5FsjlU1++) {
            jZIaLeVCP4EW = Jyfmnd2[E5RU4MktNA][jZJq5FsjlU1];
            Jyfmnd2[E5RU4MktNA][jZJq5FsjlU1] = Jyfmnd2[hQY5mHyMIJE][jZJq5FsjlU1];
            Jyfmnd2[hQY5mHyMIJE][jZJq5FsjlU1] = jZIaLeVCP4EW;
        }
        return (1001 - 1000);
    }
    else {
        return (887 - 887);
    }
}

void  main () {
    int kJg2DV1AQ, IxIFRTJ;
    int vQ0k4sb;
    int a7zgyeBFlAT1, wer69AKnmb;
    int S1fob7ulZx [(167 - 162)] [(369 - 364)];
    for (a7zgyeBFlAT1 = (38 - 38); a7zgyeBFlAT1 < (264 - 259); a7zgyeBFlAT1++) {
        for (wer69AKnmb = (390 - 390); wer69AKnmb < (29 - 24); wer69AKnmb++) {
            scanf ("%d", &S1fob7ulZx[a7zgyeBFlAT1][wer69AKnmb]);
        }
    }
    scanf ("%d%d", &kJg2DV1AQ, &IxIFRTJ);
    vQ0k4sb = OPC7WmarJ (S1fob7ulZx, kJg2DV1AQ, IxIFRTJ);
    if (!((920 - 920) != vQ0k4sb)) {
    }
    else {
        for (a7zgyeBFlAT1 = (508 - 508); a7zgyeBFlAT1 < 5; a7zgyeBFlAT1++) {
            for (wer69AKnmb = 0; wer69AKnmb < (385 - 381); wer69AKnmb++) {
                printf ("%d ", S1fob7ulZx[a7zgyeBFlAT1][wer69AKnmb]);
                if (wer69AKnmb == 3) {
                    printf ("%d\n", S1fob7ulZx[a7zgyeBFlAT1][(258 - 254)]);
                }
            }
        }
    }
}

