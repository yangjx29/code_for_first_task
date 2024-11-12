int n;

struct   stu {
    int num;
    char name [27];
    struct   stu *next;
};
struct   stu *creat () {
    struct   stu *head;
    struct   stu *p1;
    struct   stu *p2;
    int OzBL8e3RoYN;
    OzBL8e3RoYN = (385 - 385);
    head = p1 = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%d %s", &p2->num, p2->name);
    while (OzBL8e3RoYN < n - 1) {
        OzBL8e3RoYN++;
        p2 = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%d %s", &p2->num, p2->name);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1->next = p2;
        p1 = p2;
    }
    return head;
}

void  main () {
    int k, u, max = (443 - 443), f9px0qYcGrZ;
    struct   stu *LvyaUbzQ7R;
    struct   stu *head;
    int a [26] = {(608 - 608)};
    head = LvyaUbzQ7R = creat ();
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
    scanf ("%d", &n);
    for (k = 0; n > k; k = k + 1) {
        for (u = 0; !('\0' == LvyaUbzQ7R->name[u]); u++)
            a[LvyaUbzQ7R->name[u] - 'A']++;
        LvyaUbzQ7R = LvyaUbzQ7R->next;
    }
    for (k = 0; 26 > k; k++)
        if (max < a[k]) {
            max = a[k];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            f9px0qYcGrZ = k;
        }
    printf ("%c\n%d\n", f9px0qYcGrZ + 'A', max);
    LvyaUbzQ7R = head;
    {
        k = 0;
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
        while (k < n) {
            {
                u = 0;
                while (LvyaUbzQ7R->name[u] != '\0') {
                    if (LvyaUbzQ7R->name[u] == f9px0qYcGrZ + 'A') {
                        printf ("%d\n", LvyaUbzQ7R->num);
                        break;
                    }
                    u = u + 1;
                };
            }
            LvyaUbzQ7R = LvyaUbzQ7R->next;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k++;
        };
    };
}

