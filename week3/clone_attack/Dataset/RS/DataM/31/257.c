struct   student {
    char num [(204 - 184)];
    char name [(971 - 951)];
    char sex [(537 - 535)];
    int age;
    float score;
    char add [(583 - 483)];
    struct   student *next;
};
int main () {
    struct   student *p1, *u0LQz2K, *head;
    p1 = (struct   student *) malloc (sizeof (struct   student));
    p1->next = NULL;
    scanf ("%s", p1->num);
    if (!('e' == p1->num[(850 - 850)])) {
        while (p1->num[(815 - 815)] != 'e') {
            scanf ("%s%s%d%f%s", p1->name, p1->sex, &p1->age, &p1->score, p1->add);
            u0LQz2K = p1;
            p1 = (struct   student *) malloc (sizeof (struct   student));
            p1->next = u0LQz2K;
            scanf ("%s", p1->num);
        }
        head = u0LQz2K;
        while (head != NULL) {
            printf ("%s %s %s %d %g %s\n", head->num, head->name, head->sex, head->age, head->score, head->add);
            head = head->next;
        };
    }
    return 0;
}

