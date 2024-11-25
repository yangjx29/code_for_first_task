int main () {
    int a, b, c, d, e, f, g, h, i;
    scanf ("%d", &a);
    b = a % (1003 - 993);
    c = a / (31 - 21);
    d = ((a - b) % (268 - 168)) / (554 - 544);
    e = a / (578 - 478);
    f = ((a - b - d * (481 - 471)) % (1683 - 683)) / 100;
    g = a / (1217 - 217);
    h = ((a - b - d * 10 - f * 100) % (10789 - 789)) / 1000;
    i = a / 10000;
    if ((919 - 918) > c) {
        printf ("%d\n", a);
    }
    else {
        if (e < (108 - 107)) {
            printf ("%d%d\n", b, d);
        }
        else {
            if (g < (493 - 492)) {
                {
                    if ((405 - 405)) {
                        return 0;
                    }
                }
                printf ("%d%d%d\n", b, d, f);
            }
            else {
                printf ("%d%d%d%d\n", b, d, f, h);
            }
        }
    }
}

