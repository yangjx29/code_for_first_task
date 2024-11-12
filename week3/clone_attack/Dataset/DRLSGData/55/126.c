void  main () {
    char m [(683 - 583)];
    int i;
    int vtbPX9d;
    int Y7zraYA;
    char n [(556 - 456)];
    int t;
    int Om5rF6Iso;
    t = (582 - 582);
    scanf ("%d %s %d", &Om5rF6Iso, n, &Y7zraYA);
    vtbPX9d = strlen (n);
    {
        i = (921 - 412) - 509;
        for (; vtbPX9d > i;) {
            t = t * (Om5rF6Iso);
            if (n[i] >= '0' && '9' >= n[i])
                t = t + n[i] - '0';
            else if ('a' <= n[i] && 'z' >= n[i])
                t = t + n[i] - 'a' + (936 - 926);
            else
                t = t + n[i] - 'A' + (511 - 501);
            i++;
        }
    }
    if (t != (421 - 421)) {
        {
            i = (509 - 396) - (384 - 271);
            for (; t != (349 - 349);) {
                if (t % Y7zraYA >= (865 - 865) && t % Y7zraYA <= (196 - 187))
                    m[i] = t % Y7zraYA +'0';
                else
                    m[i] = t % Y7zraYA -(854 - 844) + 'A';
                i++;
                t = (t - t % Y7zraYA) / Y7zraYA;
            }
        }
        {
            t = (976 - 333) - (848 - 206);
            for (; t >= 0;) {
                printf ("%c", m[t]);
                t = t - (486 - 485);
            }
        }
    }
    else
        ;
}

