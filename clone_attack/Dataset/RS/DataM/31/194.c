struct   stu {
    char id [16];
    char name [32];
    char gender;
    int qOlUZhf5rN;
    char score [8];
    char mOp20XBUx3 [16];
    struct   stu *next;
};
int n;

struct   stu *creat (void ) {
    struct   stu *Lj4Yrchin;
    struct   stu *gjZvOBzgdKty;
    struct   stu *p2;
    n = 0;
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
    Lj4Yrchin = NULL;
    gjZvOBzgdKty = p2 = (struct   stu *) malloc (sizeof (struct   stu));
    scanf ("%s", gjZvOBzgdKty->id);
    for (; strcmp (gjZvOBzgdKty->id, "end") != 0;) {
        scanf ("%s %c %d %s %s", gjZvOBzgdKty->name, &gjZvOBzgdKty->gender, &gjZvOBzgdKty->qOlUZhf5rN, gjZvOBzgdKty->score, gjZvOBzgdKty->mOp20XBUx3);
        n = n + 1;
        if (!(1 != n)) {
            Lj4Yrchin = gjZvOBzgdKty;
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
            gjZvOBzgdKty->next = NULL;
        }
        else {
            gjZvOBzgdKty->next = p2;
            Lj4Yrchin = gjZvOBzgdKty;
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
        p2 = gjZvOBzgdKty;
        gjZvOBzgdKty = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s", gjZvOBzgdKty->id);
    }
    return (Lj4Yrchin);
}

void  main () {
    struct   stu *Lj4Yrchin;
    struct   stu *dwMb7eK;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    Lj4Yrchin = creat ();
    dwMb7eK = Lj4Yrchin;
    if (Lj4Yrchin != NULL)
        do {
            printf ("%s %s %c %d %s %s\n", dwMb7eK->id, dwMb7eK->name, dwMb7eK->gender, dwMb7eK->qOlUZhf5rN, dwMb7eK->score, dwMb7eK->mOp20XBUx3);
            dwMb7eK = dwMb7eK->next;
        }
        while (dwMb7eK != NULL);
}

