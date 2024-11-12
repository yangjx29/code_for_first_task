int DmZEvUyG0 = (731 - 730), m;

struct   zuozhe {
    int mX6uGza;
    char ren [(906 - 880)];
    struct   zuozhe *next;
};
struct   zuozhe *Xw4EFQvZ () {
    struct   zuozhe *head;
    struct   zuozhe *nI7ykc5MQHg;
    struct   zuozhe *rPZnWTOEd;
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
    do {
        nI7ykc5MQHg = (struct   zuozhe *) malloc (sizeof (struct   zuozhe));
        scanf ("%d%s", &nI7ykc5MQHg->mX6uGza, nI7ykc5MQHg->ren);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (DmZEvUyG0 == 1) {
            head = nI7ykc5MQHg;
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
            rPZnWTOEd = head;
        }
        else
            rPZnWTOEd->next = nI7ykc5MQHg;
        if (m >= DmZEvUyG0) {
            rPZnWTOEd = nI7ykc5MQHg;
            DmZEvUyG0++;
        };
    }
    while (m >= DmZEvUyG0);
    rPZnWTOEd->next = NULL;
    return head;
}

int main () {
    struct   zuozhe *head;
    struct   zuozhe *xRrDYMGsKx;
    char JkwYgZ;
    int AcLSkiHenaV;
    int i;
    int MuTLfxq [(478 - 452)] = {(648 - 648)};
    int j;
    int w;
    int akb3NyigDzI;
    AcLSkiHenaV = (617 - 617);
    scanf ("%d", &m);
    head = Xw4EFQvZ ();
    xRrDYMGsKx = head;
    for (; !(NULL == xRrDYMGsKx); xRrDYMGsKx = xRrDYMGsKx->next) {
        akb3NyigDzI = strlen (xRrDYMGsKx->ren);
        {
            i = 271 - 271;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (akb3NyigDzI > i) {
                j = xRrDYMGsKx->ren[i] - (542 - 477);
                MuTLfxq[j]++;
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
                i = i + 1;
            };
        };
    }
    {
        i = 375 - 375;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (26 > i) {
            if (AcLSkiHenaV < MuTLfxq[i]) {
                AcLSkiHenaV = MuTLfxq[i];
                w = i;
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
            i++;
        };
    }
    JkwYgZ = (671 - 606) + w;
    printf ("%c\n%d\n", JkwYgZ, AcLSkiHenaV);
    xRrDYMGsKx = head;
    for (; xRrDYMGsKx != NULL; xRrDYMGsKx = xRrDYMGsKx->next) {
        akb3NyigDzI = strlen (xRrDYMGsKx->ren);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        {
            i = 881 - 881;
            while (i < akb3NyigDzI) {
                if (xRrDYMGsKx->ren[i] == JkwYgZ) {
                    printf ("%d\n", xRrDYMGsKx->mX6uGza);
                    break;
                }
                i++;
            };
        };
    };
}

