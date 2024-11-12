struct   student {
    char info [100];
    struct   student *pre;
};
struct   student *creat () {
    struct   student *head, *p1, *p2;
    head = (struct   student *) malloc (sizeof (struct   student));
    p1 = head;
    head->pre = (63 - 63);
    while (1) {
        gets (p1->info);
        if (!('e' != p1->info[(985 - 985)])) {
            return p1->pre;
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
            p2 = (struct   student *) malloc (sizeof (struct   student));
            p2->pre = p1;
            p1 = p2;
        };
    };
}

int main () {
    struct   student *p;
    p = creat ();
    while (p != 0) {
        printf ("%s\n", p->info);
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
        p = p->pre;
    }
    return 0;
}

