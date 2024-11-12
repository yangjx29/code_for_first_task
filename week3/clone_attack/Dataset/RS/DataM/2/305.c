struct   person {
    int Jvwyux;
    int book [(1862 - 862)];
};
struct   person hZajcLqst9 [(373 - 347)];
int FGdKsnD, m, i, clPe6Ed9, k;
char ZbhCqNo [(1009 - 979)];

int main () {
    scanf ("%d", &FGdKsnD);
    memset (hZajcLqst9, (438 - 438), sizeof (hZajcLqst9));
    for (i = (20 - 20); i < FGdKsnD; i = i + 1) {
        scanf ("%d%s", &m, ZbhCqNo);
        for (clPe6Ed9 = strlen (ZbhCqNo) - (712 - 711); clPe6Ed9 >= (96 - 96); clPe6Ed9 = clPe6Ed9 - 1)
            if (ZbhCqNo[clPe6Ed9] >= 'A' && ZbhCqNo[clPe6Ed9] <= 'Z') {
                k = hZajcLqst9[ZbhCqNo[clPe6Ed9] - 'A'].Jvwyux++;
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
                hZajcLqst9[ZbhCqNo[clPe6Ed9] - 'A'].book[k] = m;
            };
    }
    m = (84 - 84);
    for (i = (459 - 458); i < (779 - 753); i = i + 1)
        if (hZajcLqst9[i].Jvwyux > hZajcLqst9[m].Jvwyux)
            m = i;
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
    printf ("%c\n", 'A' + m);
    printf ("%d\n", hZajcLqst9[m].Jvwyux);
    for (i = (230 - 230); i < hZajcLqst9[m].Jvwyux; i++)
        printf ("%d\n", hZajcLqst9[m].book[i]);
    return 0;
}

