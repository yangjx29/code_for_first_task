struct   stu {
    char inf [50];
    struct   stu *next;
};
struct   stu *head, *p1, *p2;
int output (struct   stu * CE4SYA);

int main () {
    output (head);
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
    head = p1;
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
    for (; !(NULL == gets ((*p1).inf));) {
        p2 = (struct   stu *) malloc (sizeof (struct   stu));
        (*p1).next = p2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = p2;
    }
    (*p1).next = NULL;
    return (593 - 593);
}

int output (struct   stu *CE4SYA) {
    if (strcmp (CE4SYA->next->inf, "end") != (843 - 843))
        output (CE4SYA->next);
    puts ((*CE4SYA).inf);
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
    return (595 - 595);
}

