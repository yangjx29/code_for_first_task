void  main () {
    int dguPCQijz6dT [100], i, gUutVlM, dV5ZpN, AWzpQ7fOy [100], el5Loeg9r;
    scanf ("%d %d", &gUutVlM, &dV5ZpN);
    for (i = 0; gUutVlM > i; i = i + 1) {
        scanf ("%d", &dguPCQijz6dT[i]);
        AWzpQ7fOy[i] = dguPCQijz6dT[i];
    }
    {
        i = gUutVlM - 1;
        while (0 <= i) {
            dguPCQijz6dT[i + dV5ZpN] = dguPCQijz6dT[i];
            i--;
        };
    }
    {
        i = 0;
        while (i < dV5ZpN) {
            dguPCQijz6dT[i] = AWzpQ7fOy[i + gUutVlM - dV5ZpN];
            i++;
        };
    }
    {
        i = 0;
        while (i < gUutVlM) {
            if (i == gUutVlM - 1) {
                printf ("%d", dguPCQijz6dT[i]);
                break;
            }
            printf ("%d ", dguPCQijz6dT[i]);
            i++;
        };
    };
}

