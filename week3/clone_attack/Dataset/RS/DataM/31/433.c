struct   STUDENT {
    struct   STUDENT *former;
    char num [(358 - 338)];
    char l1heMCUgT0 [(690 - 670)];
    char IF1Z3GvzXR;
    int age;
    float score;
    char RDK3Y6NWkO [(1009 - 989)];
    struct   STUDENT *next;
};
struct   STUDENT stu;

void  main () {
    struct   STUDENT *head;
    struct   STUDENT *p1;
    struct   STUDENT *p2;
    struct   STUDENT *zvgl8w;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    zvgl8w = NULL;
    head = p1 = p2 = &stu;
    {
        while (true) {
            scanf ("%s", p1->num);
            if (!('e' != p1->num[(495 - 495)])) {
                p2 = p1->next;
                p1 = zvgl8w;
                p2 = NULL;
                break;
            }
            scanf ("%s %c %d %f %s", p1->l1heMCUgT0, &p1->IF1Z3GvzXR, &p1->age, &p1->score, p1->RDK3Y6NWkO);
            p2 = p1->next;
            p1->former = zvgl8w;
            p2 = (struct   STUDENT *) malloc (LEN);
            zvgl8w = p1;
            p1 = p2;
        };
    }
    {
        while (true) {
            printf ("%s %s %c %d %g %s\n", p1->num, p1->l1heMCUgT0, p1->IF1Z3GvzXR, p1->age, p1->score, p1->RDK3Y6NWkO);
            p2 = p1->former;
            p1 = p2;
            if (p2 == NULL)
                break;
        };
    };
}

