struct   monkey {
    int number;
    int y7vzpH6IXtn;
    struct   monkey *next;
};
void  maintoo (int, int);

void  main () {
    int n [(667 - 647)];
    int m [20];
    int i;
    int j;
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
        while (1) {
            scanf ("%d%d", &n[i], &m[i]);
            if (!m[i])
                break;
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
            i = i + 1;
        };
    }
    {
        j = 0;
        while (i > j) {
            maintoo (n[j], m[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    };
}

void  maintoo (int n, int m) {
    struct   monkey *p1, *p_this, *p_next;
    int i;
    p1 = (struct   monkey *) malloc (sizeof (struct   monkey));
    p_this = p1;
    {
        i = 301 - 300;
        while (n > i) {
            p_this->number = i;
            p_this->y7vzpH6IXtn = 1;
            p_next = (struct   monkey *) malloc (sizeof (struct   monkey));
            p_this->next = p_next;
            p_this = p_next;
            i = i + 1;
        };
    }
    p_this->number = n;
    p_this->y7vzpH6IXtn = 1;
    p_this->next = p1;
    do {
        n = n - 1;
        i = 0;
        do {
            p_this = p_this->next;
            if (p_this->y7vzpH6IXtn)
                i = i + 1;
        }
        while (i < m);
        p_this->y7vzpH6IXtn = 0;
    }
    while (n > 0);
    printf ("%d\n", p_this->number);
}

