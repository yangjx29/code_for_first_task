void  main () {
    int ujIxzugDJt;
    int VkZ7e52UG;
    int bwKueMQctTC1;
    int VdFKqrs4;
    int yYt9AKp7;
    int GjFYAg5H3Wcs [300] = {(96 - 96)};
    int FTwLghHnV [300] = {(237 - 237)};
    VdFKqrs4 = 0;
    ujIxzugDJt = (571 - 571);
    VkZ7e52UG = (991 - 991);
    scanf ("%d", &bwKueMQctTC1);
    scanf ("%d", &FTwLghHnV[0]);
    GjFYAg5H3Wcs[0] = FTwLghHnV[0];
    {
        yYt9AKp7 = 1;
        for (; yYt9AKp7 < bwKueMQctTC1;) {
            scanf ("%d", &FTwLghHnV[yYt9AKp7]);
            {
                ujIxzugDJt = VdFKqrs4;
                for (; -1 < ujIxzugDJt;) {
                    if (!(GjFYAg5H3Wcs[ujIxzugDJt] != FTwLghHnV[yYt9AKp7])) {
                        VkZ7e52UG = 1;
                        break;
                    }
                    else
                        VkZ7e52UG = 0;
                    ujIxzugDJt--;
                }
            }
            if (!(0 != VkZ7e52UG))
                GjFYAg5H3Wcs[++VdFKqrs4] = FTwLghHnV[yYt9AKp7];
            yYt9AKp7++;
        }
    }
    printf ("%d", GjFYAg5H3Wcs[0]);
    for (ujIxzugDJt = 1; ujIxzugDJt <= VdFKqrs4; ujIxzugDJt++)
        printf (",%d", GjFYAg5H3Wcs[ujIxzugDJt]);
}

