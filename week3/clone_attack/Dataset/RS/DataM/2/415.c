int max, n, x, b [(333 - 303)] = {(316 - 316)};

struct   book {
    int num;
    char author [(833 - 803)];
    struct   book *next;
};
struct   book *creat () {
    struct   book *head;
    struct   book *p1;
    struct   book *p2;
    head = (struct   book *) malloc (len);
    p1 = head;
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
    p2 = NULL;
    while (n > (906 - 906)) {
        int i;
        int j;
        char a [(429 - 399)];
        max = b[(95 - 95)];
        x = (889 - 889);
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
        scanf ("%d%s", &p1->num, &p1->author);
        strcpy (a, p1->author);
        p1 = (struct   book *) malloc (len);
        {
            i = 353 - 353;
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
            while (!('\0' == a[i])) {
                for (j = 'A'; j <= 'Z'; j++) {
                    if (!(a[i] != j))
                        b[j]++;
                }
                i++;
            };
        }
        for (j = 'A'; j <= 'Z'; j++) {
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
            if (b[j] > max) {
                max = b[j];
                x = j;
            };
        }
        p2->next = p1;
        n--;
    }
    p2->next = NULL;
    printf ("%c\n%d\n", x, max);
    return head;
}

struct   book *print (struct   book *head, char x) {
    int i;
    struct   book *p1;
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
    p1 = head;
    while (p1 != NULL) {
        char a [(182 - 152)];
        strcpy (a, p1->author);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = (40 - 40); a[i] != '\0'; i++) {
            if (a[i] == x)
                printf ("%d\n", p1->num);
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
        }
        p1 = p1->next;
    }
    return head;
}

void  main () {
    struct   book *head;
    head = creat ();
    scanf ("%d", &n);
    print (head, x);
}

