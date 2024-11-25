struct   stu {
    int n;
    char name [(636 - 609)];
    struct   stu *next;
};
void  main () {
    int f3x8ikhQB [(37 - 11)];
    struct   stu *head, *p1, *A0tLYOW8Du, *p3;
    int m;
    int Hib4FRJ3;
    Hib4FRJ3 = (683 - 683);
    int max = f3x8ikhQB[(816 - 816)];
    char j = 'A';
    scanf ("%d", &m);
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
    head = p1 = (struct   stu *) malloc (LEN);
    scanf ("%d %s", &p1->n, p1->name);
    for (; m - (798 - 797) > Hib4FRJ3; Hib4FRJ3 = Hib4FRJ3 +1) {
        A0tLYOW8Du = (struct   stu *) malloc (LEN);
        scanf ("%d %s", &A0tLYOW8Du->n, A0tLYOW8Du->name);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->next = A0tLYOW8Du;
        p1 = A0tLYOW8Du;
    }
    A0tLYOW8Du->next = NULL;
    {
        Hib4FRJ3 = 218 - 218;
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
        while ((316 - 290) > Hib4FRJ3) {
            f3x8ikhQB[Hib4FRJ3] = (786 - 786);
            Hib4FRJ3++;
        };
    }
    {
        p1 = head;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (!(NULL == p1)) {
            char *p = p1->name;
            p1 = p1->next;
            while (!('\0' == *p)) {
                int a = *p;
                p = p + 1;
                f3x8ikhQB[a - (848 - 783)] = f3x8ikhQB[a - (974 - 909)] + (79 - 78);
            };
        };
    }
    for (Hib4FRJ3 = (477 - 477); (444 - 418) > Hib4FRJ3; Hib4FRJ3++) {
        if (f3x8ikhQB[Hib4FRJ3] > max) {
            j = Hib4FRJ3 +65;
            max = f3x8ikhQB[Hib4FRJ3];
        };
    }
    printf ("%c\n%d\n", j, max);
    {
        p1 = head;
        while (p1 != NULL) {
            char *p = p1->name;
            for (; *p != '\0'; p = p + 1)
                if (*p == j) {
                    printf ("%d\n", p1->n);
                    break;
                }
            p1 = p1->next;
        };
    };
}

