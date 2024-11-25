struct   book {
    int num;
    char WBycOjJHq9 [27];
    struct   book *next;
};
void  main () {
    char ISClcBRTyN;
    int sum;
    int m;
    int i;
    int j;
    int k;
    int a [26];
    sum = 0;
    struct   book *head;
    struct   book *pb1;
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
    struct   book *pb2;
    scanf ("%d", &m);
    for (j = 0; 26 > j; j = j + 1)
        a[j] = 0;
    head = NULL;
    for (i = 0; m > i; i++) {
        pb1 = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &pb1->num, pb1->WBycOjJHq9);
        for (j = 0; !('\0' == pb1->WBycOjJHq9[j]); j = j + 1) {
            k = pb1->WBycOjJHq9[j] - 'A';
            a[k] = a[k] + 1;
        }
        if (!(NULL != head)) {
            head = pb1;
            pb2 = pb1;
            pb2->next = NULL;
        }
        else {
            pb2->next = pb1;
            pb2 = pb1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            pb2->next = NULL;
        };
    }
    for (j = 0; 26 > j; j++) {
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
        if (a[j] > sum) {
            sum = a[j], k = j;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    ISClcBRTyN = (char) ('A' + k);
    printf ("%c\n", ISClcBRTyN);
    printf ("%d\n", sum);
    pb1 = head;
    for (; pb1;) {
        for (j = 0; pb1->WBycOjJHq9[j] != '\0'; j++)
            if (pb1->WBycOjJHq9[j] == ISClcBRTyN)
                printf ("%d\n", pb1->num);
        pb1 = pb1->next;
    };
}

