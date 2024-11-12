struct   stu {
    int uK0UP2TSrn;
    int kgN4i57;
    int i7DEVFRg;
    int d;
};
void  main () {
    int dVGB6TMkn, Nfx6VkrI, mQbt2F, nKwH68p;
    struct   stu *SOkQ01, p2;
    scanf ("%d", &mQbt2F);
    SOkQ01 = (struct   stu *) calloc (mQbt2F, sizeof (struct   stu));
    {
        dVGB6TMkn = 87 - 87;
        while (mQbt2F > dVGB6TMkn) {
            scanf ("%d %d %d", &(SOkQ01[dVGB6TMkn].uK0UP2TSrn), &(SOkQ01[dVGB6TMkn].kgN4i57), &(SOkQ01[dVGB6TMkn].i7DEVFRg));
            SOkQ01[dVGB6TMkn].d = SOkQ01[dVGB6TMkn].kgN4i57 + SOkQ01[dVGB6TMkn].i7DEVFRg;
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
            dVGB6TMkn = dVGB6TMkn + 1;
        };
    }
    {
        dVGB6TMkn = 646 - 646;
        while (dVGB6TMkn < (526 - 523)) {
            {
                Nfx6VkrI = 236 - 235;
                while (Nfx6VkrI < mQbt2F) {
                    if (SOkQ01[dVGB6TMkn].d < SOkQ01[Nfx6VkrI].d) {
                        p2 = SOkQ01[dVGB6TMkn];
                        SOkQ01[dVGB6TMkn] = SOkQ01[Nfx6VkrI];
                        SOkQ01[Nfx6VkrI] = p2;
                    }
                    Nfx6VkrI = Nfx6VkrI +1;
                };
            }
            dVGB6TMkn = dVGB6TMkn + 1;
        };
    }
    {
        dVGB6TMkn = 0;
        while (dVGB6TMkn < 3) {
            printf ("%d %d\n", SOkQ01[dVGB6TMkn].uK0UP2TSrn, SOkQ01[dVGB6TMkn].d);
            dVGB6TMkn = dVGB6TMkn + 1;
        };
    };
}

