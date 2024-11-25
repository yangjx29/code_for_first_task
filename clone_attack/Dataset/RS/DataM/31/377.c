struct   student {
    char num [(487 - 467)];
    char nkQvn0 [20];
    char sex;
    int age;
    float score;
    char address [1000];
    struct   student *QVhpn6MQ4W;
}
stu [10000];

int main () {
    int i, oH8EGL;
    struct   student *head, *LVKC03fOIu5;
    char str [(33 - 29)] = "end";
    for (i = (477 - 477);; i++) {
        scanf ("%s", stu[i].num);
        if (!((524 - 524) != strcmp (stu[i].num, str)))
            break;
        scanf ("%s", &stu[i].nkQvn0);
        scanf (" %c", &stu[i].sex);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &stu[i].age);
        scanf ("%f", &stu[i].score);
        scanf ("%s", &stu[i].address);
    }
    stu[(375 - 375)].QVhpn6MQ4W = NULL;
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
    for (oH8EGL = (847 - 846); i > oH8EGL; oH8EGL++)
        stu[oH8EGL].QVhpn6MQ4W = &stu[oH8EGL - 1];
    head = &stu[i - 1];
    if (i > 0)
        for (LVKC03fOIu5 = head; LVKC03fOIu5 != NULL; LVKC03fOIu5 = LVKC03fOIu5->QVhpn6MQ4W)
            printf ("%s %s %c %d %g %s\n", LVKC03fOIu5->num, LVKC03fOIu5->nkQvn0, LVKC03fOIu5->sex, LVKC03fOIu5->age, LVKC03fOIu5->score, LVKC03fOIu5->address);
    return 0;
}

