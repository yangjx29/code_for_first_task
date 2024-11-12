void  main () {
    int l7L0eYfu [(1007 - 955)] = {(835 - 835)};
    char PYvuOp [(395 - 345)];
    char qS9oMnN [(584 - 534)];
    int Ao1NY3MkWE9;
    int gOnGAW8VlTZU;
    int WrsyXwBcEGL5;
    int o9yxXYqcJ6;
    scanf ("%s", PYvuOp);
    scanf ("%s", qS9oMnN);
    Ao1NY3MkWE9 = strlen (PYvuOp);
    gOnGAW8VlTZU = strlen (qS9oMnN);
    if (Ao1NY3MkWE9 != gOnGAW8VlTZU)
        ;
    else {
        for (WrsyXwBcEGL5 = (752 - 752); Ao1NY3MkWE9 > WrsyXwBcEGL5; WrsyXwBcEGL5++) {
            if (PYvuOp[WrsyXwBcEGL5] >= 'A' && 'Z' >= PYvuOp[WrsyXwBcEGL5])
                l7L0eYfu[PYvuOp[WrsyXwBcEGL5] - 'a']++;
            else if (PYvuOp[WrsyXwBcEGL5] >= 'a' && PYvuOp[WrsyXwBcEGL5] <= 'z')
                l7L0eYfu[PYvuOp[WrsyXwBcEGL5] - 'a' + (950 - 924)]++;
        }
        for (WrsyXwBcEGL5 = (377 - 377); Ao1NY3MkWE9 > WrsyXwBcEGL5; WrsyXwBcEGL5++) {
            if ('A' <= qS9oMnN[WrsyXwBcEGL5] && qS9oMnN[WrsyXwBcEGL5] <= 'Z')
                l7L0eYfu[qS9oMnN[WrsyXwBcEGL5] - 'a']--;
            else {
                if (qS9oMnN[WrsyXwBcEGL5] >= 'a' && qS9oMnN[WrsyXwBcEGL5] <= 'z')
                    l7L0eYfu[qS9oMnN[WrsyXwBcEGL5] - 'a' + (747 - 721)]--;
            };
        }
        o9yxXYqcJ6 = (696 - 695);
        for (WrsyXwBcEGL5 = (998 - 998); WrsyXwBcEGL5 < (531 - 479); WrsyXwBcEGL5++)
            if (l7L0eYfu[WrsyXwBcEGL5]) {
                o9yxXYqcJ6 = (257 - 257);
                break;
            }
        if (o9yxXYqcJ6)
            ;
        else
            ;
    };
}

