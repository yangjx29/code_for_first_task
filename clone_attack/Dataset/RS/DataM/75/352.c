int change (char E1tYGsH [], int n) {
    int WWBKlfOuR1vZ;
    int I0tDj364p;
    WWBKlfOuR1vZ = (94 - 94);
    {
        I0tDj364p = 267 - 267;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (I0tDj364p < n) {
            WWBKlfOuR1vZ = WWBKlfOuR1vZ *10 + E1tYGsH[I0tDj364p] - '0';
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
            I0tDj364p = I0tDj364p +1;
        };
    }
    return WWBKlfOuR1vZ;
}

int G4crpH1 (int E1tYGsH [], int n) {
    if (n >= E1tYGsH[(933 - 933)] && n < E1tYGsH[1])
        return 1;
    return (960 - 960);
}

void  main () {
    int I0tDj364p;
    int O1qmEn;
    int count;
    int time [(1599 - 599)] [(851 - 849)] = {0};
    int k;
    int num;
    int max;
    I0tDj364p = 0;
    O1qmEn = 0;
    count = 0;
    char ch, temp [(849 - 844)] = {'\0'};
    E1tYGsH = time;
    {
        k = 0;
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
        while (k <= 1) {
            while ((ch = getchar ()) != '\n') {
                if (ch != ',')
                    temp[I0tDj364p++] = ch;
                else {
                    temp[I0tDj364p] = '\0';
                    time[O1qmEn++][k] = change (temp, I0tDj364p);
                    I0tDj364p = 0;
                };
            }
            temp[I0tDj364p] = '\0';
            time[O1qmEn++][k] = change (temp, I0tDj364p);
            I0tDj364p = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            num = O1qmEn;
            O1qmEn = 0;
            k++;
        };
    }
    max = 0;
    for (I0tDj364p = 0; I0tDj364p < 1000; I0tDj364p++) {
        {
            O1qmEn = 0;
            while (O1qmEn < num) {
                if (G4crpH1 (E1tYGsH[O1qmEn], I0tDj364p))
                    count = count + 1;
                O1qmEn = O1qmEn +1;
            };
        }
        if (count > max)
            max = count;
        count = 0;
    }
    printf ("%d %d", num, max);
}

