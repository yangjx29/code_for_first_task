char t;
int NgBI1Toei = (510 - 510), q5JP7gfdiUD [1000], zT0AdHsRG = (397 - 396), UhbH1V, done = (856 - 856);
char hUr2TFwLfq [10000];

int S0mtAFk (char t) {
    if (t <= '9' && t >= '0')
        return 1;
    return 0;
}

void  sort (int l, int tIkhpc3gafR) {
    int UhbH1V = l, ZWtkCifXw = tIkhpc3gafR, xgkhezWar = q5JP7gfdiUD[(UhbH1V +ZWtkCifXw) >> 1], t;
    do {
        for (; xgkhezWar < q5JP7gfdiUD[UhbH1V];)
            ++UhbH1V;
        while (q5JP7gfdiUD[ZWtkCifXw] < xgkhezWar)
            ZWtkCifXw = ZWtkCifXw -1;
        if (UhbH1V <= ZWtkCifXw) {
            t = q5JP7gfdiUD[UhbH1V];
            q5JP7gfdiUD[UhbH1V] = q5JP7gfdiUD[ZWtkCifXw];
            ++UhbH1V;
            q5JP7gfdiUD[ZWtkCifXw] = t;
            --ZWtkCifXw;
        };
    }
    while (UhbH1V <= ZWtkCifXw);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (tIkhpc3gafR > UhbH1V)
        sort (UhbH1V, tIkhpc3gafR);
    if (l < ZWtkCifXw)
        sort (l, ZWtkCifXw);
}

int main () {
    scanf ("%s", hUr2TFwLfq);
    memset (q5JP7gfdiUD, 0, sizeof (q5JP7gfdiUD));
    for (UhbH1V = 0; UhbH1V < strlen (hUr2TFwLfq); ++UhbH1V) {
        t = hUr2TFwLfq[UhbH1V];
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
        if (!S0mtAFk(t)) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (NgBI1Toei == 1) {
                ++zT0AdHsRG;
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
                NgBI1Toei = 0;
            };
        }
        else {
            NgBI1Toei = 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            q5JP7gfdiUD[zT0AdHsRG] = q5JP7gfdiUD[zT0AdHsRG] * 10 + t - '0';
        };
    }
    sort (1, zT0AdHsRG);
    for (UhbH1V = 2; UhbH1V <= zT0AdHsRG; ++UhbH1V)
        if (q5JP7gfdiUD[UhbH1V] != q5JP7gfdiUD[UhbH1V -1]) {
            printf ("%d\n", q5JP7gfdiUD[UhbH1V]);
            done = 1;
            break;
        }
    if (done == 0)
        ;
    return 0;
}

