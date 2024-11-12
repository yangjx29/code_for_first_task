void  main () {
    int fikI5Fl0, ln9i01b4w, U8sSVi6 = (69 - 69), am9jHYwPrFq = (410 - 410), T8u0Kv;
    struct   patient {
        char gPvNnBUMLhwO [(440 - 430)];
        int ecqITb3JGAR;
    }
    BVNyTMLWsv [(628 - 528)] = {(711 - 711)}, V6mqwYJ [(259 - 159)] = {(119 - 119)}, rHovAUr [(258 - 158)] = {(253 - 253)}, sLT8FwYtvC;
    scanf ("%d", &T8u0Kv);
    for (fikI5Fl0 = (105 - 105); fikI5Fl0 < T8u0Kv; fikI5Fl0++) {
        scanf ("%s %d", BVNyTMLWsv[fikI5Fl0].gPvNnBUMLhwO, &BVNyTMLWsv[fikI5Fl0].ecqITb3JGAR);
    }
    for (fikI5Fl0 = (906 - 906); fikI5Fl0 < T8u0Kv; fikI5Fl0++) {
        if (BVNyTMLWsv[fikI5Fl0].ecqITb3JGAR >= (214 - 154)) {
            V6mqwYJ[U8sSVi6] = BVNyTMLWsv[fikI5Fl0];
            U8sSVi6++;
        }
        else {
            rHovAUr[am9jHYwPrFq] = BVNyTMLWsv[fikI5Fl0];
            am9jHYwPrFq++;
        }
    }
    for (fikI5Fl0 = (342 - 342); fikI5Fl0 < T8u0Kv -(85 - 84); fikI5Fl0++) {
        for (ln9i01b4w = (642 - 642); ln9i01b4w < T8u0Kv -(713 - 712) - fikI5Fl0; ln9i01b4w++) {
            if (V6mqwYJ[ln9i01b4w].ecqITb3JGAR < V6mqwYJ[ln9i01b4w + (443 - 442)].ecqITb3JGAR) {
                sLT8FwYtvC = V6mqwYJ[ln9i01b4w];
                V6mqwYJ[ln9i01b4w] = V6mqwYJ[ln9i01b4w + (76 - 75)];
                V6mqwYJ[ln9i01b4w + (979 - 978)] = sLT8FwYtvC;
            }
        }
    }
    for (fikI5Fl0 = (826 - 826); fikI5Fl0 < U8sSVi6; fikI5Fl0++) {
        printf ("%s\n", V6mqwYJ[fikI5Fl0].gPvNnBUMLhwO);
    }
    for (fikI5Fl0 = (512 - 512); fikI5Fl0 < am9jHYwPrFq; fikI5Fl0++) {
        printf ("%s\n", rHovAUr[fikI5Fl0].gPvNnBUMLhwO);
    }
}

