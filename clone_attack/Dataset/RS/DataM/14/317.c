struct   student {
    int lA20nDfN;
    int chi;
    int math;
    struct   student *next;
};
struct   student *creat (int DdnfZEDj) {
    struct   student *head, *CxZkWCtASPqE, *JBiRWVhd;
    int vMP8VolY7J;
    CxZkWCtASPqE = JBiRWVhd = (struct   student *) malloc (LEN);
    scanf ("%d %d %d", &CxZkWCtASPqE->lA20nDfN, &CxZkWCtASPqE->chi, &CxZkWCtASPqE->math);
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
    head = CxZkWCtASPqE;
    for (vMP8VolY7J = 2; vMP8VolY7J <= DdnfZEDj; vMP8VolY7J = vMP8VolY7J + 1) {
        CxZkWCtASPqE = (struct   student *) malloc (LEN);
        scanf ("%d %d %d", &CxZkWCtASPqE->lA20nDfN, &CxZkWCtASPqE->chi, &CxZkWCtASPqE->math);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        JBiRWVhd->next = CxZkWCtASPqE;
        JBiRWVhd = CxZkWCtASPqE;
    }
    JBiRWVhd->next = NULL;
    return head;
}

void  main () {
    struct   student *head, *NKiFnGpr8Zt, *CxZkWCtASPqE, *JBiRWVhd, *p3;
    int DdnfZEDj;
    int vb8tOPo;
    int m2;
    int m3;
    int YLp5tn1Ys0fN;
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
    scanf ("%d", &DdnfZEDj);
    head = creat (DdnfZEDj);
    NKiFnGpr8Zt = head;
    vb8tOPo = m2 = m3 = (790 - 790);
    if (head != NULL) {
        do {
            YLp5tn1Ys0fN = NKiFnGpr8Zt->chi + NKiFnGpr8Zt->math;
            if (YLp5tn1Ys0fN > vb8tOPo) {
                vb8tOPo = YLp5tn1Ys0fN;
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
                CxZkWCtASPqE = NKiFnGpr8Zt;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            NKiFnGpr8Zt = NKiFnGpr8Zt->next;
        }
        while (!(NULL == NKiFnGpr8Zt));
        NKiFnGpr8Zt = head;
        do {
            YLp5tn1Ys0fN = NKiFnGpr8Zt->chi + NKiFnGpr8Zt->math;
            if ((m2 < YLp5tn1Ys0fN) && (NKiFnGpr8Zt != CxZkWCtASPqE)) {
                m2 = YLp5tn1Ys0fN;
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
                JBiRWVhd = NKiFnGpr8Zt;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            NKiFnGpr8Zt = NKiFnGpr8Zt->next;
        }
        while (NKiFnGpr8Zt != NULL);
        NKiFnGpr8Zt = head;
        do {
            YLp5tn1Ys0fN = NKiFnGpr8Zt->chi + NKiFnGpr8Zt->math;
            if ((YLp5tn1Ys0fN > m3) && (NKiFnGpr8Zt != CxZkWCtASPqE) && (NKiFnGpr8Zt != JBiRWVhd)) {
                m3 = YLp5tn1Ys0fN;
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
                p3 = NKiFnGpr8Zt;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            NKiFnGpr8Zt = NKiFnGpr8Zt->next;
        }
        while (NKiFnGpr8Zt != NULL);
    }
    printf ("%d %d\n%d %d\n%d %d\n", CxZkWCtASPqE->lA20nDfN, vb8tOPo, JBiRWVhd->lA20nDfN, m2, p3->lA20nDfN, m3);
}

