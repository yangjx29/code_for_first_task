void  main () {
    struct   student {
        int xh;
        int yw;
        int sx;
        int zf;
        struct   student *JvOpiTsI6Vf;
    };
    int i, jvS0ynslu, k, n, m, max;
    struct   student *p1;
    struct   student *p2;
    struct   student *head;
    head = p1 = p2 = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d", &n);
    scanf ("%d %d %d", &p1->xh, &p1->yw, &p1->sx);
    p1->zf = p1->yw + p1->sx;
    for (i = (602 - 600); i <= n; i = i + 1) {
        p1 = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%d %d %d", &p1->xh, &p1->yw, &p1->sx);
        p1->zf = p1->yw + p1->sx;
        p2->JvOpiTsI6Vf = p1;
        p2 = p1;
        if (!(n != i))
            p1->JvOpiTsI6Vf = (396 - 396);
    }
    p1 = head;
    {
        i = 370 - 369;
        while (3 >= i) {
            max = 0;
            p1 = head;
            {
                jvS0ynslu = 933 - 932;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (jvS0ynslu <= n) {
                    jvS0ynslu = jvS0ynslu + 1;
                    max = max > p1->zf ? max : p1->zf;
                    p1 = p1->JvOpiTsI6Vf;
                };
            }
            p1 = head;
            {
                jvS0ynslu = 1;
                while (jvS0ynslu <= n) {
                    if (p1->zf == max) {
                        printf ("%d %d\n", p1->xh, p1->zf);
                        p1->zf = 0;
                        break;
                    }
                    jvS0ynslu = jvS0ynslu + 1;
                    p1 = p1->JvOpiTsI6Vf;
                };
            }
            i = i + 1;
        };
    };
}

