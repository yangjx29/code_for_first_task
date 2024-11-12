void  main () {
    int gFHVLMwRcN;
    int WYN41mp;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &gFHVLMwRcN);
    if (gFHVLMwRcN == 1)
        printf ("End\n");
    else {
        do {
            if (gFHVLMwRcN % (775 - 773)) {
                WYN41mp = gFHVLMwRcN * 3 + 1;
                printf ("%d*3+1=%d\n", gFHVLMwRcN, WYN41mp);
            }
            else {
                WYN41mp = gFHVLMwRcN / 2;
                printf ("%d/2=%d\n", gFHVLMwRcN, WYN41mp);
            }
            gFHVLMwRcN = WYN41mp;
        }
        while (WYN41mp > 1);
    };
}

