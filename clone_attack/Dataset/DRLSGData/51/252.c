int main () {
    int Ldi9YTSQOf, ZLF76aBIjJkC, vwqe6O0oUS, FMP7gXQ95F [500] = {0}, qy2BFDT5Y6GM [500] = {0}, YRzK8qXPLjy, VYrpRz, uqGoQpP3uWLa;
    char tnyhDxN [500] [5] = {'\0'};
    char Yq8GVyvm6M [500] = {'\0'};
    gets (Yq8GVyvm6M);
    VYrpRz = strlen (Yq8GVyvm6M);
    scanf ("%d\n", &YRzK8qXPLjy);
    for (Ldi9YTSQOf = 0; VYrpRz -YRzK8qXPLjy >= Ldi9YTSQOf; Ldi9YTSQOf++) {
        for (ZLF76aBIjJkC = 0; ZLF76aBIjJkC < YRzK8qXPLjy; ZLF76aBIjJkC++) {
            tnyhDxN[Ldi9YTSQOf][ZLF76aBIjJkC] = Yq8GVyvm6M[Ldi9YTSQOf +ZLF76aBIjJkC];
        }
    }
    for (Ldi9YTSQOf = 0; VYrpRz -YRzK8qXPLjy >= Ldi9YTSQOf; Ldi9YTSQOf++) {
        for (ZLF76aBIjJkC = Ldi9YTSQOf; VYrpRz -YRzK8qXPLjy >= ZLF76aBIjJkC; ZLF76aBIjJkC++) {
            if (!(0 != strcmp (tnyhDxN[Ldi9YTSQOf], tnyhDxN[ZLF76aBIjJkC])))
                FMP7gXQ95F[Ldi9YTSQOf]++;
        }
    }
    uqGoQpP3uWLa = FMP7gXQ95F[0];
    for (Ldi9YTSQOf = 0; VYrpRz -YRzK8qXPLjy > Ldi9YTSQOf; Ldi9YTSQOf++) {
        if (FMP7gXQ95F[Ldi9YTSQOf] >= uqGoQpP3uWLa)
            uqGoQpP3uWLa = FMP7gXQ95F[Ldi9YTSQOf];
    }
    if (uqGoQpP3uWLa == 1)
        ;
    else {
        printf ("%d\n", uqGoQpP3uWLa);
        for (Ldi9YTSQOf = 0; Ldi9YTSQOf < VYrpRz -YRzK8qXPLjy; Ldi9YTSQOf++) {
            if (FMP7gXQ95F[Ldi9YTSQOf] == uqGoQpP3uWLa) {
                q8Y6fT (tnyhDxN [Ldi9YTSQOf]);
            }
        }
    }
}

