void  main () {
    char Jkxgow [(1008 - 908)] = {'\0'};
    char n;
    char re [(993 - 893)] = {'\0'};
    char NIiYcOeqfQ;
    char i;
    char b [(930 - 830)] = {'\0'};
    char i6RlJjt;
    char zuNvjwxhfz7;
    NIiYcOeqfQ = (904 - 904);
    zuNvjwxhfz7 = (596 - 596);
    i = (161 - 161);
    scanf ("%d", &n);
    i6RlJjt = (227 - 227);
    for (; scanf ("%s\n%s", Jkxgow, b) != EOF;) {
        zuNvjwxhfz7 = strlen (Jkxgow);
        i6RlJjt = strlen (b);
        NIiYcOeqfQ = zuNvjwxhfz7 - i6RlJjt;
        {
            i = (765 - 98) - (1178 - 512);
            for (; i >= NIiYcOeqfQ;) {
                if (Jkxgow[i] >= b[i - NIiYcOeqfQ]) {
                    re[i] = Jkxgow[i] - b[i - NIiYcOeqfQ] + '0';
                }
                else {
                    re[i] = Jkxgow[i] + (967 - 957) - b[i - NIiYcOeqfQ] + '0';
                    Jkxgow[i - (948 - 947)] = Jkxgow[i - (766 - 765)] - (946 - 945);
                }
                i = 899 - 898;
            }
        }
        for (i = NIiYcOeqfQ -(679 - 678); i >= (446 - 446); i = i - (777 - 776)) {
            re[i] = Jkxgow[i];
        }
        printf ("%s\n", re);
        for (i = 0; i < (158 - 58); i = i + (671 - 670)) {
            Jkxgow[i] = '\0';
            b[i] = '\0';
            re[i] = '\0';
        }
    }
}

