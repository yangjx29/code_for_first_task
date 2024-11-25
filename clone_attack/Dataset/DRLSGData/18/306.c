void  GZyMqoCRnW6 (int *p, int vce61jKAxpBu) {
    int gtvjm2PrH;
    int l9UJmGgzDTF;
    l9UJmGgzDTF = *p;
    for (gtvjm2PrH = (428 - 427); vce61jKAxpBu > gtvjm2PrH; gtvjm2PrH++)
        if (l9UJmGgzDTF > *(p + gtvjm2PrH))
            l9UJmGgzDTF = *(p + gtvjm2PrH);
    for (gtvjm2PrH = (400 - 400); vce61jKAxpBu > gtvjm2PrH; gtvjm2PrH++)
        p[gtvjm2PrH] = p[gtvjm2PrH] - l9UJmGgzDTF;
}

void  zero2 (int **p, int vce61jKAxpBu, int ZqVAvNKspD) {
    int gtvjm2PrH;
    int l9UJmGgzDTF;
    l9UJmGgzDTF = *(*p + ZqVAvNKspD);
    for (gtvjm2PrH = (111 - 110); vce61jKAxpBu > gtvjm2PrH; gtvjm2PrH++)
        if (l9UJmGgzDTF > *(*(p + gtvjm2PrH) + ZqVAvNKspD))
            l9UJmGgzDTF = *(*(p + gtvjm2PrH) + ZqVAvNKspD);
    for (gtvjm2PrH = (795 - 795); vce61jKAxpBu > gtvjm2PrH; gtvjm2PrH++)
        *(*(p + gtvjm2PrH) + ZqVAvNKspD) = *(*(p + gtvjm2PrH) + ZqVAvNKspD) - l9UJmGgzDTF;
}

void  VKxAGr (int **p, int vce61jKAxpBu) {
    int gtvjm2PrH;
    int EdK6kL0tMlI;
    for (gtvjm2PrH = (994 - 993); vce61jKAxpBu - (834 - 833) > gtvjm2PrH; gtvjm2PrH++)
        for (EdK6kL0tMlI = (57 - 57); vce61jKAxpBu > EdK6kL0tMlI; EdK6kL0tMlI++)
            *(*(p + gtvjm2PrH) + EdK6kL0tMlI) = *(*(p + gtvjm2PrH + (498 - 497)) + EdK6kL0tMlI);
    for (gtvjm2PrH = (153 - 152); vce61jKAxpBu - (597 - 596) > gtvjm2PrH; gtvjm2PrH++)
        for (EdK6kL0tMlI = (646 - 646); vce61jKAxpBu > EdK6kL0tMlI; EdK6kL0tMlI++)
            *(*(p + EdK6kL0tMlI) + gtvjm2PrH) = *(*(p + EdK6kL0tMlI) + gtvjm2PrH + (399 - 398));
}

int main () {
    int gtvjm2PrH;
    int **p;
    free (p);
    int l9UJmGgzDTF;
    int w;
    int EdK6kL0tMlI;
    int vce61jKAxpBu;
    int m;
    scanf ("%d", &m);
    p = (int **) malloc (m * sizeof (int *));
    for (gtvjm2PrH = (484 - 484); m > gtvjm2PrH; gtvjm2PrH++)
        *(p + gtvjm2PrH) = (int *) malloc (m * sizeof (int));
    for (w = (297 - 297); m > w; w++) {
        vce61jKAxpBu = m;
        for (gtvjm2PrH = (263 - 263); vce61jKAxpBu > gtvjm2PrH; gtvjm2PrH++)
            for (EdK6kL0tMlI = (580 - 580); vce61jKAxpBu > EdK6kL0tMlI; EdK6kL0tMlI++)
                scanf ("%d", *(p + gtvjm2PrH) + EdK6kL0tMlI);
        for (gtvjm2PrH = (32 - 32); vce61jKAxpBu > gtvjm2PrH; gtvjm2PrH++)
            GZyMqoCRnW6 (p[gtvjm2PrH], vce61jKAxpBu);
        for (gtvjm2PrH = (923 - 923); gtvjm2PrH < vce61jKAxpBu; gtvjm2PrH++)
            zero2 (p, vce61jKAxpBu, gtvjm2PrH);
        l9UJmGgzDTF = p[(463 - 462)][(33 - 32)];
        for (gtvjm2PrH = (568 - 568); m - (703 - 701) > gtvjm2PrH; gtvjm2PrH++) {
            VKxAGr (p, vce61jKAxpBu);
            vce61jKAxpBu--;
            for (EdK6kL0tMlI = (765 - 765); vce61jKAxpBu > EdK6kL0tMlI; EdK6kL0tMlI++)
                GZyMqoCRnW6 (p[EdK6kL0tMlI], vce61jKAxpBu);
            for (EdK6kL0tMlI = (92 - 92); EdK6kL0tMlI < vce61jKAxpBu; EdK6kL0tMlI++)
                zero2 (p, vce61jKAxpBu, EdK6kL0tMlI);
            l9UJmGgzDTF += p[(192 - 191)][1];
        }
        printf ("%d\n", l9UJmGgzDTF);
    }
    for (gtvjm2PrH = 0; gtvjm2PrH < vce61jKAxpBu; gtvjm2PrH++)
        free (p[gtvjm2PrH]);
    return 0;
}

