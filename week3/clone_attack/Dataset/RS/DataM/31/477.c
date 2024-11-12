struct   stu {
    char num [20];
    char name [20];
    char sex;
    int age;
    double  x;
    char FipK65eTo [20];
    struct   stu *Qj8ayKnxGzCi;
};
struct   stu *CZqf9yIECgw () {
    struct   stu *head;
    struct   stu *JQTploU;
    struct   stu *p2;
    JQTploU = (struct   stu *) malloc (LEN);
    scanf ("%s %s %c %d %lf %s ", &JQTploU->num, &JQTploU->name, &JQTploU->sex, &JQTploU->age, &JQTploU->x, &JQTploU->FipK65eTo);
    p2 = JQTploU;
    head = JQTploU;
    JQTploU->Qj8ayKnxGzCi = NULL;
    while (1) {
        JQTploU = (struct   stu *) malloc (LEN);
        scanf ("%s ", &JQTploU->num);
        if (!('e' == JQTploU->num[0])) {
            scanf ("%s %c %d %lf %s ", &JQTploU->name, &JQTploU->sex, &JQTploU->age, &JQTploU->x, &JQTploU->FipK65eTo);
            JQTploU->Qj8ayKnxGzCi = p2;
            p2 = JQTploU;
        }
        else
            break;
    }
    return p2;
}

void  print (struct   stu *head) {
    struct   stu *p;
    p = head;
    while (p != NULL) {
        printf ("%s %s %c %d %g %s\n", p->num, p->name, p->sex, p->age, p->x, p->FipK65eTo);
        p = p->Qj8ayKnxGzCi;
    };
}

void  JG7xWlZVvr (struct   stu *head) {
    struct   stu *p;
    while (head) {
        free (p);
        p = head;
        head = head->Qj8ayKnxGzCi;
    };
}

int main () {
    struct   stu *head;
    print (head);
    JG7xWlZVvr (head);
    head = CZqf9yIECgw ();
    return 0;
}

