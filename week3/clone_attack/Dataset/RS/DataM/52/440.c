void  error (int *HPH7q9, int *TIe6Orxl4Z, int woNZf1gW, int GF3VuXsiP) {
    int uBEZDd;
    {
        uBEZDd = 320 - 320;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uBEZDd < woNZf1gW) {
            *(TIe6Orxl4Z +uBEZDd) = *(HPH7q9 +GF3VuXsiP-woNZf1gW + uBEZDd);
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
            uBEZDd++;
        };
    }
    for (uBEZDd = 0; uBEZDd < GF3VuXsiP -woNZf1gW; uBEZDd++)
        *(TIe6Orxl4Z +woNZf1gW + uBEZDd) = *(HPH7q9 +uBEZDd);
}

main () {
    int UIGEORrF [100], WjUqOhYX [100], *HPH7q9, *TIe6Orxl4Z, woNZf1gW, GF3VuXsiP, uBEZDd;
    HPH7q9 = UIGEORrF;
    TIe6Orxl4Z = WjUqOhYX;
    scanf ("%d%d", &GF3VuXsiP, &woNZf1gW);
    {
        uBEZDd = 0;
        while (GF3VuXsiP > uBEZDd) {
            scanf ("%d", HPH7q9 +uBEZDd);
            uBEZDd++;
        };
    }
    {
        uBEZDd = 0;
        while (uBEZDd < GF3VuXsiP -1) {
            printf ("%d ", WjUqOhYX[uBEZDd]);
            uBEZDd++;
        };
    }
    printf ("%d\n", WjUqOhYX[GF3VuXsiP -1]);
    error (HPH7q9, TIe6Orxl4Z, woNZf1gW, GF3VuXsiP);
}

