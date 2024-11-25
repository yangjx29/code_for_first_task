struct   stu {
    char vN3CQ0mZJ [(475 - 375)];
    char RNtR6Zn [(151 - 51)];
    char gUhIa9TF0NW [(85 - 82)];
    char P9QmrxMTwDg [(696 - 686)];
    char score [10];
    char FpBPdL5QeS [100];
    struct   stu *next;
};
int main () {
    int NscZqne;
    int fpG8ZyMXx;
    int koUfa7xk;
    int t;
    int mma4pb;
    int ii;
    int i;
    int RE1AsQe;
    int UlXAFgy;
    int urzsQiYOXZ9;
    struct   stu *TZ9yn83wuW;
    struct   stu *hRfvm2ZC;
    struct   stu *ynMYhQ;
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
    struct   stu *head;
    char kPrXOu1a [(539 - 509)];
    hRfvm2ZC = (struct   stu *) malloc (LEN);
    scanf ("%s%s%s%s%s%s", hRfvm2ZC->vN3CQ0mZJ, hRfvm2ZC->RNtR6Zn, hRfvm2ZC->gUhIa9TF0NW, &hRfvm2ZC->P9QmrxMTwDg, &hRfvm2ZC->score, hRfvm2ZC->FpBPdL5QeS);
    hRfvm2ZC->next = NULL;
    head = hRfvm2ZC;
    ynMYhQ = hRfvm2ZC;
    while (1) {
        hRfvm2ZC = (struct   stu *) malloc (LEN);
        scanf ("%s", hRfvm2ZC->vN3CQ0mZJ);
        if (strcmp (hRfvm2ZC->vN3CQ0mZJ, "end") == 0) {
            head = ynMYhQ;
            break;
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
        scanf ("%s%s%s%s%s", hRfvm2ZC->RNtR6Zn, hRfvm2ZC->gUhIa9TF0NW, &hRfvm2ZC->P9QmrxMTwDg, &hRfvm2ZC->score, hRfvm2ZC->FpBPdL5QeS);
        hRfvm2ZC->next = ynMYhQ;
        ynMYhQ = hRfvm2ZC;
    }
    hRfvm2ZC = head;
    while (hRfvm2ZC->next != NULL) {
        printf ("%s %s %s %s %s %s\n", hRfvm2ZC->vN3CQ0mZJ, hRfvm2ZC->RNtR6Zn, hRfvm2ZC->gUhIa9TF0NW, hRfvm2ZC->P9QmrxMTwDg, hRfvm2ZC->score, hRfvm2ZC->FpBPdL5QeS);
        hRfvm2ZC = hRfvm2ZC->next;
    }
    printf ("%s %s %s %s %s %s", hRfvm2ZC->vN3CQ0mZJ, hRfvm2ZC->RNtR6Zn, hRfvm2ZC->gUhIa9TF0NW, hRfvm2ZC->P9QmrxMTwDg, hRfvm2ZC->score, hRfvm2ZC->FpBPdL5QeS);
    return 0;
}

