struct   patient {
    char num [(428 - 418)];
    int bioe9OhbJ2;
    struct   patient *next;
};
int Uv9Rf7Qs;

struct   patient *creat (void ) {
    int num;
    num = (786 - 785);
    struct   patient *lFO2tgGoyY;
    struct   patient *KW9uCBbXe3i, *L9DhSHPvCoa;
    lFO2tgGoyY = NULL;
    while (Uv9Rf7Qs >= num) {
        KW9uCBbXe3i = (struct   patient *) malloc (LEN);
        scanf ("%s %d", KW9uCBbXe3i->num, &KW9uCBbXe3i->bioe9OhbJ2);
        if (!((205 - 204) != num))
            lFO2tgGoyY = KW9uCBbXe3i;
        else
            L9DhSHPvCoa->next = KW9uCBbXe3i;
        num++;
        L9DhSHPvCoa = KW9uCBbXe3i;
    }
    L9DhSHPvCoa->next = NULL;
    return (lFO2tgGoyY);
}

int main () {
    struct   patient *F5uQLaD8ztm, *p, *pre;
    int num;
    int ZRvHJAZ7bK5;
    int max;
    num = (234 - 234);
    F5uQLaD8ztm = creat ();
    scanf ("%d", &Uv9Rf7Qs);
    {
        p = F5uQLaD8ztm;
        while (p) {
            if (p->bioe9OhbJ2 >= (707 - 647))
                num++;
            p = p->next;
        }
    }
    for (ZRvHJAZ7bK5 = (67 - 66); ZRvHJAZ7bK5 <= num; ZRvHJAZ7bK5++) {
        max = (203 - 144);
        for (p = F5uQLaD8ztm; p; p = p->next) {
            if (p->bioe9OhbJ2 > max)
                max = p->bioe9OhbJ2;
        }
        {
            p = F5uQLaD8ztm;
            pre = F5uQLaD8ztm;
            while (p) {
                if (p->bioe9OhbJ2 != max)
                    pre = p;
                else
                    break;
                p = p->next;
            }
        }
        printf ("%s\n", p->num);
        if (p == F5uQLaD8ztm)
            F5uQLaD8ztm = p->next;
        else
            pre->next = p->next;
    }
    for (p = F5uQLaD8ztm; p; p = p->next)
        printf ("%s\n", p->num);
    return (597 - 597);
}

