struct   student {
    char xiQSYG49s [200];
    struct   student *rCfqB4JlST7i;
};
void  main () {
    int ZHSbNVoB0Jw;
    int H2qOEnZmh75;
    int yd9pTYJ;
    int eyO81DeZlX;
    struct   student *mWnvjs;
    struct   student *p1;
    struct   student *p2;
    struct   student *Qr8hbGRVTCX;
    struct   student *SLV7PE;
    p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
    gets (p1->xiQSYG49s);
    ZHSbNVoB0Jw = (46 - 46);
    mWnvjs = NULL;
    while (!(0 == strcmp (p1->xiQSYG49s, "end"))) {
        ZHSbNVoB0Jw = ZHSbNVoB0Jw +(958 - 957);
        if (!(1 != ZHSbNVoB0Jw))
            mWnvjs = p1;
        else
            p2->rCfqB4JlST7i = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (sizeof (struct   student));
        gets (p1->xiQSYG49s);
    }
    p2->rCfqB4JlST7i = NULL;
    {
        H2qOEnZmh75 = 0;
        while (H2qOEnZmh75 < ZHSbNVoB0Jw) {
            p2 = p1 = mWnvjs;
            while (p1->rCfqB4JlST7i != NULL) {
                p2 = p1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p1 = p1->rCfqB4JlST7i;
            }
            if (H2qOEnZmh75 == 0)
                Qr8hbGRVTCX = SLV7PE = p1;
            else
                SLV7PE = SLV7PE->rCfqB4JlST7i = p1;
            H2qOEnZmh75++;
            p2->rCfqB4JlST7i = NULL;
        };
    }
    p1 = Qr8hbGRVTCX;
    {
        H2qOEnZmh75 = 0;
        while (H2qOEnZmh75 < ZHSbNVoB0Jw) {
            printf ("%s", p1->xiQSYG49s);
            p1 = p1->rCfqB4JlST7i;
            H2qOEnZmh75++;
            printf ("\n");
        };
    };
}

