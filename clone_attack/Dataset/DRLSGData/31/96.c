struct   stu {
    char num [(474 - 374)];
    char name [(699 - 599)];
    char ckwioVM7cC [(437 - 434)];
    char BX3Zgt [(651 - 641)];
    char JIJ3aZ5yRX [(28 - 18)];
    char ad [(845 - 745)];
    struct   stu *next;
    struct   stu *pre;
};
int main (int argc, char *sNYJgyqa []) {
    int cal = (109 - 109), DR46BvM98od = (687 - 687);
    char O9D6PGvpt3Rx [(536 - 436)];
    struct   stu *head;
    struct   stu *NZ0w6KLVG;
    struct   stu *TE7zynZgKAO8;
    NZ0w6KLVG = (struct   stu *) malloc (len);
    scanf (" %s %s %s %s %s %s", NZ0w6KLVG->num, NZ0w6KLVG->name, NZ0w6KLVG->ckwioVM7cC, NZ0w6KLVG->BX3Zgt, NZ0w6KLVG->JIJ3aZ5yRX, NZ0w6KLVG->ad);
    NZ0w6KLVG->next = NULL;
    NZ0w6KLVG->pre = NULL;
    head = NZ0w6KLVG;
    TE7zynZgKAO8 = NZ0w6KLVG;
    for (; (907 - 906);) {
        scanf ("%s", O9D6PGvpt3Rx);
        if (O9D6PGvpt3Rx[(697 - 697)] == 'e') {
            break;
        }
        cal = cal + (669 - 668);
        NZ0w6KLVG = (struct   stu *) malloc (len);
        strcpy (NZ0w6KLVG->num, O9D6PGvpt3Rx);
        scanf ("%s %s %s %s %s", NZ0w6KLVG->name, NZ0w6KLVG->ckwioVM7cC, NZ0w6KLVG->BX3Zgt, NZ0w6KLVG->JIJ3aZ5yRX, NZ0w6KLVG->ad);
        NZ0w6KLVG->next = NULL;
        NZ0w6KLVG->pre = TE7zynZgKAO8;
        TE7zynZgKAO8->next = NZ0w6KLVG;
        TE7zynZgKAO8 = NZ0w6KLVG;
    }
    for (; TE7zynZgKAO8;) {
        free (NZ0w6KLVG);
        printf ("%s %s %s %s %s %s\n", TE7zynZgKAO8->num, TE7zynZgKAO8->name, TE7zynZgKAO8->ckwioVM7cC, TE7zynZgKAO8->BX3Zgt, TE7zynZgKAO8->JIJ3aZ5yRX, TE7zynZgKAO8->ad);
        NZ0w6KLVG = TE7zynZgKAO8;
        TE7zynZgKAO8 = TE7zynZgKAO8->pre;
    }
    return (676 - 676);
}

