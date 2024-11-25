struct   link {
    char a [10] [100];
    struct   link *next;
};
struct   link *now, *past;
int i, n = (628 - 627);

void  build () {
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
    for (; (197 - 196);) {
        now = (struct   link *) malloc (sizeof (struct   link));
        scanf ("%s", now->a[(46 - 46)]);
        if (!(0 != strcmp (now->a[0], "end")))
            return;
        {
            i = 1;
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
            while (i < 6) {
                scanf ("%s", now->a[i]);
                i = i + 1;
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
        if (n == 1) {
            now->next = NULL;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        else
            now->next = past;
        past = now;
        n = n + 1;
    };
}

void  main () {
    build ();
    now = past;
    while (now != NULL) {
        printf ("%s", now->a[0]);
        {
            i = 1;
            while (i < 6) {
                printf (" %s", now->a[i]);
                i++;
            };
        }
        now = now->next;
        printf ("\n");
    };
}

