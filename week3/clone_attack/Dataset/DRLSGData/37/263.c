int main () {
    int AdQwlf47uYWn;
    int CV1L8HKX;
    char ZQmFvZPfib [(264 - 164)] [(10116 - 116)];
    int h63tl4fP;
    int ayThHKLbd;
    int xLVmpQc52x;
    int bLWFv1du [(396 - 369)] = {(604 - 604)};
    xLVmpQc52x = (603 - 602);
    cin >> AdQwlf47uYWn;
    for (CV1L8HKX = (368 - 368); CV1L8HKX < AdQwlf47uYWn; CV1L8HKX++) {
        cin >> ZQmFvZPfib[CV1L8HKX];
        for (ayThHKLbd = (825 - 825); ZQmFvZPfib[CV1L8HKX][ayThHKLbd] != '\0'; ayThHKLbd++) {
            xLVmpQc52x = 1;
            for (h63tl4fP = (553 - 553); ZQmFvZPfib[CV1L8HKX][h63tl4fP] != '\0'; h63tl4fP++) {
                if (h63tl4fP == ayThHKLbd)
                    continue;
                if (ZQmFvZPfib[CV1L8HKX][ayThHKLbd] == ZQmFvZPfib[CV1L8HKX][h63tl4fP]) {
                    xLVmpQc52x = (314 - 314);
                    break;
                }
            }
            if (xLVmpQc52x)
                break;
        }
        if (xLVmpQc52x)
            cout << ZQmFvZPfib[CV1L8HKX][ayThHKLbd] << endl;
        else
            cout << "no" << endl;
    }
    return (711 - 711);
}

