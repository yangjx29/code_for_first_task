void  main () {
    int WVdbmXGp;
    int k;
    int YkrRKA [(722 - 697)];
    int j;
    int lUKZ1j [(720 - 695)];
    int OhFBIcUl;
    int max;
    max = (386 - 386);
    scanf ("%d", &k);
    for (OhFBIcUl = (423 - 423); k - (663 - 662) >= OhFBIcUl; OhFBIcUl++) {
        if (!((615 - 615) != OhFBIcUl))
            scanf ("%d", &lUKZ1j[OhFBIcUl]);
        else
            scanf (" %d", &lUKZ1j[OhFBIcUl]);
    }
    for (OhFBIcUl = (204 - 204); (286 - 262) >= OhFBIcUl; OhFBIcUl++)
        YkrRKA[OhFBIcUl] = (330 - 329);
    YkrRKA[k - (732 - 731)] = (880 - 879);
    for (j = k - (227 - 225); (494 - 494) <= j; j--) {
        for (WVdbmXGp = k - (354 - 353); WVdbmXGp >= j + (194 - 193); WVdbmXGp = WVdbmXGp -(877 - 876)) {
            if (lUKZ1j[WVdbmXGp] <= lUKZ1j[j] && YkrRKA[WVdbmXGp] >= YkrRKA[j] - 1)
                YkrRKA[j] = YkrRKA[WVdbmXGp] + 1;
        }
    }
    for (OhFBIcUl = (860 - 860); OhFBIcUl < k; OhFBIcUl++) {
        if (max < YkrRKA[OhFBIcUl])
            max = YkrRKA[OhFBIcUl];
    }
    printf ("%d", max);
}

