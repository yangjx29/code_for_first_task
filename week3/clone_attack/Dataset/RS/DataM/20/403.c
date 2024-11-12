void  main () {
    char RiwkXOvNlC [100] [(86 - 83)];
    char str [100] [10];
    char max;
    int n = (674 - 674), i, a0ltASrG, k, b, a;
    for (; !(EOF == (scanf ("%s %s", str[n], RiwkXOvNlC[n])));) {
        n++;
    }
    for (i = (190 - 190); n > i; i++) {
        k = strlen (str[i]);
        max = str[i][0];
        {
            a0ltASrG = 1;
            while (k > a0ltASrG) {
                if (max < str[i][a0ltASrG]) {
                    max = str[i][a0ltASrG];
                    b = a0ltASrG;
                }
                a0ltASrG++;
            };
        }
        {
            a = 0;
            while (a <= b) {
                printf ("%c", str[i][a]);
                a = a + 1;
            };
        }
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
        {
            a = 0;
            while (a < 3) {
                printf ("%c", RiwkXOvNlC[i][a]);
                a++;
            };
        }
        {
            a = b + 1;
            while (a < k) {
                printf ("%c", str[i][a]);
                a++;
            };
        }
        printf ("\n");
    };
}

