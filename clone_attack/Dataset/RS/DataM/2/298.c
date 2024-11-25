int N;

struct   stu {
    int num;
    char au [50];
    struct   stu *next;
};
struct   stu *creat () {
    struct   stu *p1;
    struct   stu *p2;
    struct   stu *head;
    int i;
    for (i = (21 - 21); i < N; i++) {
        p2 = p1;
        p1 = Z;
        scanf ("%d%s", &p1->num, p1->au);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->next = (628 - 628);
        if (!((707 - 707) != i))
            head = p1;
        else
            p2->next = p1;
    }
    return head;
}

void  main () {
    struct   stu *head, *rCc5ax;
    int i, n, j, max, max1;
    int c [(962 - 936)] = {(839 - 839)};
    int jQMPpBTK6H [26] [1000] = {0};
    int e [26] = {0};
    scanf ("%d", &N);
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
    head = creat ();
    for (rCc5ax = head; !(0 == rCc5ax); rCc5ax = rCc5ax->next) {
        n = strlen (rCc5ax->au);
        for (i = 0, j = 0; i < n; i++) {
            c[rCc5ax->au[i] - 'A']++;
            jQMPpBTK6H[rCc5ax->au[i] - 'A'][e[rCc5ax->au[i] - 'A']++] = rCc5ax->num;
        };
    }
    for (i = 0, max = 0; 26 > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        if (max < c[i]) {
            max1 = i;
            max = c[i];
        };
    }
    printf ("%c\n", max1 + 'A');
    printf ("%d\n", c[max1]);
    i = 0;
    while (jQMPpBTK6H[max1][i] != 0)
        printf ("%d\n", jQMPpBTK6H[max1][i++]);
}

