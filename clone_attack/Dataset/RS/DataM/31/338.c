struct   student {
    char id [(324 - 309)];
    char name [(239 - 219)];
    char sex;
    int pkZuUH;
    char yEDelmnA7sN [(1010 - 990)];
    char dqtdsAE3 [20];
    struct   student *lp5dfz4v;
};
struct   student *vel5HxFv (void ) {
    struct   student *head;
    struct   student *lr1CJvszK;
    struct   student *p2;
    head = (struct   student *) malloc (LEN);
    lr1CJvszK = head;
    lr1CJvszK = (struct   student *) malloc (LEN);
    p2 = head;
    scanf ("%s%s %c %d %s %s", head->id, head->name, &head->sex, &head->pkZuUH, head->yEDelmnA7sN, head->dqtdsAE3);
    scanf ("%s%s %c %d %s %s", lr1CJvszK->id, lr1CJvszK->name, &lr1CJvszK->sex, &lr1CJvszK->pkZuUH, lr1CJvszK->yEDelmnA7sN, lr1CJvszK->dqtdsAE3);
    p2->lp5dfz4v = lr1CJvszK;
    p2 = lr1CJvszK;
    for (; (210 - 209);) {
        lr1CJvszK = (struct   student *) malloc (LEN);
        scanf ("%s", lr1CJvszK->id);
        if (!(0 != strcmp (lr1CJvszK->id, "end"))) {
            p2->lp5dfz4v = NULL;
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
        scanf ("%s %c %d %s %s", lr1CJvszK->name, &lr1CJvszK->sex, &lr1CJvszK->pkZuUH, lr1CJvszK->yEDelmnA7sN, lr1CJvszK->dqtdsAE3);
        p2->lp5dfz4v = lr1CJvszK;
        p2 = lr1CJvszK;
    }
    return (head);
}

int main () {
    int n;
    int i;
    int jzh0AC4;
    n = 1;
    struct   student *p;
    struct   student *lr1CJvszK;
    struct   student *p2;
    struct   student *xZsTdLi;
    p = vel5HxFv ();
    lr1CJvszK = p;
    p2 = p;
    xZsTdLi = p;
    lr1CJvszK = lr1CJvszK->lp5dfz4v;
    lr1CJvszK = lr1CJvszK->lp5dfz4v;
    p2 = p2->lp5dfz4v;
    for (; lr1CJvszK != NULL;) {
        p2->lp5dfz4v = xZsTdLi;
        xZsTdLi = p2;
        p2 = lr1CJvszK;
        lr1CJvszK = lr1CJvszK->lp5dfz4v;
    }
    p2->lp5dfz4v = xZsTdLi;
    lr1CJvszK = p2;
    p->lp5dfz4v = NULL;
    for (; lr1CJvszK != NULL;) {
        printf ("%s %s %c %d %s %s\n", lr1CJvszK->id, lr1CJvszK->name, lr1CJvszK->sex, lr1CJvszK->pkZuUH, lr1CJvszK->yEDelmnA7sN, lr1CJvszK->dqtdsAE3);
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
        lr1CJvszK = lr1CJvszK->lp5dfz4v;
    }
    return 0;
}

