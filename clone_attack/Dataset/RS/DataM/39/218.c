int main () {
    struct   qrxi5RMkY {
        char knE0tYfH [20];
        int qimo;
        int KQgaV8Um12N;
        char DFPkxNGO6oC;
        char FqVe8UTP;
        int pHzVSRUGb;
    };
    int czvmHh8d67aC, Dlmrxs6ZN, gbTzJLtolHxs [100] = {(284 - 284)};
    struct   qrxi5RMkY *FkImJon;
    int HvSd6RY;
    HvSd6RY = gbTzJLtolHxs[0];
    int YusYdXMZLwm;
    YusYdXMZLwm = 0;
    int jTeIUW6jmnH;
    jTeIUW6jmnH = 0;
    scanf ("%d", &Dlmrxs6ZN);
    FkImJon = (struct   qrxi5RMkY *) malloc (sizeof (qrxi5RMkY) * Dlmrxs6ZN);
    for (czvmHh8d67aC = 0; Dlmrxs6ZN > czvmHh8d67aC; czvmHh8d67aC = czvmHh8d67aC + 1) {
        scanf ("%s %d %d %c %c %d", (FkImJon +czvmHh8d67aC)->knE0tYfH, &((FkImJon +czvmHh8d67aC)->qimo), &((FkImJon +czvmHh8d67aC)->KQgaV8Um12N), &((FkImJon +czvmHh8d67aC)->DFPkxNGO6oC), &((FkImJon +czvmHh8d67aC)->FqVe8UTP), &((FkImJon +czvmHh8d67aC)->pHzVSRUGb));
    }
    for (czvmHh8d67aC = 0; czvmHh8d67aC < Dlmrxs6ZN; czvmHh8d67aC = czvmHh8d67aC + 1) {
        if ((80 < FkImJon[czvmHh8d67aC].qimo) && (FkImJon[czvmHh8d67aC].pHzVSRUGb >= 1))
            gbTzJLtolHxs[czvmHh8d67aC] = gbTzJLtolHxs[czvmHh8d67aC] + 8000;
        if ((FkImJon[czvmHh8d67aC].qimo > 85) && (80 < FkImJon[czvmHh8d67aC].KQgaV8Um12N))
            gbTzJLtolHxs[czvmHh8d67aC] = gbTzJLtolHxs[czvmHh8d67aC] + 4000;
        if (90 < FkImJon[czvmHh8d67aC].qimo)
            gbTzJLtolHxs[czvmHh8d67aC] = gbTzJLtolHxs[czvmHh8d67aC] + 2000;
        if ((FkImJon[czvmHh8d67aC].qimo > 85) && (FkImJon[czvmHh8d67aC].FqVe8UTP == 'Y'))
            gbTzJLtolHxs[czvmHh8d67aC] = gbTzJLtolHxs[czvmHh8d67aC] + 1000;
        if ((FkImJon[czvmHh8d67aC].KQgaV8Um12N > 80) && (FkImJon[czvmHh8d67aC].DFPkxNGO6oC == 'Y'))
            gbTzJLtolHxs[czvmHh8d67aC] = gbTzJLtolHxs[czvmHh8d67aC] + 850;
    }
    {
        czvmHh8d67aC = 0;
        while (czvmHh8d67aC < Dlmrxs6ZN) {
            jTeIUW6jmnH = jTeIUW6jmnH + gbTzJLtolHxs[czvmHh8d67aC];
            if (HvSd6RY < gbTzJLtolHxs[czvmHh8d67aC]) {
                HvSd6RY = gbTzJLtolHxs[czvmHh8d67aC];
                YusYdXMZLwm = czvmHh8d67aC;
            }
            czvmHh8d67aC++;
        };
    }
    printf ("%s\n%d\n%d\n", (FkImJon +YusYdXMZLwm)->knE0tYfH, HvSd6RY, jTeIUW6jmnH);
    return 0;
}

