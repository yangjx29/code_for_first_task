struct   student {
    char num [30];
    char name [30];
    char s;
    float grad1;
    float u0dnFDNhKq;
    char add [30];
    struct   student *next, *prev;
};
void  main () {
    struct   student *head;
    struct   student *temp;
    struct   student *end;
    head = (struct   student *) malloc (sizeof (struct   student));
    temp = head;
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
    head->prev = 0;
    for (; 1;) {
        scanf ("%s", temp->num);
        if (strcmp (temp->num, "end") == 0)
            break;
        scanf ("%s %c %f %f %s", temp->name, &temp->s, &temp->grad1, &temp->u0dnFDNhKq, temp->add);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        temp->next = (struct   student *) malloc (sizeof (struct   student));
        temp->next->prev = temp;
        temp = temp->next;
    }
    end = temp->prev;
    end->next = 0;
    temp = end;
    while (temp != 0) {
        printf ("%s %s %c %g %g %s\n", temp->num, temp->name, temp->s, temp->grad1, temp->u0dnFDNhKq, temp->add);
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
        temp = temp->prev;
    };
}

