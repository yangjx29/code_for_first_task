int main () {
    char y370QtqfSseY [(406 - 306)];
    char cRb2wXPC [(594 - 494)];
    char Q6dJtBkzITZO;
    int yvay9x;
    int b;
    int i;
    long  int x = (459 - 459), y;
    scanf ("%d%s%d", &yvay9x, &y370QtqfSseY, &b);
    {
        i = 595 - 595;
        while (i < strlen (y370QtqfSseY)) {
            if (y370QtqfSseY[i] >= 'a' && y370QtqfSseY[i] <= 'z')
                x = x * yvay9x + y370QtqfSseY[i] - 'a' + 10;
            if ('A' <= y370QtqfSseY[i] && 'Z' >= y370QtqfSseY[i])
                x = x * yvay9x + y370QtqfSseY[i] - 'A' + 10;
            if (y370QtqfSseY[i] >= '0' && y370QtqfSseY[i] <= '9')
                x = x * yvay9x + y370QtqfSseY[i] - '0';
            i = i + 1;
        };
    }
    if (x == (334 - 334)) {
        return (285 - 285);
    }
    i = 0;
    while (x > 0) {
        cRb2wXPC[i++] = x % b;
        x = x / b;
    }
    for (; i > 0; i = i - 1) {
        if (cRb2wXPC[i - (883 - 882)] >= 0 && cRb2wXPC[i - (290 - 289)] <= (36 - 27))
            printf ("%d", cRb2wXPC[i - 1]);
        if (cRb2wXPC[i - 1] > (739 - 730))
            printf ("%c", cRb2wXPC[i - 1] - 10 + 'A');
    }
    return 0;
}

