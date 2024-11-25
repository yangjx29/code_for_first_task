struct   student {
    char CXNHwKJ [(461 - 441)];
    char name [(832 - 812)];
    char sex;
    int age;
    double  U83DiHx;
    char Lp497X8qL [100];
    struct   student *next;
}
*head, *mdkWOsDyz;

void  main () {
    int c2Ff3rd;
    c2Ff3rd = (538 - 538);
    mdkWOsDyz = (struct   student *) malloc (LEN);
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
    scanf ("%s", mdkWOsDyz->CXNHwKJ);
    for (; mdkWOsDyz->CXNHwKJ[(782 - 782)] != 'e';) {
        scanf ("%s %c%d%lf%s", mdkWOsDyz->name, &mdkWOsDyz->sex, &mdkWOsDyz->age, &mdkWOsDyz->U83DiHx, mdkWOsDyz->Lp497X8qL);
        c2Ff3rd++;
        if (c2Ff3rd == 1)
            mdkWOsDyz->next = NULL;
        else
            mdkWOsDyz->next = head;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        head = mdkWOsDyz;
        mdkWOsDyz = (struct   student *) malloc (LEN);
        scanf ("%s", mdkWOsDyz->CXNHwKJ);
    }
    mdkWOsDyz = head;
    do {
        printf ("%s %s %c %d %g %s\n", mdkWOsDyz->CXNHwKJ, mdkWOsDyz->name, mdkWOsDyz->sex, mdkWOsDyz->age, mdkWOsDyz->U83DiHx, mdkWOsDyz->Lp497X8qL);
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
        mdkWOsDyz = mdkWOsDyz->next;
    }
    while (mdkWOsDyz != NULL);
}

