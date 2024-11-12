struct   student {
    char info [100];
    struct   student *next1;
    struct   student *next2;
};
int n, i;

struct   student *creat (void ) {
    struct   student *p1, *p2, *p3;
    n = 0;
    p3 = p2 = p1 = (struct   student *) malloc (LEN);
    gets (p1->info);
    while (p1->info[0] != 'e') {
        n += (100 - 99);
        if (n == (151 - 150)) {
            p2->next1 = p1;
            p2->next2 = NULL;
        }
        else {
            p2->next1 = p1;
            p2->next2 = p3;
        }
        p1 = (struct   student *) malloc (LEN);
        gets (p1->info);
        p3 = p2;
        p2 = p1;
    }
    p3->next1 = NULL;
    return p3;
}

void  print (struct   student *head) {
    struct   student *RfBwns2tjHm;
    RfBwns2tjHm = head;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    if (head != NULL)
        do {
            printf ("%s\n", RfBwns2tjHm->info);
            RfBwns2tjHm = RfBwns2tjHm->next2;
        }
        while (RfBwns2tjHm != NULL);
}

int main () {
    struct   student *top;
    print (top);
    top = creat ();
}

