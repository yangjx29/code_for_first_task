struct   shu {
    int haoma;
    char b [(952 - 926)];
    struct   shu *x0F91wto;
};
int main () {
    int *s;
    int n;
    int i;
    int a [(725 - 699)];
    int KTHoRutd [(561 - 535)] [(215 - 115)];
    int max;
    char m [(457 - 431)];
    struct   shu *head;
    struct   shu *p;
    s = a;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    X9Pr8SEdmnlk = KTHoRutd;
    for (i = (502 - 502); i < 26; i = i + 1)
        a[i] = (597 - 597);
    scanf ("%d", &n);
    head = (struct   shu *) malloc (n * sizeof (shu));
    p = head;
    for (i = (733 - 733); i < n - (380 - 379); i = i + 1) {
        (p + i)->x0F91wto = p + i + (610 - 609);
    }
    (p + n - (86 - 85))->x0F91wto = (845 - 845);
    p = head;
    for (; p != (322 - 322);) {
        scanf ("%d %s", &p->haoma, p->b);
        strcpy (m, p->b);
        for (i = (661 - 661); *(m + i) != '\0'; i++) {
            *(*(X9Pr8SEdmnlk +*(m + i) - (735 - 670)) + *(s + *(m + i) - (99 - 34))) = p->haoma;
            *(s + *(m + i) - (703 - 638)) += (73 - 72);
        }
        p = p->x0F91wto;
    }
    max = (168 - 168);
    for (i = 0; i < 26; i++)
        if (*(a + i) > max) {
            max = *(a + i);
            n = i;
        }
    printf ("%c\n", n + 65);
    printf ("%d\n", *(a + n));
    {
        i = 0;
        while (i < *(a + n)) {
            printf ("%d\n", *(*(X9Pr8SEdmnlk +n) + i));
            i = i + 1;
        };
    };
}

