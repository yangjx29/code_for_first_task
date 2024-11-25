struct   node {
    int XpmnPN4dT;
    struct   node *J0H8fB1;
};
void  main () {
    int ZhyRxcuINkF;
    struct   node *TA7kyo;
    struct   node *HMnRSVPZG;
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
    struct   node *FYdKrRz;
    int VT0LbjJ7RpS1, m;
    for (; 1;) {
        scanf ("%d %d", &VT0LbjJ7RpS1, &m);
        if (VT0LbjJ7RpS1 == 0)
            break;
        TA7kyo = (struct   node *) malloc (sizeof (struct   node));
        HMnRSVPZG = TA7kyo;
        HMnRSVPZG->XpmnPN4dT = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (ZhyRxcuINkF = 2; VT0LbjJ7RpS1 >= ZhyRxcuINkF; ZhyRxcuINkF = ZhyRxcuINkF +1) {
            FYdKrRz = (struct   node *) malloc (sizeof (struct   node));
            FYdKrRz->XpmnPN4dT = ZhyRxcuINkF;
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
            HMnRSVPZG->J0H8fB1 = FYdKrRz;
            HMnRSVPZG = FYdKrRz;
        }
        HMnRSVPZG->J0H8fB1 = TA7kyo;
        for (; HMnRSVPZG->J0H8fB1 != HMnRSVPZG;) {
            for (ZhyRxcuINkF = 1; ZhyRxcuINkF < m; ZhyRxcuINkF++)
                HMnRSVPZG = HMnRSVPZG->J0H8fB1;
            HMnRSVPZG->J0H8fB1 = HMnRSVPZG->J0H8fB1->J0H8fB1;
        }
        printf ("%d\n", HMnRSVPZG->XpmnPN4dT);
    };
}

