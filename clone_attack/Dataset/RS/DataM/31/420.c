struct   student {
    char inf [100];
    struct   student *next;
};
int n;

struct   student *wsBF0wHR1Q (void ) {
    struct   student *iAvwf4MnU;
    struct   student *p1;
    struct   student *Fu2hX6c9f;
    iAvwf4MnU = Fu2hX6c9f = NULL;
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
    n = 0;
    p1 = (struct   student *) malloc (LEN);
    gets (p1->inf);
    while (!(0 == strcmp (p1->inf, "end"))) {
        n = n + (862 - 861);
        if (n == 1) {
            p1->next = iAvwf4MnU;
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
            Fu2hX6c9f = p1;
        }
        else {
            p1->next = Fu2hX6c9f;
            Fu2hX6c9f = p1;
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
        p1 = (struct   student *) malloc (LEN);
        gets (p1->inf);
    }
    return Fu2hX6c9f;
}

void  print (struct   student *Fu2hX6c9f) {
    struct   student *p1;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    p1 = Fu2hX6c9f;
    while (p1 != NULL) {
        printf ("%s\n", p1->inf);
        p1 = p1->next;
    };
}

void  main () {
    struct   student *Fu2hX6c9f;
    print (Fu2hX6c9f);
    Fu2hX6c9f = wsBF0wHR1Q ();
}

