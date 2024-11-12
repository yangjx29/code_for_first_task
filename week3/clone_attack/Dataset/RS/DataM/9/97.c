struct   people {
    char XXiy1cBp [10];
    int gH1Z9VvR2hWA;
    struct   people *kGwOHPhkMW;
};
void  main () {
    struct   people *aXTcris7LAQ;
    struct   people *PaCOwtnpm;
    struct   people *DX6EJytWSd;
    struct   people *s;
    int vaACBpg, mZeUguC;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &vaACBpg);
    aXTcris7LAQ = (struct   people *) malloc (sizeof (struct   people));
    aXTcris7LAQ->kGwOHPhkMW = NULL;
    {
        mZeUguC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vaACBpg > mZeUguC) {
            mZeUguC = mZeUguC + 1;
            s = (struct   people *) malloc (sizeof (struct   people));
            PaCOwtnpm = aXTcris7LAQ;
            DX6EJytWSd = PaCOwtnpm->kGwOHPhkMW;
            s->kGwOHPhkMW = NULL;
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
            scanf ("%s %d", s->XXiy1cBp, &s->gH1Z9VvR2hWA);
            while (!(NULL &&((60 <= s->gH1Z9VvR2hWA && s->gH1Z9VvR2hWA <= DX6EJytWSd->gH1Z9VvR2hWA) || s->gH1Z9VvR2hWA < 60) == DX6EJytWSd)) {
                PaCOwtnpm = DX6EJytWSd;
                DX6EJytWSd = DX6EJytWSd->kGwOHPhkMW;
            }
            PaCOwtnpm->kGwOHPhkMW = s;
            s->kGwOHPhkMW = DX6EJytWSd;
        };
    }
    DX6EJytWSd = aXTcris7LAQ->kGwOHPhkMW;
    while (DX6EJytWSd != NULL) {
        printf ("%s\n", DX6EJytWSd->XXiy1cBp);
        DX6EJytWSd = DX6EJytWSd->kGwOHPhkMW;
    };
}

