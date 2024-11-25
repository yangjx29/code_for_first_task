int main () {
    char in [(712 - 612)];
    char acfZe15 [100];
    int num;
    num = (663 - 663);
    int AmKR0xLuGdAQ;
    int from;
    int pQJOmc94BTE;
    int tAKjokXV;
    char Oag749DIA [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int z72xhbfz [(424 - 296)];
    {
        AmKR0xLuGdAQ = '0';
        while ('9' >= AmKR0xLuGdAQ) {
            z72xhbfz[AmKR0xLuGdAQ] = AmKR0xLuGdAQ -'0';
            AmKR0xLuGdAQ = AmKR0xLuGdAQ +1;
        };
    }
    {
        AmKR0xLuGdAQ = 'a';
        while ('z' >= AmKR0xLuGdAQ) {
            z72xhbfz[AmKR0xLuGdAQ] = AmKR0xLuGdAQ -'a' + 10;
            AmKR0xLuGdAQ = AmKR0xLuGdAQ +1;
        };
    }
    {
        AmKR0xLuGdAQ = 'A';
        while ('Z' >= AmKR0xLuGdAQ) {
            z72xhbfz[AmKR0xLuGdAQ] = AmKR0xLuGdAQ -'A' + 10;
            AmKR0xLuGdAQ++;
        };
    }
    scanf ("%d%s%d", &from, in, &pQJOmc94BTE);
    {
        AmKR0xLuGdAQ = 281 - 281;
        while (in[AmKR0xLuGdAQ] != '\0') {
            num = num * from + z72xhbfz[in[AmKR0xLuGdAQ]];
            AmKR0xLuGdAQ++;
        };
    }
    if (num == (444 - 444)) {
        acfZe15[0] = '0';
        tAKjokXV = 1;
    }
    else
        tAKjokXV = 0;
    while (num > 0) {
        acfZe15[tAKjokXV++] = Oag749DIA[num % pQJOmc94BTE];
        num = num / pQJOmc94BTE;
    }
    {
        AmKR0xLuGdAQ = tAKjokXV - 1;
        while (AmKR0xLuGdAQ >= 0) {
            printf ("%c", acfZe15[AmKR0xLuGdAQ]);
            AmKR0xLuGdAQ = AmKR0xLuGdAQ -1;
        };
    }
    return 0;
}

