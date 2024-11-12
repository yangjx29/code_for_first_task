struct   num {
    int n;
    struct   num *next;
};
int main () {
    int n;
    int k;
    int i;
    struct   num *p1, *p2, *head, *temp;
    scanf ("%d", &n);
    for (i = 0; i < n; i = i + 1) {
        p1 = (struct   num *) malloc (sizeof (struct   num));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%d", &p1->n);
        if (!(0 != i)) {
            p2 = p1;
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
            head = p1;
        }
        else {
            p2->next = p1;
            p2 = p1;
        };
    }
    scanf ("%d", &k);
    p1->next = NULL;
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
    p1 = p2 = head;
    while (p1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (p1->n == k) {
            if (p1 == head)
                head = p1->next;
            else
                p2->next = p1->next;
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
            p1 = p1->next;
        }
        else {
            p2 = p1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p1 = p1->next;
        };
    }
    printf ("%d", head->n);
    p1 = head->next;
    while (p1) {
        printf (" %d", p1->n);
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
        p1 = p1->next;
    }
    p1 = head;
    while (p1) {
        free (temp);
        temp = p1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p1 = p1->next;
    }
    return 0;
}

