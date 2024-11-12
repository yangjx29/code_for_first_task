int main () {
    int LRGLinS;
    int tJMrkAfFKX;
    int ASYFwZk;
    int fS5fdC1G4I3H;
    int uIpjmhNS6;
    long  int Tkqr5JuKGx [100001];
    uIpjmhNS6 = 0;
    scanf ("%d", &ASYFwZk);
    {
        tJMrkAfFKX = 1;
        for (; tJMrkAfFKX <= ASYFwZk;) {
            scanf ("%d", &Tkqr5JuKGx[tJMrkAfFKX - 1]);
            tJMrkAfFKX++;
        }
    }
    scanf ("%d", &fS5fdC1G4I3H);
    {
        LRGLinS = 0;
        while (LRGLinS < ASYFwZk) {
            if (Tkqr5JuKGx[LRGLinS] == fS5fdC1G4I3H) {
                for (int aX01TxLrdVt = LRGLinS;
                aX01TxLrdVt < ASYFwZk; aX01TxLrdVt++) {
                    Tkqr5JuKGx[aX01TxLrdVt] = Tkqr5JuKGx[aX01TxLrdVt + 1];
                }
                uIpjmhNS6++;
            }
            if (Tkqr5JuKGx[LRGLinS] == fS5fdC1G4I3H)
                LRGLinS--;
            LRGLinS++;
        }
    }
    {
        int J0GQoiYzBF2;
        J0GQoiYzBF2 = 0;
        for (; J0GQoiYzBF2 < ASYFwZk -uIpjmhNS6 - 1;) {
            printf ("%d ", Tkqr5JuKGx[J0GQoiYzBF2]);
            J0GQoiYzBF2++;
        }
    }
    printf ("%d", Tkqr5JuKGx[ASYFwZk -uIpjmhNS6 - 1]);
    return 0;
}

