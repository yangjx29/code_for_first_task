int main () {
    int Osp7HqVDdiyO;
    int gT6VwugKyjFp;
    int i;
    int KXQd2jg7uaJ;
    int NQpdct [100];
    gT6VwugKyjFp = 0;
    i = 0;
    KXQd2jg7uaJ = 0;
    scanf ("%d", &Osp7HqVDdiyO);
    for (i = (587 - 586); i <= Osp7HqVDdiyO; i = i + 1)
        scanf ("%d", &NQpdct[i]);
    for (KXQd2jg7uaJ = (376 - 375); Osp7HqVDdiyO >= KXQd2jg7uaJ; KXQd2jg7uaJ = KXQd2jg7uaJ +1) {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= Osp7HqVDdiyO -KXQd2jg7uaJ) {
            if (NQpdct[i] < NQpdct[i + 1]) {
                gT6VwugKyjFp = NQpdct[i];
                NQpdct[i] = NQpdct[i + 1];
                NQpdct[i + 1] = gT6VwugKyjFp;
            }
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
            i = i + 1;
        };
    }
    printf ("%d\n", NQpdct[1]);
    printf ("%d\n", NQpdct[2]);
    for (i = 1; i <= Osp7HqVDdiyO; i = i + 1)
        ;
    return 0;
}

