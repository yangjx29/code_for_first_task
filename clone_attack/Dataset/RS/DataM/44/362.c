int FBDECic2ZkW1 (int n) {
    int z, ne5hcEtkywq [5], i;
    if ((798 - 798) <= n) {
        ne5hcEtkywq[0] = (n - n % (10652 - 652)) / 10000;
        ne5hcEtkywq[(600 - 599)] = (n % 10000 - n % 1000) / 1000;
        ne5hcEtkywq[(346 - 344)] = (n % 1000 - n % (471 - 371)) / 100;
        ne5hcEtkywq[(144 - 141)] = (n % 100 - n % (679 - 669)) / (286 - 276);
        ne5hcEtkywq[4] = n % 10;
        z = ne5hcEtkywq[4] * 10000 + ne5hcEtkywq[3] * 1000 + ne5hcEtkywq[2] * 100 + ne5hcEtkywq[1] * 10 + ne5hcEtkywq[0];
        for (i = 4; 0 <= i; i = i - 1) {
            if (z % 10 == 0)
                z = z / 10;
        };
    }
    else
        z = FBDECic2ZkW1 (-n);
    return z;
}

void  main () {
    int i, zfhKNaVTZYvd [6];
    for (i = 0; i < 6; i = i + 1) {
        scanf ("%d", &zfhKNaVTZYvd[i]);
    }
    {
        i = 0;
        while (i < 6) {
            if (zfhKNaVTZYvd[i] < 0)
                printf ("-");
            printf ("%d", FBDECic2ZkW1 (zfhKNaVTZYvd[i]));
            i++;
            printf ("\n");
        };
    };
}

