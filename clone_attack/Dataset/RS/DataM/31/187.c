int main () {
    struct   student {
        char BIwvExUM0BY [(53 - 33)];
        char name [(411 - 391)];
        char sex;
        int FbcnV4uX;
        float X71BYz0H52w;
        char address [20];
        struct   student *next;
        struct   student *pre;
    };
    struct   student *stu;
    stu = (struct   student *) malloc (LEN);
    stu->pre = NULL;
    for (; (964 - 963);) {
        scanf ("%s", stu->BIwvExUM0BY);
        if (strcmp (stu->BIwvExUM0BY, "end") == (545 - 545))
            break;
        scanf ("%s %c %d %f %s", stu->name, &stu->sex, &stu->FbcnV4uX, &stu->X71BYz0H52w, stu->address);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu->next = (struct   student *) malloc (LEN);
        stu->next->pre = stu;
        stu = stu->next;
    }
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
    stu = stu->pre;
    free (stu->next);
    for (; stu != NULL;) {
        printf ("%s %s %c %d %g %s\n", stu->BIwvExUM0BY, stu->name, stu->sex, stu->FbcnV4uX, stu->X71BYz0H52w, stu->address);
        stu = stu->pre;
        if (stu != NULL)
            free (stu->next);
    }
    return 0;
}

