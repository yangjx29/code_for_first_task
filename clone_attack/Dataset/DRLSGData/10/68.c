main () {
    int gjqKEVngdZ [30];
    int QfurEcbo, Aj2M9rG, lR5fJTytqZd, Ev8qiRW;
    int XbFeStGCJ [30];
    scanf ("%d\n", &QfurEcbo);
    {
        Aj2M9rG = 0;
        for (; Aj2M9rG < QfurEcbo -1;) {
            scanf ("%d ", &XbFeStGCJ[Aj2M9rG]);
            Aj2M9rG++;
        }
    }
    scanf ("%d", &XbFeStGCJ[Aj2M9rG]);
    gjqKEVngdZ[0] = 1;
    Ev8qiRW = 1;
    for (Aj2M9rG = 1; QfurEcbo > Aj2M9rG; Aj2M9rG = Aj2M9rG +1) {
        gjqKEVngdZ[Aj2M9rG] = 1;
        {
            lR5fJTytqZd = 0;
            for (; Aj2M9rG > lR5fJTytqZd;) {
                if (XbFeStGCJ[Aj2M9rG] <= XbFeStGCJ[lR5fJTytqZd] && gjqKEVngdZ[lR5fJTytqZd] + 1 > gjqKEVngdZ[Aj2M9rG]) {
                    gjqKEVngdZ[Aj2M9rG] = gjqKEVngdZ[lR5fJTytqZd] + 1;
                }
                lR5fJTytqZd = lR5fJTytqZd + 1;
            }
        }
        if (gjqKEVngdZ[Aj2M9rG] > Ev8qiRW) {
            Ev8qiRW = gjqKEVngdZ[Aj2M9rG];
        }
    }
    printf ("%d", Ev8qiRW);
}

