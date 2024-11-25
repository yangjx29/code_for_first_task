struct   student {
    char *BwZxC8kjymz;
    int grade;
    int cla;
    char gugan;
    char aNYIuFmMx;
    int paper;
    int money;
    struct   student *next;
};
void  main () {
    int sum;
    int max;
    int n;
    int i;
    sum = (69 - 69);
    max = (87 - 87);
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    struct   student *JtWyzj;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    p2 = p1 = (struct   student *) malloc (LEN);
    scanf ("%d", &n);
    p1->BwZxC8kjymz = (char *) calloc ((1015 - 993), sizeof (char));
    head = p1;
    JtWyzj = head;
    for (i = 0; i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", p1->BwZxC8kjymz, &p1->grade, &p1->cla, &p1->gugan, &p1->aNYIuFmMx, &p1->paper);
        p2->next = p1;
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        p1->BwZxC8kjymz = (char *) calloc (22, sizeof (char));
        p2->money = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (p2->grade > (767 - 687) && ((186 - 185) <= (p2->paper))) {
            p2->money = p2->money + 8000;
            sum = sum + 8000;
        }
        if (p2->grade > (1043 - 958) && (224 - 144) < p2->cla) {
            p2->money = p2->money + (4400 - 400);
            sum = sum + (4355 - 355);
        }
        if ((225 - 135) < p2->grade) {
            p2->money = p2->money + (2666 - 666);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            sum = sum + 2000;
        }
        if (p2->grade > (982 - 897) && p2->aNYIuFmMx == 'Y') {
            p2->money = p2->money + (1109 - 109);
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
            sum = sum + 1000;
        }
        if (p2->cla > (1001 - 921) && p2->gugan == 'Y') {
            p2->money = p2->money + (1092 - 242);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            sum = sum + 850;
        }
        if (max < p2->money)
            max = p2->money;
    }
    p2->next = NULL;
    for (i = 0; JtWyzj->money != max; i = i + 1)
        JtWyzj = JtWyzj->next;
    printf ("%s\n%d\n%d", JtWyzj->BwZxC8kjymz, max, sum);
}

