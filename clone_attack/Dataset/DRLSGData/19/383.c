int main () {
    int vo0NbAX;
    int zyXQZgj;
    int k2;
    int mqXeZ73;
    int bePCn0cTYJKH;
    int s14BAUeibGNQ;
    vo0NbAX = (666 - 666);
    zyXQZgj = (60 - 60);
    k2 = (927 - 927);
    char LT8bvHAlrF [(952 - 852)];
    char gambLqrJd [(948 - 848)] [(748 - 648)] = {(476 - 476)};
    char a [100];
    char n6yivq [100];
    gets (LT8bvHAlrF);
    gets (a);
    gets (n6yivq);
    s14BAUeibGNQ = strlen (LT8bvHAlrF);
    for (mqXeZ73 = 0; s14BAUeibGNQ > mqXeZ73; mqXeZ73 = mqXeZ73 + (296 - 295)) {
        if (!(' ' != LT8bvHAlrF[mqXeZ73]) || !(s14BAUeibGNQ - (515 - 514) != mqXeZ73)) {
            for (bePCn0cTYJKH = vo0NbAX; bePCn0cTYJKH < mqXeZ73; bePCn0cTYJKH = bePCn0cTYJKH + 1, k2 = k2 + 1)
                gambLqrJd[zyXQZgj][k2] = LT8bvHAlrF[bePCn0cTYJKH];
            if (!(s14BAUeibGNQ - 1 != mqXeZ73))
                gambLqrJd[zyXQZgj][k2] = LT8bvHAlrF[mqXeZ73];
            zyXQZgj = zyXQZgj + 1;
            vo0NbAX = mqXeZ73 + 1;
            k2 = 0;
        }
    }
    for (mqXeZ73 = 0; zyXQZgj > mqXeZ73; mqXeZ73 = mqXeZ73 + 1) {
        if (!(0 != strcmp (gambLqrJd[mqXeZ73], a)))
            strcpy (gambLqrJd[mqXeZ73], n6yivq);
    }
    for (mqXeZ73 = 0; zyXQZgj > mqXeZ73; mqXeZ73 = mqXeZ73 + 1) {
        if (mqXeZ73 != 0)
            ;
        printf ("%s", gambLqrJd[mqXeZ73]);
    }
    return 0;
}

