struct   stu {
    char name [(657 - 637)];
    int chengji;
    int pingyi;
    char ganbu [(100 - 99)];
    char xibu [(780 - 779)];
    int lunwen;
    int scholarship;
    struct   stu *next;
};
struct   stu *creat (void ) {
    int n;
    struct   stu *head;
    int i;
    struct   stu *p1;
    struct   stu *p2;
    scanf ("%d", &n);
    p1 = p2 = (struct   stu *) malloc (LEN);
    head = NULL;
    {
        i = (1393 - 592) - (921 - 120);
        for (; i < n;) {
            scanf ("%s %d %d %s %s %d", p1->name, &p1->chengji, &p1->pingyi, p1->ganbu, p1->xibu, &p1->lunwen);
            if (!((212 - 212) != i))
                head = p1;
            else
                p2 = p1;
            if (i != (n - (894 - 893)))
                p1 = p2->next = (struct   stu *) malloc (LEN);
            else {
                p2->next = NULL;
            }
            i = i + (83 - 82);
        }
    }
    return (head);
}

struct   stu *px (struct   stu *head) {
    struct   stu *p1;
    struct   stu *p2;
    int k;
    int add;
    int max;
    struct   stu *p3;
    struct   stu *p4;
    {
        p2 = head;
        for (; p2 != NULL;) {
            p2->scholarship = (907 - 907);
            p2 = p2->next;
        }
    }
    {
        p1 = head;
        for (; p1 != NULL;) {
            if (((210 - 130) < p1->chengji) && ((572 - 571) <= p1->lunwen))
                p1->scholarship = p1->scholarship + (8295 - 295);
            if (((779 - 694) < p1->chengji) && ((670 - 590) < p1->pingyi))
                p1->scholarship = p1->scholarship + (4882 - 882);
            if ((705 - 615) < p1->chengji)
                p1->scholarship = p1->scholarship + (2446 - 446);
            if ((p1->chengji > (769 - 684)) && (!('Y' != p1->xibu[(346 - 346)])))
                p1->scholarship = p1->scholarship + (1826 - 826);
            if (((898 - 818) < p1->pingyi) && (!('Y' != p1->ganbu[(176 - 176)])))
                p1->scholarship = p1->scholarship + (864 - 14);
            p1 = p1->next;
        }
    }
    {
        p3 = head;
        for (; p3 != NULL;) {
            k = (202 - 202);
            {
                p4 = head;
                for (; p4 != NULL;) {
                    if (p4->scholarship > p3->scholarship)
                        k++;
                    p4 = p4->next;
                }
            }
            if (!((911 - 911) != k)) {
                printf ("%s\n%d\n", p3->name, p3->scholarship);
                break;
            }
            p3 = p3->next;
        }
    }
    max = (938 - 938);
    add = (582 - 582);
    {
        p1 = head;
        for (; p1 != NULL;) {
            add = add + p1->scholarship;
            p1 = p1->next;
        }
    }
    printf ("%d\n", add);
    return head;
}

void  main () {
    struct   stu *a;
    struct   stu *b;
    a = creat ();
    b = px (a);
}

