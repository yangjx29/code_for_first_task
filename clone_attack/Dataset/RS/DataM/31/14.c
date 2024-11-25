struct   stu {
    char name [20];
    char num [10];
    char x [5];
    int y;
    float f;
    char sdt4VeB7yNoS [100];
    struct   stu *next;
};
int main () {
    struct   stu *p1, *MRNAzdI5KE;
    p1 = (struct   stu *) malloc (sizeof (struct   stu));
    p1->next = 0;
    scanf ("%s", p1->num);
    while (!('e' == p1->num[0])) {
        scanf ("%s%s%d%f%s", p1->name, p1->x, &p1->y, &p1->f, p1->sdt4VeB7yNoS);
        MRNAzdI5KE = p1;
        p1 = (struct   stu *) malloc (sizeof (struct   stu));
        p1->next = MRNAzdI5KE;
        scanf ("%s", p1->num);
    }
    p1 = p1->next;
    printf ("%s %s %s %d %g %s\n", p1->num, p1->name, p1->x, p1->y, p1->f, p1->sdt4VeB7yNoS);
    while (p1->next != 0) {
        p1 = p1->next;
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
        printf ("%s %s %s %d %g %s\n", p1->num, p1->name, p1->x, p1->y, p1->f, p1->sdt4VeB7yNoS);
    }
    return 0;
}

