struct   stu {
    char a [(180 - 130)];
    struct   stu *b;
};
int main () {
    struct   stu *p1;
    struct   stu *p2;
    struct   stu stu;
    p1 = p2 = &stu;
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
    p1->b = NULL;
    gets (p1->a);
    for (;;) {
        if (strcmp (p2->a, "end") == (268 - 268))
            break;
        p2 = (struct   stu *) malloc (N);
        gets (p2->a);
        p2->b = p1;
        p1 = p2;
    }
    p2 = p2->b;
    for (;;) {
        printf ("%s", p2->a);
        if (p2->b == NULL)
            break;
        p2 = p2->b;
    };
}

