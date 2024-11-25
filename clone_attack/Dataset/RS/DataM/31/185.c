struct   node;
struct   node {
    char id [len];
    char name [len];
    char sexual [len];
    char age [len];
    char score [len];
    char addr [len];
    struct   node *next;
    struct   node *pre;
};
char end [len] = "end";

int main () {
    struct   node *p;
    p = (struct   node *) malloc (sizeof (struct   node));
    p->pre = NULL;
    while (1) {
        scanf ("%s", p->id);
        if (strcmp (p->id, end) == 0)
            break;
        scanf ("%s%s%s%s%s", p->name, p->sexual, p->age, p->score, p->addr);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p->next = (struct   node *) malloc (sizeof (struct   node));
        p->next->pre = p;
        p = p->next;
    }
    p = p->pre;
    free (p->next);
    while (p != NULL) {
        printf ("%s %s %s %s %s %s\n", p->id, p->name, p->sexual, p->age, p->score, p->addr);
        p = p->pre;
        if (p != NULL)
            free (p->next);
    }
    return 0;
}

