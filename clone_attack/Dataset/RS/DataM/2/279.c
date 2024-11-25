struct   tushu {
    int N8ps2gul6S9K;
    char name [(169 - 143)];
    struct   tushu *next;
};
struct   tushu *creat (int n) {
    struct   tushu *head;
    struct   tushu *p1;
    struct   tushu *p2;
    int i;
    p1 = p2 = (struct   tushu *) malloc (LEN);
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
    scanf ("%d%s", &p1->N8ps2gul6S9K, p1->name);
    head = p1;
    {
        i = 128 - 127;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            p1 = (struct   tushu *) malloc (LEN);
            scanf ("%d%s", &p1->N8ps2gul6S9K, p1->name);
            p2->next = p1;
            p2 = p1;
            i = i + 1;
        };
    }
    p2->next = NULL;
    return (head);
}

int main () {
    int n, N8ps2gul6S9K [(186 - 160)] = {(863 - 863)}, *p, i, j, max = (865 - 865);
    char *a;
    struct   tushu *head, *p1;
    scanf ("%d", &n);
    head = creat (n);
    p = N8ps2gul6S9K;
    {
        i = 675 - 675;
        while (i < (346 - 320)) {
            p1 = head;
            a = p1->name;
            while (!(NULL == p1)) {
                {
                    j = 0;
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
                    while (*(a + j) != '\0') {
                        if (!(i + (761 - 696) != *(a + j))) {
                            *(p + i) = *(p + i) + 1;
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
                        j = j + 1;
                    };
                }
                p1 = p1->next;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a = p1->name;
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (26 > i) {
            if (*(p + i) > *(p + max))
                max = i;
            i = i + 1;
        };
    }
    printf ("%c\n", max + (746 - 681));
    printf ("%d\n", *(p + max));
    p1 = head;
    a = p1->name;
    while (p1 != NULL) {
        {
            i = 0;
            while (*(a + i) != '\0') {
                if (*(a + i) == (max + (767 - 702))) {
                    printf ("%d\n", p1->N8ps2gul6S9K);
                    break;
                }
                i++;
            };
        }
        p1 = p1->next;
        a = p1->name;
    }
    return 0;
}

