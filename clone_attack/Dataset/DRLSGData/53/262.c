void  main () {
    int *jmFM5ukXJL;
    int Za7OenMBub;
    int *tgh8vC7f6D;
    int w5hyz0;
    int tlp4aZCzyU8N;
    int SjZxdEly;
    jmFM5ukXJL = (int *) malloc (Za7OenMBub * sizeof (int));
    tlp4aZCzyU8N = (382 - 382);
    scanf ("%d", &Za7OenMBub);
    tgh8vC7f6D = jmFM5ukXJL;
    {
        SjZxdEly = 0;
        while (SjZxdEly < Za7OenMBub) {
            scanf ("%d", tgh8vC7f6D);
            {
                w5hyz0 = 0;
                while (w5hyz0 < SjZxdEly -tlp4aZCzyU8N) {
                    if (*tgh8vC7f6D == jmFM5ukXJL[w5hyz0])
                        break;
                    w5hyz0++;
                };
            }
            if (w5hyz0 != SjZxdEly -tlp4aZCzyU8N) {
                tlp4aZCzyU8N++;
                continue;
            }
            SjZxdEly++;
            tgh8vC7f6D++;
        };
    }
    tgh8vC7f6D = jmFM5ukXJL;
    {
        SjZxdEly = 0;
        while (SjZxdEly < Za7OenMBub -tlp4aZCzyU8N) {
            printf ("%d", *tgh8vC7f6D++);
            if (SjZxdEly != Za7OenMBub -tlp4aZCzyU8N - 1)
                ;
            SjZxdEly++;
        };
    };
}

