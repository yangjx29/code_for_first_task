struct   student {
    struct   student *pre;
    char s [100];
    struct   student *zljHYQDgARx8;
};
struct   student *DTvgyIsh8ePR () {
    struct   student *p1, *p2;
    p1 = (struct   student *) malloc (len);
    gets (p1->s);
    p1->pre = NULL;
    p1->zljHYQDgARx8 = NULL;
    p2 = p1;
    while (strcmp (p1->s, "end")) {
        p1 = (struct   student *) malloc (len);
        gets (p1->s);
        p1->pre = p2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        p2->zljHYQDgARx8 = p1;
        p1->zljHYQDgARx8 = NULL;
        p2 = p1;
    }
    return (p1->pre);
}

void  print (struct   student *end) {
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
    while (end) {
        puts (end->s);
        end = end->pre;
    };
}

void  main () {
    struct   student *end;
    print (end);
    end = DTvgyIsh8ePR ();
}

