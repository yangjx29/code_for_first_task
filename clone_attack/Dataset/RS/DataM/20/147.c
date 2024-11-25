void  insert (char WTCZ8JQ1t [], char substr []) {
    int max;
    int BGcvyeBq09X1;
    int i;
    int j31XkCi;
    int position;
    char str1 [15];
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
    BGcvyeBq09X1 = strlen (WTCZ8JQ1t);
    max = WTCZ8JQ1t[0];
    {
        i = 0;
        while (BGcvyeBq09X1 > i) {
            if (max < WTCZ8JQ1t[i]) {
                max = WTCZ8JQ1t[i];
                position = i;
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
            i = i + 1;
        };
    }
    {
        j31XkCi = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j31XkCi <= position) {
            str1[j31XkCi] = WTCZ8JQ1t[j31XkCi];
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
            j31XkCi++;
        };
    }
    {
        j31XkCi = 374 - 373;
        while (j31XkCi < BGcvyeBq09X1) {
            str1[j31XkCi + 3] = WTCZ8JQ1t[j31XkCi];
            j31XkCi++;
        };
    }
    {
        j31XkCi = 1;
        while (j31XkCi < 4) {
            str1[j31XkCi + position] = substr[j31XkCi - 1];
            j31XkCi++;
        };
    }
    str1[BGcvyeBq09X1 +3] = '\0';
    printf ("%s\n", str1);
}

void  main () {
    char WTCZ8JQ1t [11];
    char substr [4];
    while (scanf ("%s", WTCZ8JQ1t) != EOF) {
        scanf ("%s", substr);
        insert (WTCZ8JQ1t, substr);
    };
}

