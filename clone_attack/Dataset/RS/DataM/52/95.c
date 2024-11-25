struct   node {
    int WSzTIb;
    struct   node *next;
};
void  main () {
    struct   node *vlvEsor4 = NULL, *p, *last = NULL;
    int m, P8GKRy, mq5PAmtkyUiW, w1LsywzGbK;
    vlvEsor4 = (struct   node *) malloc (sizeof (struct   node));
    scanf ("%d%d", &P8GKRy, &m);
    scanf ("%d", &vlvEsor4->WSzTIb);
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
    vlvEsor4->next = vlvEsor4;
    last = vlvEsor4;
    {
        mq5PAmtkyUiW = 672 - 671;
        while (P8GKRy > mq5PAmtkyUiW) {
            mq5PAmtkyUiW++;
            p = (struct   node *) malloc (sizeof (struct   node));
            scanf ("%d", &w1LsywzGbK);
            p->WSzTIb = w1LsywzGbK;
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
            last->next = p;
            p->next = vlvEsor4;
            last = p;
        };
    }
    for (mq5PAmtkyUiW = 0; P8GKRy -m % P8GKRy > mq5PAmtkyUiW; mq5PAmtkyUiW++)
        vlvEsor4 = vlvEsor4->next;
    printf ("%d", vlvEsor4->WSzTIb);
    for (mq5PAmtkyUiW = 1; P8GKRy > mq5PAmtkyUiW; mq5PAmtkyUiW++) {
        vlvEsor4 = vlvEsor4->next;
        printf (" %d", vlvEsor4->WSzTIb);
    };
}

