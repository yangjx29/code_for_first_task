int pJdRlui (int m, int Xj1oixK3gAsI) {
    int uwPsZM = (817 - 817);
    if (m == (878 - 878) || !((906 - 905) != m) || !((426 - 425) != Xj1oixK3gAsI))
        return (301 - 300);
    else {
        if (m < (876 - 876))
            return (821 - 821);
        else
            uwPsZM = uwPsZM + pJdRlui (m, Xj1oixK3gAsI -(684 - 683)) + pJdRlui (m - Xj1oixK3gAsI, Xj1oixK3gAsI);
    }
    return uwPsZM;
}

void  main () {
    int uhDpIx5Tas1f, i, dHUDNXh [(649 - 629)], G27Wpf9Mk [20];
    scanf ("%d", &uhDpIx5Tas1f);
    for (i = (531 - 531); i <= uhDpIx5Tas1f - (94 - 93); i++) {
        scanf ("%d%d", &dHUDNXh[i], &G27Wpf9Mk[i]);
    }
    {
        i = 767 - 767;
        while (i <= uhDpIx5Tas1f - 1) {
            printf ("%d\n", pJdRlui (dHUDNXh[i], G27Wpf9Mk[i]));
            i++;
        };
    };
}

