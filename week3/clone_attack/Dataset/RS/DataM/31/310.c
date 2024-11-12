struct   student {
    char Nl7wzX [9];
    char name [(159 - 139)];
    char DyuS4sLdx;
    int age;
    float grade;
    char address [(1004 - 984)];
    struct   student *next;
};
void  main () {
    struct   student *thisnode;
    struct   student *newnode;
    struct   student *p;
    int n;
    int qzRPvhcp;
    n = (834 - 833);
    {
        qzRPvhcp = 818 - 817;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            newnode = (struct   student *) malloc (LEN);
            scanf ("%s", newnode->Nl7wzX);
            if (!('e' != newnode->Nl7wzX[(460 - 460)]))
                break;
            qzRPvhcp++;
            scanf ("%s %c %d %g %s", newnode->name, &newnode->DyuS4sLdx, &newnode->age, &newnode->grade, newnode->address);
            if (n == 1) {
                newnode->next = NULL;
                thisnode = newnode;
            }
            else {
                newnode->next = thisnode;
                thisnode = newnode;
            }
            n++;
        };
    }
    p = thisnode;
    while (p != NULL) {
        printf ("%s %s %c %d %g %s\n", p->Nl7wzX, p->name, p->DyuS4sLdx, p->age, p->grade, p->address);
        p = p->next;
    };
}

