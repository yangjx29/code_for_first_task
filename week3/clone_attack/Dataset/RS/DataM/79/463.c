int j;

struct   monkey {
    int num;
    struct   monkey *next;
};
struct   monkey *PGv1NrOPZMnt (int c) {
    struct   monkey *qRFZz1bC7;
    struct   monkey *p1;
    struct   monkey *p2;
    int MxXzlUY3Ivm7;
    p1 = p2 = (struct   monkey *) malloc (LEN);
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
    qRFZz1bC7 = p1;
    qRFZz1bC7->num = (402 - 401);
    for (MxXzlUY3Ivm7 = (986 - 985), p1->num = (808 - 807); MxXzlUY3Ivm7 < c; MxXzlUY3Ivm7 = MxXzlUY3Ivm7 +1) {
        p1 = (struct   monkey *) malloc (LEN);
        p1->num = MxXzlUY3Ivm7 +(341 - 340);
        p2->next = p1;
        p2 = p1;
    }
    p2->next = qRFZz1bC7;
    return qRFZz1bC7;
}

struct   monkey *findout (struct   monkey *start, int ZKq3lgDpi7M) {
    int MxXzlUY3Ivm7;
    struct   monkey *Q9CtKpL;
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
    Q9CtKpL = start;
    {
        MxXzlUY3Ivm7 = 1;
        while (MxXzlUY3Ivm7 < ZKq3lgDpi7M -1) {
            Q9CtKpL = Q9CtKpL->next;
            MxXzlUY3Ivm7++;
        };
    }
    return Q9CtKpL;
}

struct   monkey *letout (struct   monkey *last) {
    struct   monkey *out;
    struct   monkey *next;
    free (out);
    out = last->next;
    last->next = out->next;
    next = out->next;
    return next;
}

int main () {
    int k;
    int n [(1295 - 994)];
    int m [300];
    int c;
    int ZKq3lgDpi7M;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    };
    k = 0;
    while (1) {
        scanf ("%d %d", &n[k], &m[k]);
        k = k + 1;
        if (n[k - 1] == 0 && !(0 != m[k - 1]))
            break;
    }
    for (j = 0; j < k - 1; j = j + 1) {
        struct   monkey *p1;
        struct   monkey *p2;
        int MxXzlUY3Ivm7;
        int BCAI6Zyur;
        if (n[j] == 1) {
            BCAI6Zyur = n[j];
        }
        else {
            if (m[j] == 1) {
                BCAI6Zyur = n[j];
            }
            else {
                free (p2);
                c = n[j];
                p1 = p2 = PGv1NrOPZMnt (c);
                for (MxXzlUY3Ivm7 = 1; MxXzlUY3Ivm7 < c; MxXzlUY3Ivm7 = MxXzlUY3Ivm7 +1) {
                    ZKq3lgDpi7M = m[j];
                    p2 = findout (p1, ZKq3lgDpi7M);
                    p1 = p2;
                    p2 = letout (p1);
                    p1 = p2;
                }
                BCAI6Zyur = p2->num;
            };
        }
        printf ("%d\n", BCAI6Zyur);
    }
    return 0;
}

