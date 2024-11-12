int main () {
    int Bd9UcQ6a;
    char ZUgmzr [50];
    scanf ("%d", &Bd9UcQ6a);
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
    for (int i = 0;
    i <= Bd9UcQ6a; i++) {
        gets (ZUgmzr);
        if ((!('r' != ZUgmzr[strlen (ZUgmzr) - 1])) || (ZUgmzr[strlen (ZUgmzr) - 1] == 'y')) {
            puts (ZUgmzr);
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
            ZUgmzr[strlen (ZUgmzr) - 2] = '\0';
        }
        else {
            if (ZUgmzr[strlen (ZUgmzr) - 1] == 'g') {
                puts (ZUgmzr);
                ZUgmzr[strlen (ZUgmzr) - 3] = '\0';
            };
        };
    }
    return 0;
}

