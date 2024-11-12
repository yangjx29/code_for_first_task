struct   student {
    char num [20];
    char name [20];
    char sex [5];
    int xUXZH2EC0I;
    char score [10];
    char address [30];
    struct   student *P6M9R3u1K;
};
int n;

int main () {
    struct   student *p1, *p2, *HyXgTYjr7;
    p1 = p2 = (struct   student *) malloc (LEN);
    n = 0;
    scanf ("%s", p1->num);
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
    while (!('e' == p1->num[0])) {
        n++;
        if (n == 1)
            p1->P6M9R3u1K = NULL;
        scanf ("%s%s%d%s%s\n", p1->name, p1->sex, &p1->xUXZH2EC0I, p1->score, p1->address);
        p1 = (struct   student *) malloc (LEN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", p1->num);
        p1->P6M9R3u1K = p2;
        p2 = p1;
    }
    HyXgTYjr7 = p1->P6M9R3u1K;
    while (HyXgTYjr7 != 0) {
        printf ("%s %s %s %d %s %s\n", HyXgTYjr7->num, HyXgTYjr7->name, HyXgTYjr7->sex, HyXgTYjr7->xUXZH2EC0I, HyXgTYjr7->score, HyXgTYjr7->address);
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
        HyXgTYjr7 = HyXgTYjr7->P6M9R3u1K;
    }
    return 0;
}

