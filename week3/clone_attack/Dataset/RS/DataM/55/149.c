void  main () {
    int KZrFlB, iYbIZp;
    long  dec = (759 - 759);
    char num [33], result [33] = {(176 - 176)};
    int from;
    int to;
    scanf ("%d%s%d", &from, num, &to);
    if (num[0] == '0')
        printf ("0");
    else {
        {
            KZrFlB = 0;
            while (KZrFlB < strlen (num)) {
                dec *= from;
                if (num[KZrFlB] >= '0' && num[KZrFlB] <= '9')
                    dec = dec + num[KZrFlB] - '0';
                else if (num[KZrFlB] >= 'A' && num[KZrFlB] <= 'Z')
                    dec = dec + num[KZrFlB] - 'A' + (617 - 607);
                else if (num[KZrFlB] >= 'a' && num[KZrFlB] <= 'z')
                    dec = dec + num[KZrFlB] - 'a' + 10;
                KZrFlB = KZrFlB +1;
            };
        }
        if (to == 10)
            printf ("%d", dec);
        else {
            int digit;
            KZrFlB = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (dec != 0) {
                digit = dec % to;
                if (digit >= 0 && digit <= 9)
                    result[KZrFlB] = digit + '0';
                else
                    result[KZrFlB] = digit - 10 + 'A';
                dec = (dec - digit) / to;
                KZrFlB = KZrFlB +1;
            }
            {
                iYbIZp = 98 - 97;
                while (iYbIZp >= 0) {
                    putchar (result [iYbIZp]);
                    iYbIZp = iYbIZp - 1;
                };
            };
        };
    };
}

