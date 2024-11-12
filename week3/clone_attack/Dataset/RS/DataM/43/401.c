int gAahG3 (int p);

void  main () {
    int a;
    int e9bQet;
    scanf ("%d", &a);
    for (e9bQet = 2; a / 2 >= e9bQet; e9bQet = e9bQet + 1) {
        if (gAahG3 (e9bQet) && gAahG3 (a - e9bQet))
            printf ("%d %d\n", e9bQet, a - e9bQet);
    };
}

int gAahG3 (int p) {
    int e9bQet;
    {
        e9bQet = 2;
        while (e9bQet <= (int) sqrt (p)) {
            if (p % e9bQet == (643 - 643))
                return (0);
            e9bQet = e9bQet + 1;
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
    return (1);
}

