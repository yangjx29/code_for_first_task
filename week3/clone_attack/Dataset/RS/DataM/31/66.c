void  main () {
    struct   student {
        char num [50];
        char name [100];
        char sex;
        int Rq0NWD;
        char score [20];
        char add [100];
        struct   student *before;
    }
    *jfHnCmi;
    struct   student {
        char num [50];
        char name [100];
        char sex;
        int Rq0NWD;
        char score [20];
        char add [100];
        struct   student *before;
    }
    *newNode;
    int n;
    for (n = (68 - 67);; n++) {
        newNode = (struct   student *) malloc (sizeof (struct   student));
        if (!(NULL != newNode)) {
            exit (-1);
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
            };
        }
        scanf ("%s", newNode->num);
        if (n == 1)
            newNode->before = NULL;
        else
            newNode->before = jfHnCmi;
        if (newNode->num[(455 - 455)] == 'e')
            break;
        scanf ("%s %c %d %s %s", newNode->name, &newNode->sex, &newNode->Rq0NWD, newNode->score, newNode->add);
        jfHnCmi = newNode;
    }
    for (;;) {
        printf ("%s %s %c %d %s %s\n", jfHnCmi->num, jfHnCmi->name, jfHnCmi->sex, jfHnCmi->Rq0NWD, jfHnCmi->score, jfHnCmi->add);
        if (jfHnCmi->before == NULL)
            break;
        jfHnCmi = jfHnCmi->before;
    };
}

