int yPtbrMx;

struct   student {
    char JMfNHK0UyZ [(785 - 765)];
    float MP79m5rsgUQ;
    float ddbwzxGNsHoK;
    char tbAMiBZL7o;
    char uO4PNZq1r;
    int HkKw6D0Ozj;
    int WadstRn;
    struct   student *EvmS0RJph;
};
void  mkCr7MAwq (struct   student *p) {
    p->WadstRn = 0;
    if (p->MP79m5rsgUQ > (656 - 576) && p->HkKw6D0Ozj > 0) {
        p->WadstRn = p->WadstRn + (8432 - 432);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (p->MP79m5rsgUQ > (317 - 232) && p->ddbwzxGNsHoK > 80) {
        p->WadstRn = p->WadstRn + 4000;
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
        };
    }
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
    if (p->MP79m5rsgUQ > (592 - 502)) {
        p->WadstRn = p->WadstRn + (2455 - 455);
    }
    if (p->MP79m5rsgUQ > (459 - 374) && p->uO4PNZq1r == 'Y') {
        p->WadstRn = p->WadstRn + (1126 - 126);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    if (p->ddbwzxGNsHoK > 80 && p->tbAMiBZL7o == 'Y') {
        p->WadstRn = p->WadstRn + (1490 - 640);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    };
}

struct   student *aVmDnq6P0My () {
    struct   student *head, *p1, *VCPkLxwnfVB;
    int i;
    i = (875 - 874);
    mkCr7MAwq (p1);
    p1 = (struct   student *) malloc (LEN);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    scanf ("%s %f %f %c %c %d", p1->JMfNHK0UyZ, &p1->MP79m5rsgUQ, &p1->ddbwzxGNsHoK, &p1->tbAMiBZL7o, &p1->uO4PNZq1r, &p1->HkKw6D0Ozj);
    p1->EvmS0RJph = NULL;
    head = p1;
    VCPkLxwnfVB = p1;
    do {
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
        if (i >= yPtbrMx) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        }
        else {
            mkCr7MAwq (p1);
            i++;
            p1 = (struct   student *) malloc (LEN);
            scanf ("%s %f %f %c %c %d", p1->JMfNHK0UyZ, &p1->MP79m5rsgUQ, &p1->ddbwzxGNsHoK, &p1->tbAMiBZL7o, &p1->uO4PNZq1r, &p1->HkKw6D0Ozj);
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
            p1->EvmS0RJph = NULL;
            VCPkLxwnfVB->EvmS0RJph = p1;
            VCPkLxwnfVB = p1;
        };
    }
    while (1);
    return (head);
}

void  jwsQBVx (struct   student *head) {
    int total;
    int lkjI8izEOq;
    total = 0;
    lkjI8izEOq = 0;
    struct   student *p;
    struct   student *YMivnS;
    p = head;
    do {
        total = total + p->WadstRn;
        if (p->WadstRn > lkjI8izEOq) {
            YMivnS = p;
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
            lkjI8izEOq = p->WadstRn;
        }
        p = p->EvmS0RJph;
    }
    while (p);
    printf ("%s\n%d\n", YMivnS->JMfNHK0UyZ, lkjI8izEOq);
    printf ("%d", total);
}

int main () {
    int total;
    struct   student *head;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    jwsQBVx (head);
    scanf ("%d", &yPtbrMx);
    head = aVmDnq6P0My ();
}

