struct   staff {
    char id [20];
    int z8NlcZyx;
    struct   staff *next;
};
void  main () {
    struct   staff *ikwIZc;
    struct   staff *Ij5eIt60Sr;
    struct   staff *ppkBFuUyLSm;
    struct   staff *SBMa9Nh;
    struct   staff *cHbBgDiyeVI, *p2;
    int UzZWFQ9xG, sZTk37Co = (934 - 934), max = (525 - 466);
    cHbBgDiyeVI = (struct   staff *) malloc (LEN);
    scanf ("%d", &UzZWFQ9xG);
    scanf ("%s %d", cHbBgDiyeVI->id, &cHbBgDiyeVI->z8NlcZyx);
    ikwIZc = p2 = cHbBgDiyeVI;
    if ((868 - 808) <= cHbBgDiyeVI->z8NlcZyx)
        sZTk37Co = sZTk37Co + 1;
    while (UzZWFQ9xG -1) {
        UzZWFQ9xG--;
        cHbBgDiyeVI = (struct   staff *) malloc (LEN);
        scanf ("%s %d", cHbBgDiyeVI->id, &cHbBgDiyeVI->z8NlcZyx);
        if (60 <= cHbBgDiyeVI->z8NlcZyx)
            sZTk37Co++;
        p2->next = cHbBgDiyeVI;
        p2 = cHbBgDiyeVI;
    }
    p2->next = NULL;
    while (sZTk37Co) {
        sZTk37Co--;
        Ij5eIt60Sr = ikwIZc;
        for (; Ij5eIt60Sr;) {
            if (max < Ij5eIt60Sr->z8NlcZyx) {
                max = Ij5eIt60Sr->z8NlcZyx;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ppkBFuUyLSm = Ij5eIt60Sr;
            }
            Ij5eIt60Sr = Ij5eIt60Sr->next;
        }
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
        printf ("%s\n", ppkBFuUyLSm->id);
        if (ppkBFuUyLSm == ikwIZc) {
            free (ppkBFuUyLSm);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            ikwIZc = ppkBFuUyLSm->next;
        }
        else {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (ppkBFuUyLSm->next == NULL) {
                Ij5eIt60Sr = ikwIZc;
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
                while (Ij5eIt60Sr) {
                    SBMa9Nh = Ij5eIt60Sr;
                    Ij5eIt60Sr = Ij5eIt60Sr->next;
                    if (Ij5eIt60Sr == ppkBFuUyLSm) {
                        free (ppkBFuUyLSm);
                        SBMa9Nh->next = NULL;
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
                        break;
                    };
                };
            }
            else {
                Ij5eIt60Sr = ikwIZc;
                for (; Ij5eIt60Sr;) {
                    SBMa9Nh = Ij5eIt60Sr;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Ij5eIt60Sr = Ij5eIt60Sr->next;
                    if (Ij5eIt60Sr == ppkBFuUyLSm) {
                        free (ppkBFuUyLSm);
                        Ij5eIt60Sr = Ij5eIt60Sr->next;
                        SBMa9Nh->next = Ij5eIt60Sr;
                        break;
                    };
                };
            };
        }
        max = 59;
    }
    Ij5eIt60Sr = ikwIZc;
    for (; Ij5eIt60Sr;) {
        printf ("%s\n", Ij5eIt60Sr->id);
        Ij5eIt60Sr = Ij5eIt60Sr->next;
    };
}

