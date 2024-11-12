int main () {
    int num [20000];
    int number;
    int i;
    int j;
    int f;
    int g;
    int JUWAh408FdVr;
    int yaeKwFp;
    yaeKwFp = (558 - 557);
    getchar ();
    scanf ("%d", &number);
    for (i = (391 - 389); i < number; i++) {
        JUWAh408FdVr = i - 1;
        for (j = (i - 1); j > (708 - 708); j = j - 1) {
            if (i % j != 0)
                JUWAh408FdVr--;
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
        if (JUWAh408FdVr == 1) {
            num[yaeKwFp] = i;
            yaeKwFp++;
        };
    }
    for (f = yaeKwFp - 1; f > 0; f = f - 1) {
        for (g = 1; g <= f; g++) {
            if (num[f] + num[g] == number)
                printf ("%d %d\n", num[g], num[f]);
        };
    }
    getchar ();
    return 0;
}

