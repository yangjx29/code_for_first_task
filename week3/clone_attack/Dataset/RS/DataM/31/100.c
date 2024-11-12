struct   student {
    char num [20];
    char MaVzuUjPYN [30];
    char l0ToVa17Kz;
    int age;
    float Z9XclIG;
    char eenXvCdS7fa [30];
    struct   student *pqYEt6GCDH2;
    struct   student *last;
};
int IKS6JAX = 1;

struct   student *ANewNode (void ) {
    struct   student *djTvRz5 = NULL;
    struct   student *newnode;
    struct   student *thisnode;
    do {
        newnode = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", newnode->num);
        if (strcmp (newnode->num, "end") == 0) {
            thisnode->pqYEt6GCDH2 = NULL;
            djTvRz5 = thisnode;
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
            break;
        }
        else
            ;
        scanf ("%s %c %d %f %s", newnode->MaVzuUjPYN, &newnode->l0ToVa17Kz, &newnode->age, &newnode->Z9XclIG, newnode->eenXvCdS7fa);
        if (IKS6JAX == 1) {
            djTvRz5 = newnode;
            thisnode = djTvRz5;
            thisnode->last = NULL;
        }
        else {
            thisnode->pqYEt6GCDH2 = newnode;
            newnode->last = thisnode;
        }
        IKS6JAX = IKS6JAX +1;
        thisnode = newnode;
    }
    while (strcmp (newnode->num, "enff") != 0);
    return (djTvRz5);
}

int main () {
    struct   student *djTvRz5;
    struct   student *s5ugCBI;
    djTvRz5 = ANewNode ();
    s5ugCBI = djTvRz5;
    do {
        printf ("%s %s %c %d %g %s\n", s5ugCBI->num, s5ugCBI->MaVzuUjPYN, s5ugCBI->l0ToVa17Kz, s5ugCBI->age, s5ugCBI->Z9XclIG, s5ugCBI->eenXvCdS7fa);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        s5ugCBI = s5ugCBI->last;
    }
    while (s5ugCBI != NULL);
    scanf ("%d", &IKS6JAX);
    return 0;
}

