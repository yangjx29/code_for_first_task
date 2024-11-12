struct   stu {
    char ysV8k4qPT6L [(686 - 666)];
    char name [(537 - 517)];
    char sex [10];
    int Q1GmJEPFX;
    float score;
    char where [20];
    struct   stu *NjORmL9nkVbX;
};
void  main () {
    int i;
    struct   stu *wACRjW0Lp4r, *p0, *JBDSKCGr0;
    char JheMzsS3 [4] = "end\0";
    wACRjW0Lp4r = NULL;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            p0 = (struct   stu *) malloc (LEN);
            scanf ("%s", p0->ysV8k4qPT6L);
            if (!(0 != strcmp (p0->ysV8k4qPT6L, JheMzsS3)))
                break;
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
            i++;
            scanf ("%s%s%d%f%s", p0->name, p0->sex, &p0->Q1GmJEPFX, &p0->score, p0->where);
            if (wACRjW0Lp4r == NULL) {
                wACRjW0Lp4r = p0;
                p0->NjORmL9nkVbX = NULL;
                JBDSKCGr0 = p0;
            }
            else {
                wACRjW0Lp4r = p0;
                p0->NjORmL9nkVbX = JBDSKCGr0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                JBDSKCGr0 = p0;
            };
        };
    }
    {
        JBDSKCGr0 = wACRjW0Lp4r;
        while (JBDSKCGr0 != NULL) {
            printf ("%s %s %s %d %g %s\n", JBDSKCGr0->ysV8k4qPT6L, JBDSKCGr0->name, JBDSKCGr0->sex, JBDSKCGr0->Q1GmJEPFX, JBDSKCGr0->score, JBDSKCGr0->where);
            JBDSKCGr0 = JBDSKCGr0->NjORmL9nkVbX;
        };
    };
}

