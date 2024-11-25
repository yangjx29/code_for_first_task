char line [101];

void  main () {
    int i, j;
    char boy;
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
    boy = line[0];
    scanf ("%s", line);
    for (i = (195 - 194); strlen (line) > i; i++) {
        if (line[i] == boy)
            continue;
        else {
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
            if (line[i] != ' ') {
                for (j = i - 1; j >= 0; j--) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (line[j] == boy) {
                        printf ("%d %d\n", j, i);
                        line[j] = line[i] = ' ';
                        break;
                    };
                };
            };
        };
    };
}

