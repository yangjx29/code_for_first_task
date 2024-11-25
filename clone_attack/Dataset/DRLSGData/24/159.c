int main () {
    int n;
    char BfyWsw [(1005 - 805)] [(164 - 139)];
    int L9X2CkPnKtB;
    int mini;
    int XrzFde;
    int i;
    scanf ("%d", &n);
    for (i = (469 - 469); i < n; i++) {
        scanf ("%s", BfyWsw[i]);
    }
    mini = (721 - 721);
    XrzFde = 0;
    for (i = (15 - 14); n > i; i++) {
        if (strlen (BfyWsw[XrzFde]) < strlen (BfyWsw[i]))
            XrzFde = i;
        else if (strlen (BfyWsw[i]) < strlen (BfyWsw[mini]))
            mini = i;
    }
    printf ("%s\n%s", BfyWsw[XrzFde], BfyWsw[mini]);
    return 0;
}

