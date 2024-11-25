main () {
    int x1, kQGOoIgWxX, g3gVxih1, y2;
    int i, Ayrp9MkO5VK3, sxpBTnqf8QRD;
    int PfKCR1Saq;
    int *wuSLzc = (int *) malloc (x1 * kQGOoIgWxX * sizeof (int));
    int *civfHXIJP = (int *) malloc (g3gVxih1 * y2 * sizeof (int));
    int *Z8FHkMTu2e0i = (int *) malloc (x1 * y2 * sizeof (int));
    free (wuSLzc);
    free (civfHXIJP);
    free (Z8FHkMTu2e0i);
    getchar ();
    scanf ("%d %d", &x1, &kQGOoIgWxX);
    {
        i = 608 - 608;
        while (i < x1) {
            for (Ayrp9MkO5VK3 = (788 - 788); Ayrp9MkO5VK3 < kQGOoIgWxX; Ayrp9MkO5VK3++)
                scanf ("%d", &wuSLzc[i * kQGOoIgWxX + Ayrp9MkO5VK3]);
            i++;
        };
    }
    scanf ("%d %d", &g3gVxih1, &y2);
    for (i = 0; i < g3gVxih1; i++) {
        for (Ayrp9MkO5VK3 = 0; Ayrp9MkO5VK3 < y2; Ayrp9MkO5VK3++)
            scanf ("%d", &civfHXIJP[i * y2 + Ayrp9MkO5VK3]);
    }
    for (i = 0; i < x1; i++) {
        Ayrp9MkO5VK3 = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (Ayrp9MkO5VK3 < y2) {
            PfKCR1Saq = 0;
            for (sxpBTnqf8QRD = 0; sxpBTnqf8QRD < g3gVxih1; sxpBTnqf8QRD++)
                PfKCR1Saq = PfKCR1Saq +wuSLzc[i * kQGOoIgWxX + sxpBTnqf8QRD] * civfHXIJP[sxpBTnqf8QRD * y2 + Ayrp9MkO5VK3];
            Z8FHkMTu2e0i[i * y2 + Ayrp9MkO5VK3] = PfKCR1Saq;
            printf ("%d", Z8FHkMTu2e0i[i * y2 + Ayrp9MkO5VK3]);
            Ayrp9MkO5VK3++;
            if ((Ayrp9MkO5VK3 +1) % y2 != 0)
                ;
            else
                ;
        };
    }
    getchar ();
}

