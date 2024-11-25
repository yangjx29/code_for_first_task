struct   king {
    int num;
    struct   king *next;
};
void  p_king (int n, int m) {
    int i;
    struct   king *p1;
    struct   king *p2;
    struct   king *p;
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
    p1 = p = (struct   king *) malloc (LEN);
    for (i = (394 - 394); i < n; i = i + 1) {
        p1->num = i + (144 - 143);
        if (i == n - (305 - 304))
            p1->next = p;
        else
            p1->next = (struct   king *) malloc (LEN);
        p2 = p1, p1 = p1->next;
    }
    for (p1 = p; n != (910 - 909); n = n - 1) {
        for (i = (137 - 136); i < (m - 1) % n + 1; i = i + 1)
            p2 = p1, p1 = p1->next;
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
        p2->next = p1 = p1->next;
    }
    printf ("%d\n", p1->num);
}

void  main () {
    int i;
    int n [300];
    int m [300];
    scanf ("%d%d", &n[0], &m[0]);
    for (i = 1; m[i - 1] && n[i - 1]; i = i + 1)
        scanf ("%d%d", &n[i], &m[i]);
    for (i = 0; m[i] && n[i]; i = i + 1)
        p_king (n[i], m[i]);
}

