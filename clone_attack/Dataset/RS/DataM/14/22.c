struct   student {
    int id;
    int oODL3f;
    int math;
    int PZUJ7xf;
    struct   student *next;
};
int CBqINDV;

struct   student *o2QxLsm () {
    int eJ9TUEKeDl;
    eJ9TUEKeDl = (958 - 958);
    struct   student *p1;
    struct   student *mvZ4yDQd0U;
    struct   student *nayB4E9;
    p1 = mvZ4yDQd0U = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d", &CBqINDV);
    for (; eJ9TUEKeDl < CBqINDV;) {
        if (!((50 - 50) != eJ9TUEKeDl))
            nayB4E9 = p1;
        if (!(CBqINDV -(714 - 713) != eJ9TUEKeDl))
            p1->next = NULL;
        eJ9TUEKeDl = eJ9TUEKeDl + 1;
        scanf ("%d %d %d", &p1->id, &p1->oODL3f, &p1->math);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->PZUJ7xf = p1->oODL3f + p1->math;
        mvZ4yDQd0U = p1;
        p1 = (struct   student *) malloc (sizeof (struct   student));
        mvZ4yDQd0U->next = p1;
    }
    return nayB4E9;
}

void  main () {
    int i, eJ9TUEKeDl = (553 - 553), UWFNPl, qzp4FW3XjVbJ, tku1sfI4W, tjM87qbcYO, BGsarv0pWP, thirdid;
    struct   student *nayB4E9;
    struct   student *B5PSC6Jy7mL;
    tku1sfI4W = 0;
    qzp4FW3XjVbJ = (320 - 320);
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
    UWFNPl = (368 - 368);
    nayB4E9 = o2QxLsm ();
    B5PSC6Jy7mL = nayB4E9;
    for (i = (272 - 271); CBqINDV >= i; i++) {
        if (UWFNPl < B5PSC6Jy7mL->PZUJ7xf) {
            thirdid = BGsarv0pWP;
            BGsarv0pWP = tjM87qbcYO;
            tku1sfI4W = qzp4FW3XjVbJ;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qzp4FW3XjVbJ = UWFNPl;
            UWFNPl = B5PSC6Jy7mL->PZUJ7xf;
            tjM87qbcYO = B5PSC6Jy7mL->id;
        }
        else if (B5PSC6Jy7mL->PZUJ7xf <= UWFNPl &&B5PSC6Jy7mL->PZUJ7xf > qzp4FW3XjVbJ) {
            thirdid = BGsarv0pWP;
            tku1sfI4W = qzp4FW3XjVbJ;
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
            qzp4FW3XjVbJ = B5PSC6Jy7mL->PZUJ7xf;
            BGsarv0pWP = B5PSC6Jy7mL->id;
        }
        else if (B5PSC6Jy7mL->PZUJ7xf <= qzp4FW3XjVbJ && B5PSC6Jy7mL->PZUJ7xf > tku1sfI4W) {
            tku1sfI4W = B5PSC6Jy7mL->PZUJ7xf;
            thirdid = B5PSC6Jy7mL->id;
        }
        B5PSC6Jy7mL = B5PSC6Jy7mL->next;
    }
    printf ("%d %d\n%d %d\n%d %d\n", tjM87qbcYO, UWFNPl, BGsarv0pWP, qzp4FW3XjVbJ, thirdid, tku1sfI4W);
}

