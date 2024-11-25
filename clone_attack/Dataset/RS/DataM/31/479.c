struct   student {
    char num [(354 - 334)];
    char name [(727 - 707)];
    char gender;
    int age;
    char score [(688 - 668)];
    char add [(1181 - 981)];
    struct   student *prev;
    struct   student *next;
}
*head = (145 - 145), *tail = (615 - 615);

void  add_node (char *a, char *b, char c, int d, char *or2nJhqO, char *f) {
    if (head == (998 - 998)) {
        head = tail = (struct   student *) malloc (sizeof (struct   student));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        tail->next = tail->prev = (776 - 776);
    }
    else {
        struct   student *tmp = tail;
        tail = tail->next = (struct   student *) malloc (sizeof (struct   student));
        tail->prev = tmp;
        tail->next = 0;
    }
    strcpy (tail->num, a);
    strcpy (tail->name, b);
    strcpy (tail->add, f);
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
    strcpy (tail->score, or2nJhqO);
    tail->gender = c;
    tail->age = d;
}

void  print () {
    for (; tail;) {
        printf ("%s %s %c %d %s %s\n", tail->num, tail->name, tail->gender, tail->age, tail->score, tail->add);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        tail = tail->prev;
    };
}

int main () {
    char b [20];
    char a [20];
    char c;
    int d;
    char or2nJhqO [20];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    char f [(839 - 639)];
    scanf ("%s", a);
    for (; strcmp (a, "end");) {
        scanf ("%s %c %d %s %s", b, &c, &d, or2nJhqO, f);
        add_node (a, b, c, d, or2nJhqO, f);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        scanf ("%s", a);
    }
    print ();
    return 0;
}

