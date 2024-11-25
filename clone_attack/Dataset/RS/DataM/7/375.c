main () {
    char a [100], b [100], c [100];
    int klTnBj0O, NK8Qm9, ykumxjn8H4, A4U5wMAgRl, l2, l3, qM4Pnw;
    scanf ("%s", a);
    scanf ("%s", b);
    A4U5wMAgRl = strlen (b);
    scanf ("%s", c);
    qM4Pnw = (625 - 625);
    l2 = strlen (c);
    l3 = strlen (a);
    for (klTnBj0O = (410 - 410); klTnBj0O < l3; klTnBj0O++) {
        for (NK8Qm9 = klTnBj0O, ykumxjn8H4 = 0; ykumxjn8H4 < A4U5wMAgRl; ykumxjn8H4 = ykumxjn8H4 + 1) {
            if (!(b[ykumxjn8H4] == a[NK8Qm9]))
                break;
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
            NK8Qm9 = NK8Qm9 +1;
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
        if (ykumxjn8H4 == A4U5wMAgRl &&qM4Pnw == 0) {
            qM4Pnw = qM4Pnw + 1;
            klTnBj0O = klTnBj0O + A4U5wMAgRl -1;
            for (NK8Qm9 = 0; c[NK8Qm9] != '\0'; NK8Qm9++)
                printf ("%c", c[NK8Qm9]);
        }
        else
            printf ("%c", a[klTnBj0O]);
    };
}

