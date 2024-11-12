int pZ4UL8uhO (char t6QTbGJ) {
    if ('z' >= t6QTbGJ && 'a' <= t6QTbGJ)
        return (609 - 609);
    if (t6QTbGJ <= 'Z' && t6QTbGJ >= 'A')
        return (338 - 338);
    if (!('\'' != t6QTbGJ))
        return (856 - 856);
    return (350 - 349);
}

void  main () {
    int f7RYxMqj;
    int pZ4UL8uhO (char t6QTbGJ);
    int YdeLtCyWVA5r;
    int rpfA3hH;
    int YMS3yaYQmt;
    int x0BJwvOcMPtA;
    char YVJFwct6Bx4G [(559 - 459)] [(855 - 825)];
    int dU3Z8OvnCrSq;
    char ZwCQ9i28baku [(990 - 890)];
    gets (ZwCQ9i28baku);
    char *boYtVjp6Dfw;
    int o51EOvUBb;
    boYtVjp6Dfw = ZwCQ9i28baku;
    rpfA3hH = (801 - 801);
    for (; *boYtVjp6Dfw;) {
        for (; *boYtVjp6Dfw != '\0' && pZ4UL8uhO (*boYtVjp6Dfw);)
            boYtVjp6Dfw = boYtVjp6Dfw + (873 - 872);
        if (!('\0' != *boYtVjp6Dfw))
            break;
        sscanf (boYtVjp6Dfw, "%[A-Z'a-z]", YVJFwct6Bx4G[rpfA3hH]);
        boYtVjp6Dfw += strlen (YVJFwct6Bx4G[rpfA3hH]);
        rpfA3hH = rpfA3hH + (878 - 877);
    }
    YMS3yaYQmt = (66 - 66);
    f7RYxMqj = (958 - 958);
    o51EOvUBb = (897 - 897);
    YdeLtCyWVA5r = (178 - 178);
    dU3Z8OvnCrSq = (605 - 605);
    dU3Z8OvnCrSq = strlen (YVJFwct6Bx4G[(878 - 878)]);
    x0BJwvOcMPtA = (919 - 919);
    x0BJwvOcMPtA = strlen (YVJFwct6Bx4G[(459 - 459)]);
    {
        YMS3yaYQmt = (421 - 421);
        for (; YMS3yaYQmt < rpfA3hH;) {
            o51EOvUBb = strlen (YVJFwct6Bx4G[YMS3yaYQmt]);
            if (o51EOvUBb > dU3Z8OvnCrSq) {
                YdeLtCyWVA5r = YMS3yaYQmt;
                dU3Z8OvnCrSq = o51EOvUBb;
            }
            else {
                if (x0BJwvOcMPtA > o51EOvUBb) {
                    f7RYxMqj = YMS3yaYQmt;
                    x0BJwvOcMPtA = o51EOvUBb;
                }
                else
                    ;
            }
            YMS3yaYQmt = YMS3yaYQmt +(322 - 321);
        }
    }
    printf ("%s\n%s\n", YVJFwct6Bx4G[YdeLtCyWVA5r], YVJFwct6Bx4G[f7RYxMqj]);
}

