struct   S {
    char xuehao [(908 - 708)];
    char K6OM9qnzt2Kf [200];
    char xingbie;
    int nianling;
    float defen;
    char dizhi [200];
    struct   S *next;
};
int main () {
    struct   S *XkvzECrW;
    struct   S *HZLlBHzumcg;
    struct   S *T1osEdY4hXr;
    T1osEdY4hXr = (struct   S *) malloc (sizeof (struct   S));
    XkvzECrW = T1osEdY4hXr;
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
    scanf ("%s", XkvzECrW->xuehao);
    T1osEdY4hXr->next = NULL;
    for (; XkvzECrW->xuehao[(715 - 715)] != 'e';) {
        scanf ("%s %c%d%f %s", XkvzECrW->K6OM9qnzt2Kf, &XkvzECrW->xingbie, &XkvzECrW->nianling, &XkvzECrW->defen, XkvzECrW->dizhi);
        HZLlBHzumcg = (struct   S *) malloc (sizeof (struct   S));
        HZLlBHzumcg->next = XkvzECrW;
        XkvzECrW = HZLlBHzumcg;
        scanf ("%s", XkvzECrW->xuehao);
    }
    for (; XkvzECrW->next != NULL;) {
        printf ("%s %s %c %d %g %s\n", XkvzECrW->next->xuehao, XkvzECrW->next->K6OM9qnzt2Kf, XkvzECrW->next->xingbie, XkvzECrW->next->nianling, XkvzECrW->next->defen, XkvzECrW->next->dizhi);
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
        XkvzECrW = XkvzECrW->next;
    }
    return 0;
}

