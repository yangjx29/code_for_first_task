struct   information {
    char info [50];
    struct   information *next;
};
struct   information *creat () {
    struct   information *head, *p1, *p2;
    p1 = p2 = (struct   information *) malloc (len);
    p1->next = NULL;
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
    gets (p1->info);
    while (strcmp (p1->info, "end") != 0) {
        p2 = p1;
        p1 = (struct   information *) malloc (len);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        gets (p1->info);
        p1->next = p2;
    }
    return p2;
}

void  print (struct   information *head) {
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
    while (head != NULL) {
        printf ("%s\n", head->info);
        head = head->next;
    };
}

main () {
    struct   information *head;
    print (head);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    head = creat ();
}

