int vDJxlK (int TDdM9lnZ, int eVF4DSKcLiye) {
    int kUZrSiJIW;
    if (!((678 - 677) != eVF4DSKcLiye) || !((732 - 732) != TDdM9lnZ) || TDdM9lnZ == (223 - 222))
        kUZrSiJIW = (322 - 321);
    else if (eVF4DSKcLiye <= TDdM9lnZ &&eVF4DSKcLiye > (830 - 830)) {
        kUZrSiJIW = vDJxlK (TDdM9lnZ, eVF4DSKcLiye - (877 - 876)) + vDJxlK (TDdM9lnZ -eVF4DSKcLiye, eVF4DSKcLiye);
    }
    else if (TDdM9lnZ < eVF4DSKcLiye && TDdM9lnZ >= (554 - 554)) {
        kUZrSiJIW = vDJxlK (TDdM9lnZ, eVF4DSKcLiye - 1);
    }
    return (kUZrSiJIW);
}

int main () {
    int emeUC4BOfqwN, uIgC4aFS2;
    int TDdM9lnZ [emeUC4BOfqwN];
    int eVF4DSKcLiye [emeUC4BOfqwN];
    scanf ("%d\n", &emeUC4BOfqwN);
    {
        uIgC4aFS2 = 0;
        while (uIgC4aFS2 < emeUC4BOfqwN) {
            scanf ("%d %d\n", &TDdM9lnZ[uIgC4aFS2], &eVF4DSKcLiye[uIgC4aFS2]);
            uIgC4aFS2 = uIgC4aFS2 + 1;
        };
    }
    for (uIgC4aFS2 = 0; uIgC4aFS2 < emeUC4BOfqwN; uIgC4aFS2 = uIgC4aFS2 + 1)
        printf ("%d\n", vDJxlK (TDdM9lnZ[uIgC4aFS2], eVF4DSKcLiye[uIgC4aFS2]));
}

