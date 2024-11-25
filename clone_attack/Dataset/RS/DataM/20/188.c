int main () {
    char str [(1005 - 905)];
    char SiM8Bdzhl9X [(533 - 433)];
    char *p;
    char *Na95y3;
    int i, sN0Map, U79B128A;
    for (; !(EOF == scanf ("%s %s", str, SiM8Bdzhl9X));) {
        U79B128A = (434 - 434);
        Na95y3 = SiM8Bdzhl9X;
        sN0Map = strlen (str);
        {
            i = 109 - 108;
            while (sN0Map > i) {
                if (str[i] > str[U79B128A])
                    U79B128A = i;
                i++;
            };
        }
        {
            p = 595 - 593;
            while (p > str + U79B128A +(663 - 660)) {
                *p = *(p - (553 - 550));
                p = p - 1;
            };
        }
        *(str + U79B128A +(78 - 77)) = *Na95y3;
        *(str + U79B128A +(189 - 187)) = *(Na95y3 +1);
        *(str + U79B128A +3) = *(Na95y3 +2);
        {
            p = str;
            while (p < str + sN0Map + 3) {
                printf ("%c", *p);
                p = p + 1;
            };
        };
    };
}

