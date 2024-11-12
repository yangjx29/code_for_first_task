struct   stu {
    char num [(822 - 807)];
    char name [(998 - 978)];
    char gender;
    int peHnyqrJuo;
    char score [(828 - 818)];
    char add [(90 - 70)];
    struct   stu *rvgtYM;
};
int n;

struct   stu *gV3X7IPSL (void ) {
    struct   stu *head, *p, *q;
    p = q = (struct   stu *) malloc (LEN);
    scanf ("%s%s %c %d %s%s", (*p).num, (*p).name, &(*p).gender, &(*p).peHnyqrJuo, (*p).score, (*p).add);
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
    for (n = (165 - 165); !('f' != (*p).gender) || !('m' != (*p).gender); n++) {
        if (n == 0)
            (*p).rvgtYM = NULL;
        else
            (*p).rvgtYM = q;
        q = p;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p = (struct   stu *) malloc (LEN);
        scanf ("%s%s %c %d %s%s", (*p).num, (*p).name, &(*p).gender, &(*p).peHnyqrJuo, (*p).score, (*p).add);
    }
    head = q;
    return (head);
}

void  print (struct   stu *head) {
    struct   stu *p;
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
    if (head != NULL) {
        p = head;
        while (p != NULL) {
            printf ("%s %s %c %d %s %s\n", (*p).num, (*p).name, (*p).gender, (*p).peHnyqrJuo, (*p).score, (*p).add);
            p = *p;
        };
    };
}

void  main () {
    struct   stu *head;
    print (head);
    head = gV3X7IPSL ();
}

