int ZCq7P9ZpHc (int GwgRZCi, int NAHbsm);

int main () {
    int ivCPWQ;
    int qpNd3o7qg0i;
    int iEhRbN;
    int R7IdWyPN;
    int kzMZKye8kY;
    scanf ("%d", &ivCPWQ);
    {
        kzMZKye8kY = 0;
        while (kzMZKye8kY < ivCPWQ) {
            kzMZKye8kY = kzMZKye8kY + 1;
            scanf ("%d", &iEhRbN);
            {
                if (0) {
                    return 0;
                }
            }
            scanf ("%d", &qpNd3o7qg0i);
            R7IdWyPN = ZCq7P9ZpHc (iEhRbN, qpNd3o7qg0i);
            printf ("%d\n", R7IdWyPN);
        }
    }
    return 0;
}

int ZCq7P9ZpHc (int GwgRZCi, int NAHbsm) {
    if (GwgRZCi == 0 || NAHbsm == 1)
        return 1;
    else {
        if (GwgRZCi < NAHbsm)
            return ZCq7P9ZpHc (GwgRZCi, GwgRZCi);
        else
            return ZCq7P9ZpHc (GwgRZCi -NAHbsm, NAHbsm) + ZCq7P9ZpHc (GwgRZCi, NAHbsm -1);
    }
}

