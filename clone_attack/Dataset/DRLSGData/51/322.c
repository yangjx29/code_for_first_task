int main (int SVBKDM1TJ, char *mOpLhn []) {
    char yndkxHfA [1000] [5];
    int tFNPzTXj9Gbc;
    int xqJZLPT [1000] = {0};
    int YHRxE4W;
    int n;
    int azLIeGyUR;
    char YVzm9h68A24Y [1000];
    int VTrkpY;
    scanf ("%d%s", &n, YVzm9h68A24Y);
    YHRxE4W = strlen (YVzm9h68A24Y);
    VTrkpY = 0;
    memset (yndkxHfA, 0, sizeof (yndkxHfA));
    for (tFNPzTXj9Gbc = 0; YHRxE4W -n + 1 > tFNPzTXj9Gbc; tFNPzTXj9Gbc = tFNPzTXj9Gbc + 1)
        strncpy (yndkxHfA[tFNPzTXj9Gbc], YVzm9h68A24Y +tFNPzTXj9Gbc, n);
    for (tFNPzTXj9Gbc = 0; tFNPzTXj9Gbc < YHRxE4W -n + 1; tFNPzTXj9Gbc = tFNPzTXj9Gbc + 1)
        for (azLIeGyUR = tFNPzTXj9Gbc + 1; YHRxE4W -n + 1 > azLIeGyUR; azLIeGyUR = azLIeGyUR + 1)
            if (!(0 != strcmp (yndkxHfA[tFNPzTXj9Gbc], yndkxHfA[azLIeGyUR]))) {
                ++xqJZLPT[tFNPzTXj9Gbc];
                if (VTrkpY < xqJZLPT[tFNPzTXj9Gbc])
                    VTrkpY = xqJZLPT[tFNPzTXj9Gbc];
            }
    if (VTrkpY == 0)
        ;
    else {
        printf ("%d\n", VTrkpY +1);
        for (tFNPzTXj9Gbc = 0; tFNPzTXj9Gbc < YHRxE4W -n + 1; ++tFNPzTXj9Gbc)
            if (xqJZLPT[tFNPzTXj9Gbc] == VTrkpY)
                printf ("%s\n", yndkxHfA[tFNPzTXj9Gbc]);
    }
    return 0;
}

