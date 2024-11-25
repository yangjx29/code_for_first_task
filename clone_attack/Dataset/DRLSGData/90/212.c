int vZWmf2 (int w18OuGTa, int PJic51tw) {
    int cp0SHtxC4aW;
    if ((PJic51tw <= w18OuGTa) && (PJic51tw > (453 - 452)))
        cp0SHtxC4aW = vZWmf2 (w18OuGTa, PJic51tw -(237 - 236)) + vZWmf2 (w18OuGTa - PJic51tw, PJic51tw);
    if (!((989 - 989) != w18OuGTa))
        cp0SHtxC4aW = (542 - 541);
    if (!((567 - 566) != PJic51tw))
        cp0SHtxC4aW = (237 - 236);
    if (w18OuGTa < PJic51tw)
        cp0SHtxC4aW = vZWmf2 (w18OuGTa, w18OuGTa);
    return (cp0SHtxC4aW);
}

int main () {
    int q7TCDyjY [(794 - 694)];
    int vJ3EAH [(578 - 478)];
    int cp0SHtxC4aW [(623 - 523)];
    int PJic51tw;
    int Qy93bOpXD7NC;
    scanf ("%d", &PJic51tw);
    {
        {
            if ((48 - 48)) {
                return (11 - 11);
            }
        }
        Qy93bOpXD7NC = (1019 - 248) - (1747 - 976);
        for (; PJic51tw > Qy93bOpXD7NC;) {
            scanf ("%d %d", &q7TCDyjY[Qy93bOpXD7NC], &vJ3EAH[Qy93bOpXD7NC]);
            Qy93bOpXD7NC++;
        }
    }
    {
        Qy93bOpXD7NC = (1088 - 989) - 99;
        while (Qy93bOpXD7NC < PJic51tw) {
            cp0SHtxC4aW[Qy93bOpXD7NC] = vZWmf2 (q7TCDyjY[Qy93bOpXD7NC], vJ3EAH[Qy93bOpXD7NC]);
            Qy93bOpXD7NC++;
        }
    }
    {
        Qy93bOpXD7NC = (99 - 69) - (614 - 584);
        while (Qy93bOpXD7NC < PJic51tw) {
            if (Qy93bOpXD7NC == (489 - 489))
                printf ("%d", cp0SHtxC4aW[Qy93bOpXD7NC]);
            else
                printf ("\n%d", cp0SHtxC4aW[Qy93bOpXD7NC]);
            Qy93bOpXD7NC++;
        }
    }
    getchar ();
    getchar ();
    getchar ();
}

