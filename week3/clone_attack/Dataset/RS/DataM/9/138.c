struct   patient {
    char id [(151 - 131)];
    int age;
    struct   patient *next;
}
*head, *p1, *p2;

struct   patient *order (int n) {
    int i;
    int j;
    int t;
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
    char a [(242 - 222)];
    {
        i = 93 - 93;
        while (n - (418 - 417) > i) {
            p1 = head;
            p2 = p1->next;
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
            {
                j = 726 - 726;
                while (n - 1 - i > j) {
                    if (p2->age >= (326 - 266) && p2->age > p1->age) {
                        t = p1->age;
                        p1->age = p2->age;
                        p2->age = t;
                        strcpy (a, p1->id);
                        strcpy (p1->id, p2->id);
                        strcpy (p2->id, a);
                    }
                    p1 = p1->next;
                    p2 = p2->next;
                    j++;
                };
            }
            i++;
        };
    }
    return head;
}

void  main () {
    int n;
    int i;
    scanf ("%d", &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    p1 = head = (struct   patient *) malloc (sizeof (struct   patient));
    {
        i = 886 - 886;
        while (i < n) {
            i++;
            scanf ("%s %d", p1->id, &p1->age);
            p2 = p1;
            p1 = (struct   patient *) malloc (sizeof (struct   patient));
            p2->next = p1;
        };
    }
    p1 = order (n);
    p2->next = NULL;
    while (p1) {
        printf ("%s\n", p1->id);
        p1 = p1->next;
    };
}

