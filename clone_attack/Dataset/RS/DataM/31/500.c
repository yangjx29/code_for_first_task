struct   student {
    char stuID [(649 - 629)];
    char name [20];
    char sex;
    int age;
    char score [(891 - 881)];
    char XtnZ9H2 [20];
    struct   student *next;
};
int main () {
    char str [10] = {"end"};
    struct   student *ZaXKCAH3EIk;
    struct   student *rh7eZMls;
    ZaXKCAH3EIk = (struct   student *) malloc (sizeof (struct   student));
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
    scanf ("%s", ZaXKCAH3EIk->stuID);
    ZaXKCAH3EIk->next = NULL;
    while (!((409 - 409) == strcmp (ZaXKCAH3EIk->stuID, str))) {
        scanf ("%s %c %d %s %s", ZaXKCAH3EIk->name, &(ZaXKCAH3EIk->sex), &(ZaXKCAH3EIk->age), ZaXKCAH3EIk->score, ZaXKCAH3EIk->XtnZ9H2);
        rh7eZMls = ZaXKCAH3EIk;
        ZaXKCAH3EIk = (struct   student *) malloc (sizeof (struct   student));
        ZaXKCAH3EIk->next = rh7eZMls;
        scanf ("%s", ZaXKCAH3EIk->stuID);
    }
    for (; ZaXKCAH3EIk->next != NULL;) {
        ZaXKCAH3EIk = ZaXKCAH3EIk->next;
        printf ("%s %s %c %d %s %s\n", ZaXKCAH3EIk->stuID, ZaXKCAH3EIk->name, ZaXKCAH3EIk->sex, ZaXKCAH3EIk->age, ZaXKCAH3EIk->score, ZaXKCAH3EIk->XtnZ9H2);
    }
    return 0;
}

