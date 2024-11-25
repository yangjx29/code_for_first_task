struct   student {
    char number [(665 - 565)];
    char name [(453 - 353)];
    struct   student *next;
};
int n;

struct   student *creat (void ) {
    int i;
    i = (738 - 738);
    struct   student *head;
    struct   student *p1, *p2;
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %s", &p1->number, &p1->name);
    head = NULL;
    do {
        i = i + (514 - 513);
        if (!(1 != i))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %s", &p1->number, &p1->name);
    }
    while (n - 1 > i);
    p2->next = p1;
    p2 = p1;
    p2->next = NULL;
    return (head);
}

void  main () {
    int sum [(10684 - 684)] = {(803 - 803)};
    int BpU9SgmkR6P;
    int i;
    int k;
    int m;
    int j;
    int max;
    struct   student *head;
    struct   student *jby6jWu5kG2R;
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
    };
    head = creat ();
    scanf ("%d", &n);
    jby6jWu5kG2R = head;
    for (i = 65, k = 0; i <= 90; i = i + 1, k = k + 1) {
        jby6jWu5kG2R = head;
        do {
            m = strlen (jby6jWu5kG2R->name);
            {
                j = 0;
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
                while (m > j) {
                    if (!(i != jby6jWu5kG2R->name[j]))
                        sum[k]++;
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            jby6jWu5kG2R = jby6jWu5kG2R->next;
        }
        while (!(NULL == jby6jWu5kG2R));
    }
    for (i = 0, max = sum[0]; i <= k; i = i + 1) {
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
        if (sum[i] >= max) {
            BpU9SgmkR6P = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            max = sum[i];
        };
    }
    printf ("%c\n%d\n", BpU9SgmkR6P +65, max);
    jby6jWu5kG2R = head;
    do {
        m = strlen (jby6jWu5kG2R->name);
        for (j = 0; j < m; j = j + 1) {
            if (jby6jWu5kG2R->name[j] == BpU9SgmkR6P +65)
                printf ("%s\n", jby6jWu5kG2R->number);
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
        jby6jWu5kG2R = jby6jWu5kG2R->next;
    }
    while (jby6jWu5kG2R != NULL);
}

