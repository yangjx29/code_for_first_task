struct   student {
    int UuUeCQGd8;
    int NOpPeXg;
    int math;
    int sum;
    struct   student *TwjVb9spuSYt;
};
int zQA58UwOlSX;

struct   student *creat () {
    struct   student *RFXgA9, *AcGslb, *BkNmcv3j;
    RFXgA9 = NULL;
    scanf ("%d", &zQA58UwOlSX);
    AcGslb = BkNmcv3j = (struct   student *) malloc (len);
    scanf ("%d%d%d", &AcGslb->UuUeCQGd8, &AcGslb->NOpPeXg, &AcGslb->math);
    AcGslb->sum = AcGslb->NOpPeXg + AcGslb->math;
    for (; zQA58UwOlSX > AcGslb->UuUeCQGd8;) {
        if (!(1 != AcGslb->UuUeCQGd8))
            RFXgA9 = AcGslb;
        AcGslb = (struct   student *) malloc (len);
        scanf ("%d%d%d", &AcGslb->UuUeCQGd8, &AcGslb->NOpPeXg, &AcGslb->math);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        AcGslb->sum = AcGslb->NOpPeXg + AcGslb->math;
        BkNmcv3j->TwjVb9spuSYt = AcGslb;
        BkNmcv3j = AcGslb;
    }
    BkNmcv3j->TwjVb9spuSYt = NULL;
    return (RFXgA9);
}

void  main () {
    struct   student *RFXgA9, *AcGslb, *BkNmcv3j, *p3, *MjVS6NE;
    RFXgA9 = creat ();
    {
        MjVS6NE = RFXgA9;
        AcGslb = RFXgA9;
        BkNmcv3j = RFXgA9;
        p3 = RFXgA9;
        while (!(NULL == MjVS6NE)) {
            if (MjVS6NE->sum > AcGslb->sum) {
                p3 = BkNmcv3j;
                BkNmcv3j = AcGslb;
                AcGslb = MjVS6NE;
            }
            else {
                if (MjVS6NE->sum > BkNmcv3j->sum) {
                    p3 = BkNmcv3j;
                    BkNmcv3j = MjVS6NE;
                }
                else if (MjVS6NE->sum > p3->sum) {
                    p3 = MjVS6NE;
                };
            }
            MjVS6NE = MjVS6NE->TwjVb9spuSYt;
        };
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
    printf ("%d %d\n", AcGslb->UuUeCQGd8, AcGslb->sum);
    printf ("%d %d\n", BkNmcv3j->UuUeCQGd8, BkNmcv3j->sum);
    printf ("%d %d\n", p3->UuUeCQGd8, p3->sum);
}

