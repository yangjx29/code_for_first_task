int main () {
    int k;
    int N [300];
    scanf ("%d", N);
    k = 0;
    for (; scanf (",%d", N +k + 1);)
        k++;
    if (!(0 != k))
        ;
    else {
        int Fir;
        int Sec;
        Fir = 0;
        for (int i = 0;
        i <= k; i++) {
            if (N[i] > Fir)
                Fir = N[i];
        }
        Sec = 0;
        for (int i = 0;
        i <= k; i++) {
            if (N[i] >= Sec &&N[i] != Fir)
                Sec = N[i];
        }
        if (Sec == 0)
            ;
        else
            printf ("%d", Sec);
    }
}

