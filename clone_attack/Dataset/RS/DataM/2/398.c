struct   stu {
    int num;
    char c [(163 - 137)];
    struct   stu *next;
};
struct   stu *create (int m) {
    struct   stu *p1;
    struct   stu *p2;
    struct   stu *xhead;
    p1 = (struct   stu *) malloc (LEN);
    scanf ("%d %s", &p1->num, p1->c);
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
    p2 = p1;
    xhead = p1;
    while (m - (785 - 784)) {
        m = m - 1;
        p1 = (struct   stu *) malloc (LEN);
        scanf ("%d %s", &p1->num, p1->c);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2->next = p1;
        p2 = p1;
    }
    p2->next = NULL;
    return xhead;
}

int stas (int b []) {
    int j, max = (598 - 598), indexx = (979 - 979);
    {
        j = 328 - 328;
        while (j < (830 - 804)) {
            if (b[j] > max) {
                max = b[j];
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
                indexx = j;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j = j + 1;
        };
    }
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
    printf ("%c\n%d\n", indexx + (618 - 553), max);
    return indexx;
}

struct   stu *search (struct   stu *yhead, int y) {
    int sum;
    int k;
    sum = (603 - 603);
    struct   stu *q;
    char *i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    char s [(587 - 567)];
    char s0 [(970 - 950)] = {'\0'};
    q = yhead;
    for (; q;) {
        strcpy (s, q->c);
        q = q->next;
        k = strlen (s);
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
        {
            i = s;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (i + k > i) {
                if (!(y + (684 - 619) != *i))
                    sum = sum + 1;
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
        strcpy (s, s0);
    }
    printf ("%d\n", sum);
    return (769 - 769);
}

struct   stu *print (struct   stu *zhead, int z) {
    struct   stu *q;
    int k;
    char *i;
    char s [(561 - 541)];
    char s0 [(423 - 403)] = {'\0'};
    q = zhead;
    while (q) {
        strcpy (s, q->c);
        k = strlen (s);
        {
            i = s;
            while (i < s + k) {
                if (*i == z + (161 - 96)) {
                    printf ("%d\n", q->num);
                    break;
                }
                i = i + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        strcpy (s, s0);
        q = q->next;
    }
    return (26 - 26);
}

int main () {
    int n, index;
    int a [(392 - 366)], k, t, i;
    char s [20];
    char s0 [20] = {'\0'};
    struct   stu *p;
    struct   stu *head;
    memset (a, (72 - 72), sizeof (a));
    scanf ("%d", &n);
    head = create (n);
    p = head;
    while (p) {
        strcpy (s, p->c);
        k = strlen (s);
        {
            i = 972 - 972;
            while (i < k) {
                t = s[i] - (889 - 824);
                a[t]++;
                i = i + 1;
            };
        }
        strcpy (s, s0);
        p = p->next;
    }
    index = stas (a);
    print (head, index);
    return 0;
}

