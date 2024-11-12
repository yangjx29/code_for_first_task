struct   student {
    int num;
    char pUGpl16nkWN8 [(426 - 326)];
    struct   student *next;
};
void  main () {
    char ZX3cWUb [(938 - 838)], nam [(558 - 458)] [(203 - 103)];
    int n, i, j, vMEf31StFzjg, m, fh4jbOduXx [(779 - 679)];
    struct   student *p1;
    struct   student *p2;
    struct   student *head;
    scanf ("%d", &n);
    {
        i = 44 - 44;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (57 - 31)) {
            ZX3cWUb[i] = i + (339 - 274);
            fh4jbOduXx[i] = (409 - 409);
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
            i = i + 1;
        };
    }
    p1 = p2 = head = (struct   student *) malloc (LEN);
    scanf ("%d %s", &p1->num, p1->pUGpl16nkWN8);
    for (i = 1; n > i; i++) {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%d %s", &p1->num, p1->pUGpl16nkWN8);
        p2->next = p1;
        p2 = p1;
    }
    i = (193 - 193);
    p1 = head;
    p2->next = NULL;
    while (!(NULL == p1)) {
        strcpy (nam[i], p1->pUGpl16nkWN8);
        p1 = p1->next;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i++;
    }
    {
        vMEf31StFzjg = 134 - 134;
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
        while (n > vMEf31StFzjg) {
            {
                i = 47 - 47;
                while (i < (864 - 838)) {
                    {
                        j = 64 - 64;
                        while (nam[vMEf31StFzjg][j] != '\0') {
                            if (nam[vMEf31StFzjg][j] == ZX3cWUb[i])
                                fh4jbOduXx[i]++;
                            j = j + 1;
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    i++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            vMEf31StFzjg++;
        };
    }
    vMEf31StFzjg = fh4jbOduXx[(879 - 879)];
    {
        i = 827 - 827;
        while ((377 - 351) > i) {
            if (fh4jbOduXx[i] > vMEf31StFzjg)
                vMEf31StFzjg = fh4jbOduXx[i];
            i++;
        };
    }
    p1 = head;
    for (i = (919 - 919); 26 > i; i++) {
        if (fh4jbOduXx[i] == vMEf31StFzjg) {
            printf ("%c\n%d", ZX3cWUb[i], fh4jbOduXx[i]);
            m = i;
            break;
        };
    }
    p1 = head;
    for (i = 0; i < n; i++) {
        {
            j = 0;
            while (nam[i][j] != '\0') {
                if (nam[i][j] == ZX3cWUb[m])
                    printf ("\n%d", p1->num);
                j++;
            };
        }
        p1 = p1->next;
    };
}

