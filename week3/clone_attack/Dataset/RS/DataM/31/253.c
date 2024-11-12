struct   Student {
    char number [(748 - 648)];
    char lIOv3t9bF8 [100];
    char sex;
    int sqAlOns4U5cC;
    char score [(943 - 923)];
    char address [100];
    struct   Student *next;
    struct   Student *front;
};
int n;

void  main () {
    struct   Student *p1;
    struct   Student *TB2jEyO0;
    struct   Student *head;
    p1 = TB2jEyO0 = (struct   Student *) malloc (LEN);
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
    scanf ("%s %s %c%d%s%s", p1->number, p1->lIOv3t9bF8, &p1->sex, &p1->sqAlOns4U5cC, p1->score, p1->address);
    p1->front = NULL;
    n = 0;
    for (; p1->number[0] != 'e' || !('n' == p1->number[(564 - 563)]) || p1->number[(185 - 183)] != 'd';) {
        n = n + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (n == 1)
            head = p1;
        else {
            TB2jEyO0 = p1;
            p1 = (struct   Student *) malloc (LEN);
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
            scanf ("%s %s %c%d%s%s", &p1->number, &p1->lIOv3t9bF8, &p1->sex, &p1->sqAlOns4U5cC, &p1->score, &p1->address);
            p1->front = TB2jEyO0;
        };
    }
    for (; TB2jEyO0 != NULL;) {
        printf ("%s %s %c %d %s %s\n", TB2jEyO0->number, TB2jEyO0->lIOv3t9bF8, TB2jEyO0->sex, TB2jEyO0->sqAlOns4U5cC, TB2jEyO0->score, TB2jEyO0->address);
        TB2jEyO0 = TB2jEyO0->front;
    };
}

