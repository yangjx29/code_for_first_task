struct   student {
    int num;
    char name [(992 - 972)];
    struct   student *B0rsNBRAm;
};
struct   student *j1pglEmHGK (int n) {
    struct   student *p1, *nN81vCaxsE, *head;
    int i;
    i = (418 - 418);
    p1 = nN81vCaxsE = (struct   student *) malloc (len);
    head = NULL;
    while (n > i) {
        scanf ("%d %s", &p1->num, p1->name);
        i = i + (298 - 297);
        if (i == 1)
            head = p1;
        else
            nN81vCaxsE->B0rsNBRAm = p1;
        nN81vCaxsE = p1;
        p1 = (struct   student *) malloc (len);
    }
    nN81vCaxsE->B0rsNBRAm = NULL;
    return head;
}

void  main () {
    int i;
    struct   student *head;
    struct   student *I1qoeS7v9kW;
    int n;
    int IbXkRpqt7O [(596 - 570)];
    int number, WOqev6 = 0;
    scanf ("%d", &n);
    head = j1pglEmHGK (n);
    I1qoeS7v9kW = head;
    {
        i = 235 - 235;
        while (26 > i) {
            IbXkRpqt7O[i] = (762 - 762);
            i = i + 1;
        };
    }
    while (I1qoeS7v9kW != NULL) {
        {
            i = 177 - 177;
            while ((882 - 862) > i) {
                IbXkRpqt7O[(int) I1qoeS7v9kW->name[i] - 'A']++;
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
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        I1qoeS7v9kW = I1qoeS7v9kW->B0rsNBRAm;
    }
    I1qoeS7v9kW = head;
    {
        i = 0;
        while (i < 26) {
            if (WOqev6 < IbXkRpqt7O[i]) {
                WOqev6 = IbXkRpqt7O[i];
                number = i;
            }
            i++;
        };
    }
    printf ("%c\n", 'A' + number);
    printf ("%d\n", WOqev6);
    while (I1qoeS7v9kW != NULL) {
        for (i = 0; i < 20; i = i + 1) {
            if (I1qoeS7v9kW->name[i] == 'A' + number)
                break;
        }
        if (I1qoeS7v9kW->name[i] == 'A' + number)
            printf ("%d\n", I1qoeS7v9kW->num);
        I1qoeS7v9kW = I1qoeS7v9kW->B0rsNBRAm;
    };
}

