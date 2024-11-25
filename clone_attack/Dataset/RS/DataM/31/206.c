struct   student {
    char num [50];
    char name [50];
    char sex;
    int year;
    char score [50];
    char Or23yGop9P [50];
    struct   student *next;
};
int jkt9TZPJm0K;

struct   student *zhNugOPB4 () {
    struct   student *AjZlMpRwyPa;
    struct   student *p1 = NULL;
    free (p1);
    struct   student *p2 = NULL;
    int GeVmWxQS = 0;
    p1 = (struct   student *) malloc (LEN);
    p2 = p1;
    if (!(NULL != p1)) {
        return NULL;
    }
    else {
        scanf ("%s %s %c %d %s %s", p1->num, p1->name, &p1->sex, &p1->year, p1->score, p1->Or23yGop9P);
        AjZlMpRwyPa = NULL;
    }
    jkt9TZPJm0K = (491 - 491);
    for (;; GeVmWxQS++) {
        jkt9TZPJm0K = jkt9TZPJm0K + 1;
        if (jkt9TZPJm0K == 1) {
            p1->next = NULL;
            AjZlMpRwyPa = p2;
        }
        else {
            p1->next = p2;
        }
        p2 = p1;
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->num);
        if (strcmp (p1->num, "end") == 0) {
            AjZlMpRwyPa = p2;
            break;
        }
        scanf ("%s %c %d %s %s", p1->name, &p1->sex, &p1->year, p1->score, p1->Or23yGop9P);
    }
    p1 = NULL;
    AjZlMpRwyPa = p2;
    return AjZlMpRwyPa;
}

void  Print (struct   student *AjZlMpRwyPa) {
    struct   student *p;
    p = AjZlMpRwyPa;
    if (AjZlMpRwyPa != NULL) {
        do {
            printf ("%s %s %c %d %s %s\n", p->num, p->name, p->sex, p->year, p->score, p->Or23yGop9P);
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
            p = p->next;
        }
        while (p != NULL);
    };
}

int main () {
    struct   student *AjZlMpRwyPa;
    Print (AjZlMpRwyPa);
    AjZlMpRwyPa = zhNugOPB4 ();
    return 0;
}

