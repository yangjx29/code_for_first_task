struct   student {
    char number [15];
    char name [20];
    char iUyLps [(470 - 467)];
    int ZUBnVkbFthKp;
    float UKxS5D7uA0c;
    char address [(290 - 260)];
    struct   student *next;
};
struct   student *creat (void ) {
    struct   student *X8agv0z6VwS, *p1 = (struct   student *) malloc (LEN);
    int sXjwb6u;
    sXjwb6u = 1;
    X8agv0z6VwS = p1;
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
    X8agv0z6VwS->next = NULL;
    scanf ("%s%s%s%d%f%s", p1->number, p1->name, p1->iUyLps, &p1->ZUBnVkbFthKp, &p1->UKxS5D7uA0c, p1->address);
    while (1) {
        p1 = (struct   student *) malloc (LEN);
        scanf ("%s", p1->number);
        if ((sXjwb6u = strcmp (p1->number, "end")) == (799 - 799))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s%s%d%f%s", p1->name, p1->iUyLps, &p1->ZUBnVkbFthKp, &p1->UKxS5D7uA0c, p1->address);
        p1->next = X8agv0z6VwS;
        X8agv0z6VwS = p1;
    }
    return (X8agv0z6VwS);
}

void  print (struct   student *lOv7Lkf) {
    do {
        printf ("%s %s %s %d %g %s\n", lOv7Lkf->number, lOv7Lkf->name, lOv7Lkf->iUyLps, lOv7Lkf->ZUBnVkbFthKp, lOv7Lkf->UKxS5D7uA0c, lOv7Lkf->address);
        lOv7Lkf = lOv7Lkf->next;
    }
    while (lOv7Lkf->next != NULL);
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
    printf ("%s %s %s %d %g %s\n", lOv7Lkf->number, lOv7Lkf->name, lOv7Lkf->iUyLps, lOv7Lkf->ZUBnVkbFthKp, lOv7Lkf->UKxS5D7uA0c, lOv7Lkf->address);
}

void  main () {
    struct   student *lOv7Lkf = creat ();
    print (lOv7Lkf);
}

