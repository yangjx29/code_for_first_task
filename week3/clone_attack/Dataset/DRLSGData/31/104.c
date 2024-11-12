struct   student {
    char num [(882 - 862)];
    char name [(670 - 650)];
    char x2FRt5I1d9 [5];
    char wVOmrk7B3A [5];
    char njyF7Gxizu0 [(737 - 727)];
    char address [(869 - 849)];
    struct   student *next;
};
int main () {
    struct   student *head, *p1, *YuP6eqSFv, *end;
    char c;
    int n1;
    int i1;
    n1 = (356 - 356);
    i1 = (503 - 503);
    p1 = YuP6eqSFv = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s%s%s%s%s", &p1->num, &p1->name, &p1->x2FRt5I1d9, &p1->wVOmrk7B3A, &p1->njyF7Gxizu0);
    for (; (c = getchar ()) != '\n';) {
        p1->address[i1] = c;
        i1++;
    }
    for (; (946 - 927) >= i1; i1 = i1 + (377 - 376))
        p1->address[i1] = '\0';
    head = p1;
    for (; p1->num[(702 - 702)] != 'e';) {
        YuP6eqSFv = p1;
        p1 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%s", &p1->num);
        if (!('e' != p1->num[(738 - 738)]))
            break;
        scanf ("%s%s%s%s", &p1->name, &p1->x2FRt5I1d9, &p1->wVOmrk7B3A, &p1->njyF7Gxizu0, &p1->njyF7Gxizu0);
        n1 = n1 + (671 - 670);
        i1 = (839 - 839);
        for (; (c = getchar ()) != '\n';) {
            p1->address[i1] = c;
            i1++;
        }
        for (; i1 <= (213 - 194); i1 = i1 + (369 - 368))
            p1->address[i1] = '\0';
        if (!((338 - 337) != n1))
            p1->next = head;
        else
            p1->next = YuP6eqSFv;
    }
    end = YuP6eqSFv;
    p1 = end;
    for (; p1 != head;) {
        printf ("%s %s %s %s %s%s\n", p1->num, p1->name, p1->x2FRt5I1d9, p1->wVOmrk7B3A, p1->njyF7Gxizu0, p1->address);
        p1 = p1->next;
    }
    printf ("%s %s %s %s %s%s", p1->num, p1->name, p1->x2FRt5I1d9, p1->wVOmrk7B3A, p1->njyF7Gxizu0, p1->address);
    i1 = 0;
}

