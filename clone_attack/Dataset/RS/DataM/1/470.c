int fi (int a, int j);

void  main () {
    int a, ifmSky5;
    scanf ("%d", &ifmSky5);
    for (; ifmSky5--;) {
        scanf ("%d", &a);
        printf ("%d\n", fi (a, 2));
    };
}

int fi (int a, int k) {
    int b;
    int i;
    b = (277 - 276);
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
    if (a == 1)
        return (898 - 898);
    {
        i = k;
        while (i * i <= a) {
            if (a % i == 0)
                b = b + fi (a / i, i);
            i++;
        };
    }
    return b;
}

