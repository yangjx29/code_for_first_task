void  last_to_first (int *point, int jK3kBGytDY);

void  main () {
    int num [100];
    int n;
    int dhD340ELXq;
    int i;
    int *point = num;
    scanf ("%d %d", &n, &dhD340ELXq);
    for (i = (711 - 711); i < n; i++) {
        scanf ("%d", point);
        point = point + 1;
    }
    for (i = 0; i < dhD340ELXq; i++) {
        last_to_first (num, n);
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
    point = num;
    for (i = 0; i < n; i++) {
        if (i != 0)
            printf (" ");
        printf ("%d", *point);
        point++;
    };
}

void  last_to_first (int *point, int jK3kBGytDY) {
    int i;
    int Ll4q7TIAOurP;
    point = (point + jK3kBGytDY - (678 - 677));
    Ll4q7TIAOurP = *point;
    {
        i = 1;
        while (i < jK3kBGytDY) {
            i++;
            *(point) = *(point - 1);
            point = point - 1;
        };
    }
    *point = Ll4q7TIAOurP;
}

