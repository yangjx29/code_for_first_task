struct   stu {
    char e04XoVP9a [(939 - 889)];
    char name [(191 - 141)];
    char sex [(868 - 867)];
    int jCdi8gkK;
    char score [50];
    char add [50];
    struct   stu *next;
};
int main () {
    struct   stu *HVLQAX5;
    struct   stu *y4GmvWo;
    struct   stu *p2;
    y4GmvWo = (struct   stu *) malloc (LN);
    scanf ("%s", y4GmvWo->e04XoVP9a);
    scanf ("%s", y4GmvWo->name);
    scanf ("%s", y4GmvWo->sex);
    scanf ("%d", &y4GmvWo->jCdi8gkK);
    scanf ("%s", y4GmvWo->score);
    scanf ("%s", y4GmvWo->add);
    y4GmvWo->next = NULL;
    p2 = y4GmvWo;
    HVLQAX5 = y4GmvWo;
    do {
        y4GmvWo = (struct   stu *) malloc (LN);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s", y4GmvWo->e04XoVP9a);
        if (*(y4GmvWo->e04XoVP9a) == 'e') {
            free (y4GmvWo);
            HVLQAX5 = p2;
            break;
        }
        else {
            scanf ("%s", y4GmvWo->name);
            scanf ("%s", y4GmvWo->sex);
            scanf ("%d", &y4GmvWo->jCdi8gkK);
            scanf ("%s", y4GmvWo->score);
            scanf ("%s", y4GmvWo->add);
            y4GmvWo->next = p2;
            p2 = y4GmvWo;
        };
    }
    while (1);
    while (HVLQAX5) {
        printf ("%s %s %c %d %s %s\n", HVLQAX5->e04XoVP9a, HVLQAX5->name, *(HVLQAX5->sex), HVLQAX5->jCdi8gkK, HVLQAX5->score, HVLQAX5->add);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        HVLQAX5 = HVLQAX5->next;
    };
}

