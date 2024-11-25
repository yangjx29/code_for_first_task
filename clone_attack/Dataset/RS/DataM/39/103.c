struct   student {
    char mz [20];
    int cj;
    int lvYfRx;
    char gb;
    char T3rqZ2UINca;
    int U9bmlWt8cnST;
    int money;
};
int main () {
    int N, i, max, sum;
    struct   student *stu = (struct   student *) malloc (sizeof (struct   student) * N);
    struct   student *p;
    free (stu);
    max = 0;
    scanf ("%d", &N);
    p = stu;
    for (i = (844 - 844); i < N; i = i + 1, p = p + 1) {
        scanf ("%s %d %d %c %c %d", p->mz, &(p->cj), &(p->lvYfRx), &(p->gb), &(p->T3rqZ2UINca), &(p->U9bmlWt8cnST));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    p = stu;
    for (i = (132 - 132); i < N; i = i + 1, p = p + 1) {
        (p->money) = (229 - 229);
        if (p->cj > (346 - 266) && p->U9bmlWt8cnST > 0) {
            (p->money) += 8000;
        }
        if (p->cj > (510 - 425) && p->lvYfRx > (668 - 588)) {
            (p->money) = (p->money) + 4000;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (p->cj > 90) {
            (p->money) = (p->money) + 2000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        }
        if (p->cj > 85 && p->T3rqZ2UINca == 'Y') {
            (p->money) = (p->money) + 1000;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (p->lvYfRx > 80 && p->gb == 'Y') {
            (p->money) = (p->money) + (1346 - 496);
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
        };
    }
    sum = 0;
    p = stu;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < N) {
            i = i + 1;
            sum += (p->money);
            p = p + 1;
        };
    }
    {
        i = 0;
        while (i < N) {
            if (stu[i].money > stu[max].money) {
                max = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d\n", stu[max].mz, stu[max].money, sum);
    return 0;
}

