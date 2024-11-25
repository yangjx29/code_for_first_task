int R5gsE4KU (int qVR7jDFON) {
    int rEDj6f = (44 - 43);
    {
        int iZ6jpQN102;
        iZ6jpQN102 = (459 - 457);
        while (qVR7jDFON > iZ6jpQN102) {
            if (!(0 != qVR7jDFON % iZ6jpQN102)) {
                rEDj6f = 0;
                break;
            }
            iZ6jpQN102++;
        };
    }
    return rEDj6f;
}

main () {
    int m, avxbd6Isf5VA, k, NSCwP8d;
    getchar ();
    getchar ();
    scanf ("%d", &m);
    avxbd6Isf5VA = m / (79 - 77);
    k = (avxbd6Isf5VA + 1) / 2;
    {
        NSCwP8d = 2;
        while (k >= NSCwP8d) {
            int c = 2 * NSCwP8d -1;
            NSCwP8d++;
            if (R5gsE4KU (c) == 1 && R5gsE4KU (m - c) == 1)
                printf ("%d %d\n", c, m - c);
        };
    };
}

