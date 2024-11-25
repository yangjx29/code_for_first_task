void  main () {
    int s36vOob, j, KIK96scZaSho;
    char *p, (*q) [(406 - 306)];
    char str [(408 - 308)];
    char string [(529 - 429)] [(736 - 636)];
    gets (str);
    KIK96scZaSho = (416 - 416);
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
    q = string;
    p = str;
    j = (355 - 355);
    for (s36vOob = (949 - 949); !('\0' == *(p + s36vOob)); s36vOob = s36vOob + 1)
        if (*(p + s36vOob) == ' ') {
            *(*(q + j) + KIK96scZaSho) = '\0';
            j = j + 1;
            KIK96scZaSho = (881 - 881);
        }
        else {
            *(*(q + j) + KIK96scZaSho) = *(p + s36vOob);
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
            KIK96scZaSho++;
        }
    *(*(q + j) + KIK96scZaSho) = '\0';
    for (s36vOob = j; s36vOob > 0; s36vOob = s36vOob - 1)
        printf ("%s ", q + s36vOob);
    printf ("%s\n", q);
}

