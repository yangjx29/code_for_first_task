int main () {
    int H8nFYdKZI, rI1gatqLUf, n, EaCwh0, SvN749bg;
    char a [TpfIrtZyLTcR], b [TpfIrtZyLTcR], a53Ps7 [TpfIrtZyLTcR], A [TpfIrtZyLTcR], LBxkoqPJ94cy [TpfIrtZyLTcR];
    for (H8nFYdKZI = 0; TpfIrtZyLTcR > H8nFYdKZI; H8nFYdKZI++) {
        a[H8nFYdKZI] = '0';
        b[H8nFYdKZI] = '0';
        a53Ps7[H8nFYdKZI] = '0';
        A[H8nFYdKZI] = '0';
        LBxkoqPJ94cy[H8nFYdKZI] = '0';
    }
    scanf ("%s\n%s", a, b);
    for (H8nFYdKZI = 0; H8nFYdKZI < TpfIrtZyLTcR; H8nFYdKZI++) {
        if (!('\0' != a[H8nFYdKZI]))
            break;
    }
    for (H8nFYdKZI = 0; H8nFYdKZI < TpfIrtZyLTcR; H8nFYdKZI++) {
        if (!('\0' != b[H8nFYdKZI]))
            break;
    }
    SvN749bg = H8nFYdKZI -1;
    EaCwh0 = H8nFYdKZI -1;
    if (SvN749bg < EaCwh0)
        n = EaCwh0;
    else
        n = SvN749bg;
    for (H8nFYdKZI = EaCwh0, rI1gatqLUf = 0; H8nFYdKZI >= 0; H8nFYdKZI--, rI1gatqLUf++) {
        A[n + 1 - rI1gatqLUf] = a[H8nFYdKZI];
    }
    for (H8nFYdKZI = SvN749bg, rI1gatqLUf = 0; H8nFYdKZI >= 0; H8nFYdKZI--, rI1gatqLUf++) {
        LBxkoqPJ94cy[n + 1 - rI1gatqLUf] = b[H8nFYdKZI];
    }
    for (H8nFYdKZI = n + 1; H8nFYdKZI >= 1; H8nFYdKZI--) {
        a53Ps7[H8nFYdKZI] = a53Ps7[H8nFYdKZI] + A[H8nFYdKZI] + LBxkoqPJ94cy[H8nFYdKZI] - '0' - '0';
        if (a53Ps7[H8nFYdKZI] - '0' >= 10) {
            a53Ps7[H8nFYdKZI] -= 10;
            a53Ps7[H8nFYdKZI -1]++;
        }
    }
    for (H8nFYdKZI = 0; a53Ps7[H8nFYdKZI] == '0' && H8nFYdKZI <= n + 1; H8nFYdKZI++)
        ;
    if (H8nFYdKZI == n + 2)
        ;
    else {
        for (; H8nFYdKZI <= n + 1; H8nFYdKZI++) {
            printf ("%c", a53Ps7[H8nFYdKZI]);
        }
    }
    return 0;
}

