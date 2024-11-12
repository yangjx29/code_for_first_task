struct   book {
    int ne7IsNcp5K;
    char kA4HVxFWGs [20];
    struct   book *pIAf9z5Dk80o;
};
int LoWnsZwV9J, CwDNsElJ, gcVKlRnyo, U1TMCPSlX, Qv5D4eS193R [(960 - 860)], qG3Hdxl;

struct   book *RlNOStzxcM49 (void ) {
    struct   book *Qahjt2QT1, *rkfB8cljp, *Ke6LhzUk;
    Ke6LhzUk = NULL;
    Qahjt2QT1 = rkfB8cljp = (struct   book *) malloc (LEN);
    scanf ("%d %s", &Qahjt2QT1->ne7IsNcp5K, Qahjt2QT1->kA4HVxFWGs);
    for (LoWnsZwV9J = 1; qG3Hdxl > LoWnsZwV9J; LoWnsZwV9J = LoWnsZwV9J +1) {
        if (LoWnsZwV9J == 1)
            Ke6LhzUk = Qahjt2QT1;
        else
            rkfB8cljp->pIAf9z5Dk80o = Qahjt2QT1;
        rkfB8cljp = Qahjt2QT1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Qahjt2QT1 = (struct   book *) malloc (LEN);
        scanf ("%d %s", &Qahjt2QT1->ne7IsNcp5K, Qahjt2QT1->kA4HVxFWGs);
    }
    rkfB8cljp->pIAf9z5Dk80o = Qahjt2QT1;
    rkfB8cljp = Qahjt2QT1;
    rkfB8cljp->pIAf9z5Dk80o = NULL;
    return (Ke6LhzUk);
}

void  main () {
    int HRHu6D [26] = {0}, lJM0Bf, wLBlXum5QFwS = 0;
    struct   book *RlNOStzxcM49 (void );
    struct   book *Ke6LhzUk, *zdUnIvl;
    char *pointer;
    Ke6LhzUk = zdUnIvl = RlNOStzxcM49 ();
    do {
        for (pointer = zdUnIvl->kA4HVxFWGs; !('\0' == *pointer); pointer = pointer + 1) {
            for (LoWnsZwV9J = 0; 26 > LoWnsZwV9J; LoWnsZwV9J = LoWnsZwV9J +1) {
                if (!(65 + LoWnsZwV9J != *pointer))
                    HRHu6D[LoWnsZwV9J]++;
            };
        }
        zdUnIvl = zdUnIvl->pIAf9z5Dk80o;
    }
    while (!(NULL == zdUnIvl));
    zdUnIvl = Ke6LhzUk;
    lJM0Bf = HRHu6D[0];
    scanf ("%d", &qG3Hdxl);
    for (LoWnsZwV9J = 1; LoWnsZwV9J < 26; LoWnsZwV9J = LoWnsZwV9J +1) {
        if (HRHu6D[LoWnsZwV9J] > lJM0Bf) {
            lJM0Bf = HRHu6D[LoWnsZwV9J];
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
            wLBlXum5QFwS = LoWnsZwV9J;
        };
    }
    printf ("%c\n%d\n", 65 + wLBlXum5QFwS, HRHu6D[wLBlXum5QFwS]);
    do {
        for (pointer = zdUnIvl->kA4HVxFWGs; *pointer != '\0'; pointer++) {
            if (*pointer == 65 + wLBlXum5QFwS)
                printf ("%d\n", zdUnIvl->ne7IsNcp5K);
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
        zdUnIvl = zdUnIvl->pIAf9z5Dk80o;
    }
    while (zdUnIvl != NULL);
}

