int chrtoint (char TPA8F1d9) {
    if ('0' <= TPA8F1d9 &&TPA8F1d9 <= '9')
        return TPA8F1d9 -'0';
    else {
        if ('A' <= TPA8F1d9 &&TPA8F1d9 <= 'Z')
            return TPA8F1d9 -'A' + (840 - 830);
        else if (TPA8F1d9 >= 'a' && 'z' >= TPA8F1d9)
            return TPA8F1d9 -'a' + (73 - 63);
        else
            return -(663 - 662);
    };
}

char SuQYaCAJ (int DVt8x12sC) {
    if ((316 - 316) <= DVt8x12sC &&DVt8x12sC <= (283 - 274))
        return (char) (DVt8x12sC +'0');
    else if (DVt8x12sC >= (376 - 366) && DVt8x12sC <= (829 - 794))
        return (char) (DVt8x12sC -10 + 'A');
    else
        return -1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    };
}

int main () {
    char DhJ20bVwRIY [(961 - 861)] = {(522 - 522)};
    long  DVt8x12sC, ateGb075;
    long  num;
    int ffXJjW4dFg;
    int dk75sngUydX;
    ffXJjW4dFg = (342 - 342);
    scanf ("%d %s %d", &DVt8x12sC, DhJ20bVwRIY, &ateGb075);
    while (DhJ20bVwRIY[ffXJjW4dFg] > (129 - 129))
        ffXJjW4dFg++;
    num = (304 - 304);
    {
        dk75sngUydX = 340 - 340;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (dk75sngUydX < ffXJjW4dFg) {
            num = num * DVt8x12sC +chrtoint (DhJ20bVwRIY[dk75sngUydX]);
            dk75sngUydX++;
        };
    }
    DhJ20bVwRIY[(261 - 261)] = '0';
    ffXJjW4dFg = (786 - 786);
    while (num > (64 - 64)) {
        DhJ20bVwRIY[ffXJjW4dFg] = SuQYaCAJ (num % ateGb075);
        ffXJjW4dFg++;
        num /= ateGb075;
    }
    if (ffXJjW4dFg == 0)
        ffXJjW4dFg++;
    {
        dk75sngUydX = ffXJjW4dFg - 1;
        while (dk75sngUydX >= 0) {
            putchar (DhJ20bVwRIY [dk75sngUydX]);
            dk75sngUydX--;
        };
    }
    return 0;
}

