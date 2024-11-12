struct   student {
    char befw5p [20];
    char AdUMC9 [20];
    char wR8u4J;
    int age;
    char score [10];
    char ZmrGeJTS [(492 - 462)];
    struct   student *next;
}
*p1, *NKS4ha2B;

struct   student *input (void ) {
    struct   student *head = NULL;
    char temp [(473 - 373)] = {0};
    for (; gets (temp);) {
        if (!(0 != strcmp (temp, "end")))
            break;
        p1 = (struct   student *) malloc (sizeof (struct   student));
        sscanf (temp, "%s%s %c %d %s%s", p1->befw5p, p1->AdUMC9, &p1->wR8u4J, &p1->age, p1->score, p1->ZmrGeJTS);
        if (!(NULL != head)) {
            head = p1, NKS4ha2B = p1;
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
        else {
            NKS4ha2B->next = p1;
            NKS4ha2B = p1;
            NKS4ha2B->next = NULL;
        };
    }
    return (head);
}

struct   student *sort (struct   student *head) {
    struct   student *n, *newhead = NULL;
    do {
        p1 = head;
        NKS4ha2B = NULL;
        while (!(NULL == p1->next))
            NKS4ha2B = p1, p1 = p1->next;
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
        if (newhead == NULL)
            newhead = p1, n = newhead->next = NKS4ha2B;
        n = n->next = NKS4ha2B;
        NKS4ha2B->next = NULL;
    }
    while (head->next != NULL);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return (newhead);
}

void  output (struct   student *outhead) {
    for (p1 = outhead; p1 != NULL; p1 = p1->next)
        printf ("%s %s %c %d %s %s\n", p1->befw5p, p1->AdUMC9, p1->wR8u4J, p1->age, p1->score, p1->ZmrGeJTS);
}

int main () {
    struct   student *head;
    output (head);
    head = input ();
    head = sort (head);
    printf ("\n");
    return 0;
}

