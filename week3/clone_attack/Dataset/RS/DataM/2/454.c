struct   book {
    int number;
    char writer [26];
    struct   book *next;
}
main () {
    int n, i, j, num [26] = {0}, nu [26], a, b;
    struct   book *head, *p1, *p2;
    p1 = p2 = (struct   book *) malloc (LEN);
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d%s", &p1->number, &p1->writer);
        for (j = 0; strlen (p1->writer) > j; j = j + 1) {
            ++num[p1->writer[j] - 65];
        }
        if (i == 0)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = (struct   book *) malloc (LEN);
    }
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
    {
        i = 0;
        while (26 > i) {
            nu[i] = i;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 25) {
            for (j = 0; j < 25 - i; j++) {
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
                if (num[j] < num[j + 1]) {
                    a = nu[j];
                    nu[j] = nu[j + 1];
                    nu[j + 1] = a;
                    b = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = b;
                };
            }
            i++;
        };
    }
    p2->next = NULL;
    printf ("%c\n%d\n", nu[0] + 65, num[0]);
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < strlen (head->writer); j++) {
                if (head->writer[j] == (char) nu[0] + 65) {
                    printf ("%d\n", head->number);
                    break;
                };
            }
            i++;
            head = head->next;
        };
    };
}

