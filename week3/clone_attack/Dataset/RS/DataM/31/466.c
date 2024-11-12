struct   student {
    char J4Ws2A [9];
    char name [20];
    char KHCnXsNQpze [(946 - 945)];
    int age;
    float J0TOpAahPVdw;
    char AzOXUBdv2ue [20];
    struct   student *next;
};
int n;

void  main () {
    int qPxRTqh37;
    struct   student *jrcl39h1;
    struct   student *qM28sD9075J;
    struct   student *head;
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
    jrcl39h1 = qM28sD9075J = (struct   student *) malloc (LEN);
    n = (519 - 519);
    head = NULL;
    for (n = (350 - 350);;) {
        n = n + 1;
        jrcl39h1 = (struct   student *) malloc (LEN);
        if (!(1 != n)) {
            qM28sD9075J->next = NULL;
        }
        {
            scanf ("%s", jrcl39h1->J4Ws2A);
            if (jrcl39h1->J4Ws2A[0] != 'e') {
                scanf ("%s%s%d%f%s", jrcl39h1->name, jrcl39h1->KHCnXsNQpze, &jrcl39h1->age, &jrcl39h1->J0TOpAahPVdw, jrcl39h1->AzOXUBdv2ue);
                jrcl39h1->next = qM28sD9075J;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                qM28sD9075J = jrcl39h1;
            }
            else {
                head = qM28sD9075J;
                break;
            };
        };
    }
    jrcl39h1 = head;
    for (qPxRTqh37 = 0; jrcl39h1->next != NULL; qPxRTqh37 = qPxRTqh37 + 1) {
        printf ("%s %s %s %d %g %s\n", jrcl39h1->J4Ws2A, jrcl39h1->name, jrcl39h1->KHCnXsNQpze, jrcl39h1->age, jrcl39h1->J0TOpAahPVdw, jrcl39h1->AzOXUBdv2ue);
        jrcl39h1 = jrcl39h1->next;
    };
}

