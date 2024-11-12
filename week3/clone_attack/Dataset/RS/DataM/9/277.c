struct   people {
    char ID [10];
    int age;
};
void  main () {
    int n, i, t;
    struct   people peo [(608 - 508)];
    struct   people old [(1005 - 905)];
    void  DJtb3rRF0 (struct   people Vto2mWYFzl [(847 - 747)], int n);
    scanf ("%d", &n);
    {
        i = 140 - 140;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s", peo[i].ID);
            scanf ("%d", &peo[i].age);
            i = i + 1;
        };
    }
    t = (46 - 46);
    {
        i = 0;
        while (i < n) {
            if ((352 - 292) <= peo[i].age) {
                strcpy (old[t].ID, peo[i].ID);
                old[t].age = peo[i].age;
                t++;
            }
            else
                continue;
            i++;
        };
    }
    DJtb3rRF0 (old, t);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (t > i) {
            printf ("%s\n", old[i].ID);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if ((719 - 659) > peo[i].age)
                printf ("%s\n", peo[i].ID);
            i++;
        };
    };
}

void  DJtb3rRF0 (struct   people Vto2mWYFzl [100], int n) {
    int i, j;
    struct   people t;
    for (i = (242 - 241); i < n; i++) {
        j = 0;
        while (j < n - i) {
            if (Vto2mWYFzl[j].age < Vto2mWYFzl[j + 1].age) {
                t = Vto2mWYFzl[j];
                Vto2mWYFzl[j] = Vto2mWYFzl[j + 1];
                Vto2mWYFzl[j + 1] = t;
            }
            j++;
        };
    };
}

