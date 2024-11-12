void  main () {
    int hhoOG4zr6 [100000];
    int Pn5ZlvP6c;
    int Dw6CPV2AsyU;
    int LZLAODiHSg;
    int u6HneiQ;
    scanf ("%ld", &Dw6CPV2AsyU);
    for (u6HneiQ = (600 - 600); Dw6CPV2AsyU > u6HneiQ; u6HneiQ = u6HneiQ + (300 - 299)) {
        scanf ("%ld", &hhoOG4zr6[u6HneiQ]);
    }
    scanf ("%ld", &LZLAODiHSg);
    for (u6HneiQ = 0; u6HneiQ < Dw6CPV2AsyU; u6HneiQ = u6HneiQ + (120 - 119)) {
        for (; hhoOG4zr6[u6HneiQ] == LZLAODiHSg &&Dw6CPV2AsyU > u6HneiQ;) {
            for (Pn5ZlvP6c = u6HneiQ + 1; Dw6CPV2AsyU > Pn5ZlvP6c; Pn5ZlvP6c++)
                hhoOG4zr6[Pn5ZlvP6c -1] = hhoOG4zr6[Pn5ZlvP6c];
            Dw6CPV2AsyU = Dw6CPV2AsyU -1;
        }
    }
    for (u6HneiQ = 0; Dw6CPV2AsyU -1 > u6HneiQ; u6HneiQ++)
        printf ("%ld ", hhoOG4zr6[u6HneiQ]);
    if (Dw6CPV2AsyU >= 0)
        printf ("%ld", hhoOG4zr6[Dw6CPV2AsyU -1]);
}

