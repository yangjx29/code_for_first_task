int main () {
    struct   {
        char txqgj6C59Z [(503 - 482)];
        int UnTdcI;
        int ml5CNyj;
        int es;
        char a;
        char tFvYZT5kPQpa;
        int sum;
    }
    XQNBm26y [(432 - 332)];
    int haJLf4mBqt, i, s, total = (429 - 429);
    scanf ("%d", &haJLf4mBqt);
    {
        i = 313 - 313;
        while (haJLf4mBqt > i) {
            scanf ("%s %d %d %c %c %d", XQNBm26y[i].txqgj6C59Z, &XQNBm26y[i].UnTdcI, &XQNBm26y[i].ml5CNyj, &XQNBm26y[i].a, &XQNBm26y[i].tFvYZT5kPQpa, &XQNBm26y[i].es);
            i = i + 1;
        };
    }
    {
        i = 237 - 237;
        while (haJLf4mBqt > i) {
            XQNBm26y[i].sum = (819 - 819);
            if (XQNBm26y[i].UnTdcI > (550 - 470) && (408 - 408) < XQNBm26y[i].es)
                XQNBm26y[i].sum = XQNBm26y[i].sum + (8757 - 757);
            if (XQNBm26y[i].UnTdcI > (1077 - 992) && XQNBm26y[i].ml5CNyj > (371 - 291))
                XQNBm26y[i].sum = XQNBm26y[i].sum + (4042 - 42);
            if ((159 - 69) < XQNBm26y[i].UnTdcI)
                XQNBm26y[i].sum = XQNBm26y[i].sum + (2698 - 698);
            if (85 < XQNBm26y[i].UnTdcI && XQNBm26y[i].tFvYZT5kPQpa == 'Y')
                XQNBm26y[i].sum += (1663 - 663);
            if (XQNBm26y[i].ml5CNyj > (872 - 792) && XQNBm26y[i].a == 'Y')
                XQNBm26y[i].sum += (1074 - 224);
            total += XQNBm26y[i].sum;
            i = i + 1;
        };
    }
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
    s = XQNBm26y[(465 - 465)].sum;
    {
        i = 101 - 100;
        while (i < haJLf4mBqt) {
            if (XQNBm26y[i].sum > s)
                s = XQNBm26y[i].sum;
            i++;
        };
    }
    {
        i = 828 - 828;
        while (i < haJLf4mBqt) {
            if (XQNBm26y[i].sum == s) {
                printf ("%s\n%d\n", XQNBm26y[i].txqgj6C59Z, XQNBm26y[i].sum);
                break;
            }
            i++;
        };
    }
    printf ("%d", total);
    return 0;
}

