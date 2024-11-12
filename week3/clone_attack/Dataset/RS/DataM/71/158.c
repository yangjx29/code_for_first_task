main () {
    int HuQzZLs0R6;
    int jCqR8GKYbyZz;
    scanf ("%d", &jCqR8GKYbyZz);
    for (HuQzZLs0R6 = 0; jCqR8GKYbyZz > HuQzZLs0R6; HuQzZLs0R6++) {
        int fC8I9JqVg;
        int m1;
        int yq6RmHga;
        int Tgve15xwfG;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        int j;
        Tgve15xwfG = 0;
        scanf ("%d %d %d", &fC8I9JqVg, &m1, &yq6RmHga);
        if (((fC8I9JqVg % 4 == 0) && (fC8I9JqVg % 100 != 0)) || (!(0 != fC8I9JqVg % 400))) {
            int a [12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
            if (m1 < yq6RmHga) {
                for (j = m1 - 1; j < yq6RmHga - 1; j = j + 1)
                    Tgve15xwfG = Tgve15xwfG +a[j];
                if (Tgve15xwfG % 7 == 0)
                    ;
                else
                    printf ("NO\n");
            }
            else {
                for (j = yq6RmHga - 1; m1 - 1 > j; j = j + 1)
                    Tgve15xwfG = Tgve15xwfG +a[j];
                if (Tgve15xwfG % 7 == 0)
                    ;
                else
                    printf ("NO\n");
            };
        }
        else {
            int a [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
            if (m1 < yq6RmHga) {
                for (j = m1 - 1; j < yq6RmHga - 1; j = j + 1)
                    Tgve15xwfG = Tgve15xwfG +a[j];
                if (Tgve15xwfG % 7 == 0)
                    printf ("YES\n");
                else
                    printf ("NO\n");
            }
            else {
                for (j = yq6RmHga - 1; j < m1 - 1; j++)
                    Tgve15xwfG = Tgve15xwfG +a[j];
                if (Tgve15xwfG % 7 == 0)
                    printf ("YES\n");
                else
                    printf ("NO\n");
            };
        };
    };
}

