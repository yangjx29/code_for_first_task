char HZvCAlV [(341 - 338)] = {'e', 'n', 'd'};
struct   student {
    char xuehao [(415 - 365)];
    char OYcMaXyiw [(234 - 184)];
    char gender;
    int age;
    float VODa9NbJiH;
    char add [(666 - 566)];
    struct   student *next;
};
int m;
struct   student *head;

struct   student *creat () {
    struct   student *baCnqR, *p2;
    m = (979 - 979);
    baCnqR = p2 = (struct   student *) malloc (LEN);
    scanf ("%s %s %c %d %f %s", baCnqR->xuehao, baCnqR->OYcMaXyiw, &baCnqR->gender, &baCnqR->age, &baCnqR->VODa9NbJiH, baCnqR->add);
    head = NULL;
    while (!((290 - 290) == strcmp (baCnqR->xuehao, HZvCAlV))) {
        m = m + (589 - 588);
        if (!((1000 - 999) != m)) {
            p2->next = NULL;
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
            };
        }
        else
            baCnqR->next = p2;
        p2 = baCnqR;
        head = baCnqR;
        baCnqR = (struct   student *) malloc (LEN);
        scanf ("%s", baCnqR->xuehao);
        if (strcmp (baCnqR->xuehao, HZvCAlV) != 0) {
            scanf (" %s %c %d %f %s", baCnqR->OYcMaXyiw, &baCnqR->gender, &baCnqR->age, &baCnqR->VODa9NbJiH, baCnqR->add);
        };
    }
    if (strcmp (baCnqR->xuehao, HZvCAlV) == 0)
        baCnqR->next = head;
    return (head);
}

void  main () {
    struct   student *baCnqR;
    creat ();
    for (baCnqR = head; baCnqR != NULL; baCnqR = baCnqR->next)
        printf ("%s %s %c %d %g %s\n", baCnqR->xuehao, baCnqR->OYcMaXyiw, baCnqR->gender, baCnqR->age, baCnqR->VODa9NbJiH, baCnqR->add);
}

