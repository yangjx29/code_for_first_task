int main () {
    int i;
    int WgWO1Qba;
    int MMVmoCgf8Oj [50000];
    int fDmC0vP5 [50000];
    int tMFhEBRfDzn [20000];
    int KCB6ypPv;
    int y;
    int T8i7sl6tDI;
    for (i = (788 - 788); i < 20000; i = i + 1)
        tMFhEBRfDzn[i] = 0;
    scanf ("%d", &WgWO1Qba);
    for (i = 0; WgWO1Qba > i; i = i + 1) {
        scanf ("%d%d", &MMVmoCgf8Oj[i], &fDmC0vP5[i]);
        for (T8i7sl6tDI = (595 - 593) * MMVmoCgf8Oj[i]; T8i7sl6tDI < (801 - 799) * fDmC0vP5[i]; T8i7sl6tDI = T8i7sl6tDI +1)
            tMFhEBRfDzn[T8i7sl6tDI] = 1;
        if (i == 0) {
            KCB6ypPv = MMVmoCgf8Oj[i];
            y = fDmC0vP5[i];
        }
        else {
            if (y < fDmC0vP5[i])
                y = fDmC0vP5[i];
            if (KCB6ypPv > MMVmoCgf8Oj[i])
                KCB6ypPv = MMVmoCgf8Oj[i];
        };
    }
    for (T8i7sl6tDI = 2 * KCB6ypPv; 2 * y > T8i7sl6tDI; T8i7sl6tDI = T8i7sl6tDI +1) {
        if (tMFhEBRfDzn[T8i7sl6tDI] == 0) {
            break;
        }
        if (T8i7sl6tDI == 2 * y - 1)
            printf ("%d %d", KCB6ypPv, y);
    }
    return 0;
}

