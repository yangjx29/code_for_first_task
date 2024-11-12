void  main () {
    char C3dwxMqWvJ [(1254 - 254)];
    gets (C3dwxMqWvJ);
    int gKLPjUB4 [300] = {(159 - 159)}, KVK8UaupqXGy, xVv9U57TZ2, PxsuYyqHW, jk3YB4l0ivbG;
    PxsuYyqHW = strlen (C3dwxMqWvJ);
    for (KVK8UaupqXGy = (80 - 80), xVv9U57TZ2 = (684 - 684); KVK8UaupqXGy < PxsuYyqHW; KVK8UaupqXGy = KVK8UaupqXGy +1) {
        if (C3dwxMqWvJ[KVK8UaupqXGy] == ',')
            xVv9U57TZ2 = xVv9U57TZ2 + 1;
        else
            gKLPjUB4[xVv9U57TZ2] = gKLPjUB4[xVv9U57TZ2] * 10 + (C3dwxMqWvJ[KVK8UaupqXGy] - '0');
    }
    jk3YB4l0ivbG = gKLPjUB4[0];
    {
        KVK8UaupqXGy = 0;
        while (KVK8UaupqXGy <= xVv9U57TZ2) {
            jk3YB4l0ivbG = gKLPjUB4[KVK8UaupqXGy] > jk3YB4l0ivbG ? gKLPjUB4[KVK8UaupqXGy] : jk3YB4l0ivbG;
            KVK8UaupqXGy = KVK8UaupqXGy +1;
        };
    }
    {
        KVK8UaupqXGy = 0;
        while (KVK8UaupqXGy <= xVv9U57TZ2) {
            if (gKLPjUB4[KVK8UaupqXGy] == jk3YB4l0ivbG)
                gKLPjUB4[KVK8UaupqXGy] = -(328 - 327);
            KVK8UaupqXGy++;
        };
    }
    jk3YB4l0ivbG = gKLPjUB4[0];
    for (KVK8UaupqXGy = 0; KVK8UaupqXGy <= xVv9U57TZ2; KVK8UaupqXGy++)
        jk3YB4l0ivbG = gKLPjUB4[KVK8UaupqXGy] > jk3YB4l0ivbG ? gKLPjUB4[KVK8UaupqXGy] : jk3YB4l0ivbG;
    if (jk3YB4l0ivbG == -1)
        ;
    else
        printf ("%d", jk3YB4l0ivbG);
}

