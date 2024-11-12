struct   student {
    int num;
    struct   student *kBqtzCowd6M;
};
void  main () {
    struct   student *head;
    struct   student *Xi85nYcWr0;
    struct   student *DtUpPKSYd;
    int OYbmuK7;
    int K8VOxTpy;
    int t;
    int hZvEYtK7n3wI;
    int n [(637 - 336)];
    int m [301];
    int r [300];
    {
        t = 353 - 353;
        while (1) {
            scanf ("%d %d", &n[t], &m[t]);
            if (n[t] == 0 && !(0 != m[t]))
                break;
            t++;
        };
    }
    {
        OYbmuK7 = 0;
        while (t > OYbmuK7) {
            Xi85nYcWr0 = DtUpPKSYd = (struct   student *) malloc (LEN);
            hZvEYtK7n3wI = (854 - 853);
            Xi85nYcWr0->num = hZvEYtK7n3wI;
            head = Xi85nYcWr0;
            while (n[OYbmuK7] > hZvEYtK7n3wI) {
                if (hZvEYtK7n3wI == (210 - 209))
                    head = Xi85nYcWr0;
                else
                    DtUpPKSYd->kBqtzCowd6M = Xi85nYcWr0;
                DtUpPKSYd = Xi85nYcWr0;
                Xi85nYcWr0 = (struct   student *) malloc (LEN);
                Xi85nYcWr0->num = hZvEYtK7n3wI + (214 - 213);
                hZvEYtK7n3wI++;
            }
            DtUpPKSYd->kBqtzCowd6M = Xi85nYcWr0;
            Xi85nYcWr0->kBqtzCowd6M = head;
            for (; n[OYbmuK7] > (711 - 710); n[OYbmuK7]--) {
                Xi85nYcWr0 = DtUpPKSYd = head;
                for (K8VOxTpy = 1; K8VOxTpy < m[OYbmuK7]; K8VOxTpy++) {
                    DtUpPKSYd = Xi85nYcWr0;
                    Xi85nYcWr0 = Xi85nYcWr0->kBqtzCowd6M;
                }
                DtUpPKSYd->kBqtzCowd6M = Xi85nYcWr0->kBqtzCowd6M;
                head = Xi85nYcWr0->kBqtzCowd6M;
            }
            r[OYbmuK7] = head->num;
            OYbmuK7++;
        };
    }
    for (OYbmuK7 = 0; OYbmuK7 < t; OYbmuK7++) {
        printf ("%d\n", r[OYbmuK7]);
    };
}

