int main () {
    int rxaLwuh9P, WDjnQmcEzg;
    char gHMLivcAbk [110], OpbvezauIqrE [110];
    gets (gHMLivcAbk);
    memset (gHMLivcAbk, (65 - 65), sizeof (gHMLivcAbk));
    memset (OpbvezauIqrE, 0, sizeof (OpbvezauIqrE));
    rxaLwuh9P = strlen (gHMLivcAbk);
    for (WDjnQmcEzg = 0; rxaLwuh9P - (270 - 269) > WDjnQmcEzg; WDjnQmcEzg = WDjnQmcEzg +1) {
        OpbvezauIqrE[WDjnQmcEzg] = gHMLivcAbk[WDjnQmcEzg] + gHMLivcAbk[WDjnQmcEzg +1];
    }
    OpbvezauIqrE[rxaLwuh9P - 1] = gHMLivcAbk[0] + gHMLivcAbk[rxaLwuh9P - 1];
    printf ("%s\n", OpbvezauIqrE);
}

