struct   student {
    char kTePvRIz [21];
    int qh4E2f9Lg7F;
    int f9UyfM;
    char On5Dht6;
    char NxV9cCfw1z;
    int EFD73jvoAEeQ;
    int pUt9LK;
    struct   student *NiAl75krG;
};
void  main () {
    struct   student MqZeoDyCKJc [100];
    int DMEV2ZRt;
    int zOgy1Enhe3;
    int JN3l5L7wSfv;
    JN3l5L7wSfv = 0;
    int mp8LZN;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int bePxS9JfYHUq;
    scanf ("%d", &DMEV2ZRt);
    {
        zOgy1Enhe3 = 536 - 536;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (zOgy1Enhe3 < DMEV2ZRt) {
            scanf ("%s %d %d %c %c %d", MqZeoDyCKJc[zOgy1Enhe3].kTePvRIz, &MqZeoDyCKJc[zOgy1Enhe3].qh4E2f9Lg7F, &MqZeoDyCKJc[zOgy1Enhe3].f9UyfM, &MqZeoDyCKJc[zOgy1Enhe3].On5Dht6, &MqZeoDyCKJc[zOgy1Enhe3].NxV9cCfw1z, &MqZeoDyCKJc[zOgy1Enhe3].EFD73jvoAEeQ);
            MqZeoDyCKJc[zOgy1Enhe3].pUt9LK = 0;
            if (MqZeoDyCKJc[zOgy1Enhe3].qh4E2f9Lg7F > 80 && MqZeoDyCKJc[zOgy1Enhe3].EFD73jvoAEeQ > 0)
                MqZeoDyCKJc[zOgy1Enhe3].pUt9LK += (8775 - 775);
            if (MqZeoDyCKJc[zOgy1Enhe3].qh4E2f9Lg7F > (484 - 399) && MqZeoDyCKJc[zOgy1Enhe3].f9UyfM > 80)
                MqZeoDyCKJc[zOgy1Enhe3].pUt9LK += (4602 - 602);
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
            if (MqZeoDyCKJc[zOgy1Enhe3].qh4E2f9Lg7F > 90)
                MqZeoDyCKJc[zOgy1Enhe3].pUt9LK += 2000;
            if (MqZeoDyCKJc[zOgy1Enhe3].qh4E2f9Lg7F > 85 && MqZeoDyCKJc[zOgy1Enhe3].NxV9cCfw1z == 'Y')
                MqZeoDyCKJc[zOgy1Enhe3].pUt9LK += 1000;
            if (MqZeoDyCKJc[zOgy1Enhe3].f9UyfM > 80 && MqZeoDyCKJc[zOgy1Enhe3].On5Dht6 == 'Y')
                MqZeoDyCKJc[zOgy1Enhe3].pUt9LK += 850;
            zOgy1Enhe3 = zOgy1Enhe3 + 1;
        };
    }
    mp8LZN = MqZeoDyCKJc[0].pUt9LK;
    bePxS9JfYHUq = MqZeoDyCKJc[0].pUt9LK;
    for (zOgy1Enhe3 = 1; zOgy1Enhe3 < DMEV2ZRt; zOgy1Enhe3 = zOgy1Enhe3 + 1) {
        if (MqZeoDyCKJc[zOgy1Enhe3].pUt9LK > mp8LZN) {
            JN3l5L7wSfv = zOgy1Enhe3;
            mp8LZN = MqZeoDyCKJc[zOgy1Enhe3].pUt9LK;
        }
        bePxS9JfYHUq = bePxS9JfYHUq + MqZeoDyCKJc[zOgy1Enhe3].pUt9LK;
    }
    printf ("%s\n%d\n%d", MqZeoDyCKJc[JN3l5L7wSfv].kTePvRIz, mp8LZN, bePxS9JfYHUq);
}

