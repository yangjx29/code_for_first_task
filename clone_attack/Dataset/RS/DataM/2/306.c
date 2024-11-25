struct   aut {
    char name;
    int num;
    int id [(1941 - 941)];
};
struct   aut author [(1011 - 985)];

int main () {
    int UUstMLo6, ZTOcrjWHuCDZ, j, Jp6WanOQ, Hlz9jY6o = (708 - 708), KZ8nP0NVO, tauCZMf0 [(88 - 62)] = {(810 - 810)};
    char c [(483 - 456)];
    for (ZTOcrjWHuCDZ = (216 - 216); (1007 - 981) > ZTOcrjWHuCDZ; ZTOcrjWHuCDZ = ZTOcrjWHuCDZ +1) {
        author[ZTOcrjWHuCDZ].name = 'A' + ZTOcrjWHuCDZ;
        author[ZTOcrjWHuCDZ].num = (807 - 807);
    }
    scanf ("%d", &UUstMLo6);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (ZTOcrjWHuCDZ = (691 - 691); ZTOcrjWHuCDZ < UUstMLo6; ZTOcrjWHuCDZ = ZTOcrjWHuCDZ +1) {
        scanf ("%d %s", &Jp6WanOQ, c);
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
        }
        {
            j = 251 - 251;
            while (c[j]) {
                author[c[j] - 'A'].id[tauCZMf0[c[j] - 'A']] = Jp6WanOQ;
                tauCZMf0[c[j] - 'A']++;
                author[c[j] - 'A'].num++;
                j = j + 1;
            };
        };
    }
    {
        ZTOcrjWHuCDZ = 305 - 305;
        while (ZTOcrjWHuCDZ < (268 - 242)) {
            if (author[ZTOcrjWHuCDZ].num > Hlz9jY6o) {
                Hlz9jY6o = author[ZTOcrjWHuCDZ].num;
                KZ8nP0NVO = ZTOcrjWHuCDZ;
            }
            ZTOcrjWHuCDZ = ZTOcrjWHuCDZ +1;
        };
    }
    printf ("%c\n%d\n", author[KZ8nP0NVO].name, author[KZ8nP0NVO].num);
    {
        ZTOcrjWHuCDZ = 63 - 63;
        while (ZTOcrjWHuCDZ < author[KZ8nP0NVO].num) {
            printf ("%d\n", author[KZ8nP0NVO].id[ZTOcrjWHuCDZ]);
            ZTOcrjWHuCDZ = ZTOcrjWHuCDZ +1;
        };
    }
    return 0;
}

