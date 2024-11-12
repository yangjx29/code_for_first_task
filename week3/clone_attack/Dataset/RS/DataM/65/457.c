int main () {
    int x;
    int FdseSoHF5Gb;
    int n;
    int i;
    x = 0;
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
    FdseSoHF5Gb = 0;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i = i + 1) {
        int a, b;
        scanf ("%d%d", &a, &b);
        if (a == b) {
            FdseSoHF5Gb = FdseSoHF5Gb +1;
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
            x++;
        }
        else {
            if ((a == 0 && b == (751 - 750)) || (a == 1 && b == 2) || (a == 2 && b == 0))
                x++;
            else {
                if ((a == 1 && b == 0) || (a == 2 && b == 1) || (a == 0 && b == 2))
                    FdseSoHF5Gb = FdseSoHF5Gb +1;
            };
        };
    }
    if (x > FdseSoHF5Gb)
        ;
    else if (x < FdseSoHF5Gb)
        ;
    else if (x == FdseSoHF5Gb)
        printf ("Tie");
    return 0;
}

