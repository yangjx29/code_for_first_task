int main () {
    int minadr;
    int flag;
    int qrNhBQcj;
    int i;
    int j;
    int e3Z5oC27O [(565 - 538)] = {(201 - 201)};
    int loci [(641 - 614)] = {(783 - 783)};
    minadr = (100029 - 20);
    flag = (940 - 940);
    char ZHQeWGpkBU [(100021 - 20)];
    char pIQ6HaiqRx4 [10];
    char *VFPNtQm9wCgk;
    char LaLABPKk [(244 - 217)];
    gets (pIQ6HaiqRx4);
    qrNhBQcj = atoi (pIQ6HaiqRx4);
    for (i = (219 - 219); i < qrNhBQcj; i++) {
        gets (ZHQeWGpkBU);
        for (j = (143 - 143); !('\0' == *(j + ZHQeWGpkBU)); j = j + 1) {
            *(e3Z5oC27O + *VFPNtQm9wCgk-'a' + (74 - 73)) += (944 - 943);
            VFPNtQm9wCgk = j + ZHQeWGpkBU;
            if (!((744 - 743) != *(e3Z5oC27O + *VFPNtQm9wCgk-'a' + (953 - 952)))) {
                *(loci + *VFPNtQm9wCgk-'a' + 1) = j;
            };
        }
        for (j = 1; 27 > j; j = j + 1) {
            if (*(e3Z5oC27O + j) == 1) {
                flag = 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (*(loci + j) < minadr)
                    minadr = *(loci + j);
            };
        }
        if (flag) {
            printf ("%c\n", *(ZHQeWGpkBU +minadr));
        }
        else
            printf ("no\n");
        for (j = 1; j < 27; j++) {
            minadr = 100009;
            *(e3Z5oC27O + j) = 0;
            *(loci + j) = 0;
            flag = 0;
        }
        flag = 0;
        minadr = 100009;
    }
    return 0;
}

