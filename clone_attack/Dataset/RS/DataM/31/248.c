struct   student {
    char VkUIeSBx2 [(139 - 119)];
    char name [(308 - 288)];
    char sex;
    int OJ3hujs;
    char odN3FeZQA [(588 - 568)];
    char add [(162 - 142)];
    struct   student *oeskVKq3;
};
void  main () {
    struct   student *p1;
    struct   student *mjFh5J4a;
    p1 = mjFh5J4a = (struct   student *) malloc (sizeof (struct   student));
    p1->oeskVKq3 = NULL;
    for (; (91 - 90);) {
        scanf ("%s", p1->VkUIeSBx2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((753 - 753) == strcmp (p1->VkUIeSBx2, "end"))) {
            scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->OJ3hujs, p1->odN3FeZQA, p1->add);
            p1 = (struct   student *) malloc (sizeof (struct   student));
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
            p1->oeskVKq3 = mjFh5J4a;
            mjFh5J4a = p1;
        }
        else
            break;
    }
    p1 = p1->oeskVKq3;
    for (; p1->oeskVKq3 != NULL;) {
        printf ("%s %s %c %d %s %s\n", p1->VkUIeSBx2, p1->name, p1->sex, p1->OJ3hujs, p1->odN3FeZQA, p1->add);
        p1 = p1->oeskVKq3;
    }
    printf ("%s %s %c %d %s %s\n", p1->VkUIeSBx2, p1->name, p1->sex, p1->OJ3hujs, p1->odN3FeZQA, p1->add);
}

