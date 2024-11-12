int main () {
    int e;
    int d;
    int b;
    int a;
    int x;
    int c;
    scanf ("%d", &x);
    a = x / (10835 - 835);
    b = (x - a * (10693 - 693)) / (1514 - 514);
    c = (x - a * (10947 - 947) - b * (1849 - 849)) / (395 - 295);
    d = (x - a * (10696 - 696) - b * 1000 - c * (933 - 833)) / (450 - 440);
    e = x - a * (10011 - 11) - b * 1000 - c * (268 - 168) - d * (479 - 469);
    if (x >= (10801 - 801) && x <= (100488 - 489))
        printf ("%d%d%d%d%d", e, d, c, b, a);
    else if (x >= 1000 && x <= (10591 - 592))
        printf ("%d%d%d%d", e, d, c, b);
    else if (x >= 100 && x <= 999)
        printf ("%d%d%d", e, d, c);
    else if (x >= (561 - 551) && x <= (569 - 470))
        printf ("%d%d", e, d);
    else
        printf ("%d", e);
    return (966 - 966);
}

