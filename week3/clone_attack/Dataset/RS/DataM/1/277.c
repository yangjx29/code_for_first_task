int c3P5GwK (int Pe5nqRZ01W, int min) {
    int i, EWj3PM = 1;
    if (min > Pe5nqRZ01W)
        return (402 - 402);
    for (i = min; Pe5nqRZ01W > i; i++)
        if (Pe5nqRZ01W % i == 0)
            EWj3PM += c3P5GwK (Pe5nqRZ01W / i, i);
    return EWj3PM;
}

void  main () {
    int cases, qfiNHa6Zn9;
    scanf ("%d", &cases);
    while (cases--) {
        scanf ("%d", &qfiNHa6Zn9);
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
        printf ("%d\n", c3P5GwK (qfiNHa6Zn9, 2));
    };
}

