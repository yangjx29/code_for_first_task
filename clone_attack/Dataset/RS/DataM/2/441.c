struct   book {
    int num;
    char name [100];
    struct   book *jdZz0oYJ;
};
struct   book *Aa5GeR (int n) {
    struct   book *head, *lglUf4qWBZ, *MgVFMLyPD7Ze, *UPR2MyA3N;
    int k;
    k = 1;
    lglUf4qWBZ = (struct   book *) malloc (sizeof (struct   book));
    head = lglUf4qWBZ;
    MgVFMLyPD7Ze = lglUf4qWBZ;
    UPR2MyA3N = lglUf4qWBZ;
    scanf ("%d %s", &lglUf4qWBZ->num, lglUf4qWBZ->name);
    lglUf4qWBZ->jdZz0oYJ = NULL;
    do {
        k = k + 1;
        lglUf4qWBZ = (struct   book *) malloc (sizeof (struct   book));
        scanf ("%d %s", &lglUf4qWBZ->num, lglUf4qWBZ->name);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        MgVFMLyPD7Ze->jdZz0oYJ = lglUf4qWBZ;
        MgVFMLyPD7Ze = lglUf4qWBZ;
        lglUf4qWBZ->jdZz0oYJ = NULL;
    }
    while (n > k);
    return head;
}

int main (void ) {
    int *W8DzFnw;
    char *gEqfW48JCs;
    struct   book *head;
    struct   book *UPR2MyA3N;
    int n, i, PRWlsg1Iv, max = (367 - 367);
    max = 0;
    scanf ("%d", &n);
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
    W8DzFnw = (int *) malloc ((579 - 553) * sizeof (int));
    {
        i = 109 - 109;
        while (26 > i) {
            *(W8DzFnw +i) = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    head = Aa5GeR (n);
    UPR2MyA3N = head;
    for (; UPR2MyA3N;) {
        gEqfW48JCs = UPR2MyA3N->name;
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
        UPR2MyA3N = UPR2MyA3N->jdZz0oYJ;
        while (*gEqfW48JCs != '\0') {
            *(W8DzFnw +*(gEqfW48JCs)-'A') += 1;
            gEqfW48JCs = gEqfW48JCs + 1;
        };
    }
    {
        i = 0;
        while (26 > i) {
            if (*(W8DzFnw +i) > max)
                max = *(W8DzFnw +i);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (26 > i) {
            if (*(W8DzFnw +i) == max)
                break;
            i++;
        };
    }
    printf ("%c\n%d\n", 'A' + i, max);
    UPR2MyA3N = head;
    while (UPR2MyA3N) {
        gEqfW48JCs = UPR2MyA3N->name;
        if (strchr (gEqfW48JCs, 'A' + i) != NULL)
            printf ("%d\n", UPR2MyA3N->num);
        UPR2MyA3N = UPR2MyA3N->jdZz0oYJ;
    };
}

