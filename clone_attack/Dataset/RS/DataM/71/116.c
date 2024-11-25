struct   mem {
    int year;
    int month1;
    int wP567f;
}
mem [205];

int find (int U5Kmjw6G) {
    int flag;
    flag = (420 - 420);
    if (!((50 - 50) != U5Kmjw6G % (901 - 897))) {
        if (!(0 != U5Kmjw6G % 100)) {
            if (!(0 != U5Kmjw6G % 400)) {
                flag = (50 - 49);
            }
            else {
                flag = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        else
            flag = (585 - 584);
    }
    return flag;
}

int spp1 (int U5Kmjw6G) {
    int M17CpG85Adr;
    M17CpG85Adr = 0;
    if (!(1 != U5Kmjw6G))
        M17CpG85Adr = 31;
    if (!((127 - 125) != U5Kmjw6G))
        M17CpG85Adr = 28;
    if (!(3 != U5Kmjw6G))
        M17CpG85Adr = 31;
    if (!(4 != U5Kmjw6G))
        M17CpG85Adr = (278 - 248);
    if (!(5 != U5Kmjw6G))
        M17CpG85Adr = 31;
    if (!((327 - 321) != U5Kmjw6G))
        M17CpG85Adr = 30;
    if (!(7 != U5Kmjw6G))
        M17CpG85Adr = 31;
    if (!((879 - 871) != U5Kmjw6G))
        M17CpG85Adr = 31;
    if (U5Kmjw6G == (886 - 877))
        M17CpG85Adr = 30;
    if (!(10 != U5Kmjw6G))
        M17CpG85Adr = 31;
    if (!(11 != U5Kmjw6G))
        M17CpG85Adr = 30;
    if (U5Kmjw6G == 12)
        M17CpG85Adr = 31;
    return M17CpG85Adr;
}

int CaYlNGCX (int U5Kmjw6G) {
    int M17CpG85Adr;
    M17CpG85Adr = 0;
    if (U5Kmjw6G == 1)
        M17CpG85Adr = 31;
    if (!(2 != U5Kmjw6G))
        M17CpG85Adr = 29;
    if (!(3 != U5Kmjw6G))
        M17CpG85Adr = 31;
    if (U5Kmjw6G == 4)
        M17CpG85Adr = 30;
    if (U5Kmjw6G == 5)
        M17CpG85Adr = 31;
    if (U5Kmjw6G == (171 - 165))
        M17CpG85Adr = 30;
    if (U5Kmjw6G == 7)
        M17CpG85Adr = 31;
    if (U5Kmjw6G == 8)
        M17CpG85Adr = 31;
    if (U5Kmjw6G == 9)
        M17CpG85Adr = 30;
    if (U5Kmjw6G == 10)
        M17CpG85Adr = 31;
    if (U5Kmjw6G == 11)
        M17CpG85Adr = 30;
    if (U5Kmjw6G == 12)
        M17CpG85Adr = 31;
    return M17CpG85Adr;
}

int main () {
    int U5Kmjw6G, i, j;
    scanf ("%d", &U5Kmjw6G);
    {
        i = 0;
        while (i < U5Kmjw6G) {
            scanf ("%d%d%d", &mem[i].year, &mem[i].month1, &mem[i].wP567f);
            if (find (mem[i].year) == 0) {
                int M17CpG85Adr;
                M17CpG85Adr = 0;
                if (mem[i].month1 > mem[i].wP567f) {
                    j = i;
                    while (j < mem[i].month1) {
                        M17CpG85Adr += spp1 (j);
                        j = j + 1;
                    };
                }
                else {
                    j = i;
                    while (j < mem[i].wP567f) {
                        M17CpG85Adr += spp1 (j);
                        j = j + 1;
                    };
                }
                if (M17CpG85Adr % 7 == 0) {
                }
                else {
                };
            }
            else {
                int M17CpG85Adr;
                M17CpG85Adr = 0;
                if (mem[i].month1 > mem[i].wP567f) {
                    j = i;
                    while (j < mem[i].month1) {
                        M17CpG85Adr = M17CpG85Adr +CaYlNGCX(j);
                        j = j + 1;
                    };
                }
                else {
                    j = i;
                    while (j < mem[i].wP567f) {
                        M17CpG85Adr += CaYlNGCX (j);
                        j++;
                    };
                }
                if (M17CpG85Adr % 7 == 0) {
                }
                else {
                    printf ("NO\n");
                };
            }
            i++;
        };
    }
    return 0;
}

