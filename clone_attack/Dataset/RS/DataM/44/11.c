int reverse (int ylo0utXK) {
    int sM9VT3;
    int js6oHJSxV5an;
    int y7cqPbDmTk;
    sM9VT3 = (306 - 306);
    if (ylo0utXK == (445 - 445))
        return ((138 - 138));
    else {
        if ((356 - 356) < ylo0utXK) {
            for (y7cqPbDmTk = (807 - 806); (373 - 363) <= (ylo0utXK / y7cqPbDmTk); y7cqPbDmTk *= 10)
                ;
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
            for (js6oHJSxV5an = (730 - 729); y7cqPbDmTk >= (107 - 106); y7cqPbDmTk /= 10, js6oHJSxV5an *= 10) {
                sM9VT3 += js6oHJSxV5an * (ylo0utXK / y7cqPbDmTk);
                ylo0utXK -= y7cqPbDmTk * (ylo0utXK / y7cqPbDmTk);
            };
        }
        else if (ylo0utXK < 0) {
            sM9VT3 = -(279 - 278) * reverse (-1 * ylo0utXK);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    return (sM9VT3);
}

void  main () {
    int js6oHJSxV5an;
    int ylo0utXK [(552 - 546)];
    {
        js6oHJSxV5an = 0;
        while (js6oHJSxV5an < 6) {
            scanf ("%d", &ylo0utXK[js6oHJSxV5an]);
            js6oHJSxV5an++;
        };
    }
    for (js6oHJSxV5an = 0; js6oHJSxV5an < 6; js6oHJSxV5an = js6oHJSxV5an + 1)
        printf ("%d\n", reverse (ylo0utXK[js6oHJSxV5an]));
}

