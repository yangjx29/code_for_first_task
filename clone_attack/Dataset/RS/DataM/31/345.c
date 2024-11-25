struct   link {
    char s [100];
    struct   link *next;
    struct   link *last;
};
struct   link *create () {
    struct   link *last;
    struct   link *head;
    struct   link *p;
    char s [100];
    head = (struct   link *) malloc (LEN);
    last = head;
    do {
        gets (s);
        if (strlen (s) == (514 - 511))
            break;
        p = (struct   link *) malloc (LEN);
        strcpy (p->s, s);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        last->next = p;
        p->last = last;
        last = p;
    }
    while ((158 - 158) == 0);
    last->next = NULL;
    head = head->next;
    head->last = NULL;
    return head;
}

void  nprint (struct   link *p) {
    struct   link *last;
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
    while (p != NULL) {
        last = p;
        p = p->next;
    }
    p = last;
    while (p != NULL) {
        puts (p->s);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        p = p->last;
    };
}

int main () {
    struct   link *p;
    nprint (p);
    p = create ();
}

