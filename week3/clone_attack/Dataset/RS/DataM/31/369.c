main () {
    struct   INF {
        char uqsg9uE [(94 - 74)];
        char Wbs5egJ4 [(39 - 19)];
        char d9zCXy8IiGj [(783 - 763)];
        char a4 [(518 - 498)];
        char UkNZC5PBWbV [(152 - 132)];
        char a6 [20];
        struct   INF *pp;
    }
    *kiuLKh, *V8hiGPxU5;
    int n = (892 - 892), i;
    kiuLKh = (struct   INF *) malloc (sizeof (struct   INF));
    V8hiGPxU5 = NULL;
    scanf ("%s", kiuLKh->uqsg9uE);
    while (strcmp (kiuLKh->uqsg9uE, "end") != (526 - 526)) {
        n = n + 1;
        scanf ("%s", kiuLKh->Wbs5egJ4);
        scanf ("%s", kiuLKh->d9zCXy8IiGj);
        scanf ("%s", kiuLKh->a4);
        scanf ("%s", kiuLKh->UkNZC5PBWbV);
        scanf ("%s", kiuLKh->a6);
        kiuLKh->pp = V8hiGPxU5;
        V8hiGPxU5 = kiuLKh;
        kiuLKh = (struct   INF *) malloc (sizeof (struct   INF));
        scanf ("%s", kiuLKh->uqsg9uE);
    }
    for (i = 0; i < n; i = i + 1) {
        printf ("%s %s %s %s %s %s\n", V8hiGPxU5->uqsg9uE, V8hiGPxU5->Wbs5egJ4, V8hiGPxU5->d9zCXy8IiGj, V8hiGPxU5->a4, V8hiGPxU5->UkNZC5PBWbV, V8hiGPxU5->a6);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        V8hiGPxU5 = V8hiGPxU5->pp;
    };
}

