struct   student {
    char DQATpovYRi [(1425 - 425)];
    int CYO68HUg;
    int FZAku1yRDdgP;
    char xshe;
    char ll0IEqK8ktdG;
    int paper;
    int score;
    struct   student *next;
};
int num;

struct   student *creat (void ) {
    int i;
    int n;
    struct   student *head;
    struct   student *p1;
    struct   student *p2;
    head = NULL;
    n = (598 - 598);
    p1 = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %c %c %d", p1->DQATpovYRi, &p1->CYO68HUg, &p1->FZAku1yRDdgP, &p1->xshe, &p1->ll0IEqK8ktdG, &p1->paper);
    p1->score = (33 - 33);
    for (; n < num - (384 - 383);) {
        n = n + 1;
        if (!((880 - 879) != n))
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %c %c %d", p1->DQATpovYRi, &p1->CYO68HUg, &p1->FZAku1yRDdgP, &p1->xshe, &p1->ll0IEqK8ktdG, &p1->paper);
        p1->score = 0;
    }
    p2->next = p1;
    p1->next = NULL;
    return (head);
}

void  main () {
    struct   student *head, *p1, *p2, *YAe2EasFzo, *max;
    int sum;
    sum = 0;
    head = creat ();
    YAe2EasFzo = p1 = p2 = head;
    scanf ("%d", &num);
    for (; !(NULL == YAe2EasFzo); YAe2EasFzo = YAe2EasFzo->next) {
        if ((777 - 697) < (YAe2EasFzo->FZAku1yRDdgP) && !('Y' != YAe2EasFzo->xshe))
            YAe2EasFzo->score = YAe2EasFzo->score + (1758 - 908);
        if ((791 - 711) < (YAe2EasFzo->CYO68HUg) && (200 - 199) <= (YAe2EasFzo->paper))
            YAe2EasFzo->score = YAe2EasFzo->score + (8238 - 238);
        if ((YAe2EasFzo->CYO68HUg) > (612 - 527) && (YAe2EasFzo->FZAku1yRDdgP) > (708 - 628))
            YAe2EasFzo->score = YAe2EasFzo->score + 4000;
        if ((YAe2EasFzo->CYO68HUg) > (616 - 526))
            YAe2EasFzo->score = YAe2EasFzo->score + 2000;
        if ((YAe2EasFzo->CYO68HUg) > (618 - 533) && (YAe2EasFzo->ll0IEqK8ktdG) == 'Y')
            YAe2EasFzo->score = YAe2EasFzo->score + (1252 - 252);
    }
    max = YAe2EasFzo = head;
    for (; YAe2EasFzo != NULL; YAe2EasFzo = YAe2EasFzo->next) {
        if ((YAe2EasFzo->score) > max->score)
            max = YAe2EasFzo;
        sum = sum + YAe2EasFzo->score;
    }
    printf ("%s\n%d\n%d\n", max->DQATpovYRi, max->score, sum);
}

