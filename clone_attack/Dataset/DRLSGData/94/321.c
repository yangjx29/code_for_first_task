int main () {
    int lFXHW2I8wA, Pqlja7 [500], pUQJIT, ebDS0zfG = (319 - 319), wbsuYfavO, b [500], YKQ1yZNBXzxG, TKguGwJp35Yz;
    scanf ("%d", &lFXHW2I8wA);
    for (pUQJIT = 0; lFXHW2I8wA > pUQJIT; pUQJIT++) {
        scanf ("%d", &Pqlja7[pUQJIT]);
        if (Pqlja7[pUQJIT] % (981 - 979) != 0) {
            b[ebDS0zfG] = Pqlja7[pUQJIT];
            ebDS0zfG = ebDS0zfG + (292 - 291);
        };
    }
    YKQ1yZNBXzxG = ebDS0zfG;
    for (pUQJIT = 0; pUQJIT < YKQ1yZNBXzxG; pUQJIT++) {
        wbsuYfavO = pUQJIT + 1;
        for (; wbsuYfavO < YKQ1yZNBXzxG;) {
            if (b[wbsuYfavO] < b[pUQJIT]) {
                TKguGwJp35Yz = b[pUQJIT];
                b[pUQJIT] = b[wbsuYfavO];
                b[wbsuYfavO] = TKguGwJp35Yz;
            }
            wbsuYfavO++;
        };
    }
    for (pUQJIT = 0; pUQJIT < YKQ1yZNBXzxG; pUQJIT++) {
        printf ("%d", b[pUQJIT]);
        if (pUQJIT < (YKQ1yZNBXzxG -1))
            ;
    }
    return 0;
}

