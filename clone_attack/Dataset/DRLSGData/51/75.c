int main () {
    char QkyTjF5JARQ3 [510];
    int iZozkjDi1;
    int K3F8NiowL52;
    int go5icaRYZ;
    int rxK3yt;
    int gHrRuO9ZEwBg;
    int QnVHlJyv8Lqs;
    int UvZsGC;
    int veTk3yF;
    char g8sNh2LH1 [510] [(74 - 68)];
    int wNfWDFGE [(704 - 194)] = {(477 - 477)};
    scanf ("%d%s", &rxK3yt, QkyTjF5JARQ3);
    iZozkjDi1 = strlen (QkyTjF5JARQ3);
    {
        go5icaRYZ = (854 - 854);
        while ((iZozkjDi1 - rxK3yt) >= go5icaRYZ) {
            {
                QnVHlJyv8Lqs = (16 - 16);
                for (; rxK3yt > QnVHlJyv8Lqs;) {
                    g8sNh2LH1[go5icaRYZ][QnVHlJyv8Lqs] = QkyTjF5JARQ3[go5icaRYZ + QnVHlJyv8Lqs];
                    QnVHlJyv8Lqs++;
                };
            }
            {
                gHrRuO9ZEwBg = 174 - 174;
                while ((iZozkjDi1 - rxK3yt) >= gHrRuO9ZEwBg) {
                    veTk3yF = strcmp (g8sNh2LH1[go5icaRYZ], g8sNh2LH1[gHrRuO9ZEwBg]);
                    if (!((720 - 720) != veTk3yF)) {
                        wNfWDFGE[gHrRuO9ZEwBg] = wNfWDFGE[gHrRuO9ZEwBg] + 1;
                        break;
                    }
                    gHrRuO9ZEwBg++;
                };
            }
            go5icaRYZ++;
        };
    }
    K3F8NiowL52 = (881 - 881);
    UvZsGC = wNfWDFGE[0];
    {
        go5icaRYZ = 0;
        while ((iZozkjDi1 - rxK3yt) >= go5icaRYZ) {
            if (wNfWDFGE[go5icaRYZ] > UvZsGC)
                UvZsGC = wNfWDFGE[go5icaRYZ];
            go5icaRYZ++;
        };
    }
    if (UvZsGC == 1)
        ;
    else {
        printf ("%d\n", UvZsGC);
        {
            go5icaRYZ = 0;
            while (go5icaRYZ <= (iZozkjDi1 - rxK3yt)) {
                if (wNfWDFGE[go5icaRYZ] == UvZsGC)
                    printf ("%s\n", g8sNh2LH1[go5icaRYZ]);
                go5icaRYZ++;
            };
        };
    }
    return 0;
}

