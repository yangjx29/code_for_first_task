struct   student {
    char str [1000];
    struct   student *next;
};
int main () {
    struct   student *p, *pnew, *head, *p1;
    pnew = (struct   student *) malloc (sizeof (struct   student));
    gets (pnew->str);
    pnew->next = NULL;
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
    if (strcmp (pnew->str, "end") == 0) {
        free (pnew);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        head = NULL;
    }
    else {
        head = pnew;
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
        p = pnew;
        for (; 1;) {
            pnew = (struct   student *) malloc (sizeof (struct   student));
            gets (pnew->str);
            pnew->next = NULL;
            if (strcmp (pnew->str, "end") == 0) {
                free (pnew);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else {
                head = pnew;
                pnew->next = p;
                p = pnew;
            };
        };
    }
    p1 = head;
    for (; p1;) {
        printf ("%s\n", p1->str);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        p1 = p1->next;
    }
    return 0;
}

