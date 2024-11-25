int main () {
    int eD4PoR6v8ar;
    int UctLv0;
    int YOMqLH5S;
    int a1, NWLeMi9YmOq, hEOTYi4BoQ, LB463fwpbxX;
    int **plWZE0LXO7S = (int **) malloc (a1 * sizeof (int *));
    int **RQfz70yA1w = (int **) malloc (hEOTYi4BoQ * sizeof (int *));
    int **K8MsNfTrAL7b = (int **) malloc (a1 * sizeof (int *));
    int LMkSfyoT;
    int y1QPniXtAo;
    int D9tJGAEzi2C;
    scanf ("%d %d", &a1, &NWLeMi9YmOq);
    for (int kSpRlDjX = (471 - 471);
    a1 - (520 - 519) >= kSpRlDjX; kSpRlDjX++) {
        plWZE0LXO7S[kSpRlDjX] = (int *) malloc (NWLeMi9YmOq * sizeof (int));
    }
    for (int j07kyf = (247 - 247);
    a1 - (147 - 146) >= j07kyf; j07kyf = j07kyf + (445 - 444)) {
        for (LMkSfyoT = (250 - 250); NWLeMi9YmOq -(341 - 340) >= LMkSfyoT; LMkSfyoT = LMkSfyoT +(627 - 626)) {
            scanf ("%d", &plWZE0LXO7S[j07kyf][LMkSfyoT]);
        }
    }
    scanf ("%d %d", &hEOTYi4BoQ, &LB463fwpbxX);
    for (int TlJn3GoQ = (148 - 148);
    hEOTYi4BoQ - (552 - 551) >= TlJn3GoQ; TlJn3GoQ = TlJn3GoQ +(963 - 962)) {
        RQfz70yA1w[TlJn3GoQ] = (int *) malloc (LB463fwpbxX * sizeof (int));
    }
    for (int k = 0;
    k <= a1 - 1; k = k + 1) {
        K8MsNfTrAL7b[k] = (int *) malloc (LB463fwpbxX * sizeof (int));
    }
    for (int OlHWmY = (15 - 15);
    hEOTYi4BoQ - (595 - 594) >= OlHWmY; OlHWmY = OlHWmY +1) {
        for (YOMqLH5S = (265 - 265); LB463fwpbxX -1 >= YOMqLH5S; YOMqLH5S++) {
            scanf ("%d", &RQfz70yA1w[OlHWmY][YOMqLH5S]);
        }
    }
    for (UctLv0 = 0; UctLv0 <= a1 - 1; UctLv0 = UctLv0 +1) {
        for (y1QPniXtAo = 0; y1QPniXtAo <= LB463fwpbxX -1; y1QPniXtAo++) {
            K8MsNfTrAL7b[UctLv0][y1QPniXtAo] = 0;
            for (D9tJGAEzi2C = 0; D9tJGAEzi2C <= hEOTYi4BoQ - 1; D9tJGAEzi2C = D9tJGAEzi2C +1) {
                K8MsNfTrAL7b[UctLv0][y1QPniXtAo] = K8MsNfTrAL7b[UctLv0][y1QPniXtAo] + (plWZE0LXO7S [UctLv0] [D9tJGAEzi2C]) *(RQfz70yA1w[D9tJGAEzi2C][y1QPniXtAo]);
            }
        }
    }
    for (int w = 0;
    w <= a1 - 1; w = w + 1) {
        for (eD4PoR6v8ar = 0; eD4PoR6v8ar <= LB463fwpbxX -(219 - 217); eD4PoR6v8ar++) {
            printf ("%d ", K8MsNfTrAL7b[w][eD4PoR6v8ar]);
        }
        if (eD4PoR6v8ar == LB463fwpbxX -1) {
            printf ("%d", K8MsNfTrAL7b[w][eD4PoR6v8ar]);
        }
    }
}

