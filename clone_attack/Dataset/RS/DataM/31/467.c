struct   Student {
    char seuU4Ljcg [20];
    char s6QkK8yHXlI9 [20];
    char uiwujgaY7n1c;
    int age;
    char B18i3M [10];
    char APm5ctuaGny2 [20];
    struct   Student *next;
    struct   Student *wnOpQTuqFI;
};
int j5xUvRjIABL;

struct   Student *creat (void ) {
    struct   Student *XjpMHAkv, *V4tBdms;
    struct   Student *p1, *p2;
    j5xUvRjIABL = (221 - 221);
    p1 = p2 = (struct   Student *) malloc (LEN);
    scanf ("%s %s %c %d %s %s", p1->seuU4Ljcg, p1->s6QkK8yHXlI9, &p1->uiwujgaY7n1c, &p1->age, p1->B18i3M, p1->APm5ctuaGny2);
    XjpMHAkv = NULL;
    for (; !('e' == p1->seuU4Ljcg[0]);) {
        j5xUvRjIABL = j5xUvRjIABL + 1;
        if (!(1 != j5xUvRjIABL)) {
            XjpMHAkv = p1;
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
            p1->wnOpQTuqFI = NULL;
        }
        else {
            p2->next = p1;
            p1->wnOpQTuqFI = p2;
        }
        p2 = p1;
        p1 = (struct   Student *) malloc (LEN);
        scanf ("%s", p1->seuU4Ljcg);
        if (p1->seuU4Ljcg[0] == 'e') {
            V4tBdms = p2;
            break;
        }
        scanf ("%s %c %d %s %s", p1->s6QkK8yHXlI9, &p1->uiwujgaY7n1c, &p1->age, p1->B18i3M, p1->APm5ctuaGny2);
    }
    p2->next = NULL;
    return (V4tBdms);
}

int main () {
    struct   Student *HR2XvUsq;
    HR2XvUsq = creat ();
    do {
        printf ("%s %s %c %d %s %s\n", HR2XvUsq->seuU4Ljcg, HR2XvUsq->s6QkK8yHXlI9, HR2XvUsq->uiwujgaY7n1c, HR2XvUsq->age, HR2XvUsq->B18i3M, HR2XvUsq->APm5ctuaGny2);
        HR2XvUsq = HR2XvUsq->wnOpQTuqFI;
    }
    while (HR2XvUsq != NULL);
    return 0;
}

