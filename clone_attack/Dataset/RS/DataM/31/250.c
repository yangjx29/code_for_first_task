struct   student {
    char CsbHleZBkzw [100];
    char name [100];
    char BgacXdOmVW5;
    int age;
    char uh0DpUyWcN [20];
    char a081dlFTQP67 [100];
    struct   student *nest;
    struct   student *KhJEgWG;
};
void  main () {
    int oeAxzq0 = (766 - 766);
    struct   student *LXhIzGEQ;
    struct   student *p2;
    LXhIzGEQ = p2 = (struct   student *) malloc (LEN);
    LXhIzGEQ->KhJEgWG = NULL;
    scanf ("%s", &LXhIzGEQ->CsbHleZBkzw);
    for (; !('e' == LXhIzGEQ->CsbHleZBkzw[0]) || !('n' == LXhIzGEQ->CsbHleZBkzw[1]) || LXhIzGEQ->CsbHleZBkzw[2] != 'd';) {
        oeAxzq0 = oeAxzq0 + 1;
        scanf ("%s %c%d%s%s", &LXhIzGEQ->name, &LXhIzGEQ->BgacXdOmVW5, &LXhIzGEQ->age, &LXhIzGEQ->uh0DpUyWcN, &LXhIzGEQ->a081dlFTQP67);
        p2->nest = LXhIzGEQ;
        p2 = LXhIzGEQ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        LXhIzGEQ = (struct   student *) malloc (LEN);
        LXhIzGEQ->KhJEgWG = p2;
        scanf ("%s", &LXhIzGEQ->CsbHleZBkzw);
    }
    p2->nest = NULL;
    for (; p2 != NULL;) {
        printf ("%s %s %c %d %s %s\n", p2->CsbHleZBkzw, p2->name, p2->BgacXdOmVW5, p2->age, p2->uh0DpUyWcN, p2->a081dlFTQP67);
        p2 = p2->KhJEgWG;
    };
}

