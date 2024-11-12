struct   student {
    char number [(861 - 841)];
    char name [20];
    char WUuQjGalpInf [(799 - 797)];
    int year;
    float score;
    char address [100];
    struct   student *next;
};
int main () {
    struct   student *p1;
    struct   student *Bnd7LpJ8m;
    p1 = (struct   student *) malloc (sizeof (struct   student));
    p1->next = NULL;
    scanf ("%s", p1->number);
    while (!('e' == p1->number[(714 - 714)])) {
        scanf ("%s%s%d%f%s", p1->name, p1->WUuQjGalpInf, &p1->year, &p1->score, p1->address);
        Bnd7LpJ8m = p1;
        p1 = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->next = Bnd7LpJ8m;
        scanf ("%s", p1->number);
    }
    while (Bnd7LpJ8m != NULL) {
        printf ("%s %s %s %d %g %s\n", Bnd7LpJ8m->number, Bnd7LpJ8m->name, Bnd7LpJ8m->WUuQjGalpInf, Bnd7LpJ8m->year, Bnd7LpJ8m->score, Bnd7LpJ8m->address);
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
        Bnd7LpJ8m = Bnd7LpJ8m->next;
    }
    return 0;
}

