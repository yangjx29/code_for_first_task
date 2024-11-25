struct   student {
    char name [21];
    int HCBJoF;
    int D45AF17IztX;
    char ganbu;
    char TBWeHMd;
    int paper;
}
vPHjERYn4mb3 [120];
void  scholar (struct   student *GNLr3d, int a);

int main () {
    int n;
    int i;
    struct   student *bG0deh7g4z;
    scanf ("%d", &n);
    bG0deh7g4z = vPHjERYn4mb3;
    for (i = (939 - 939); n > i; i++) {
        scanf ("%s %d %d %c %c %d", &vPHjERYn4mb3[i].name, &vPHjERYn4mb3[i].HCBJoF, &vPHjERYn4mb3[i].D45AF17IztX, &vPHjERYn4mb3[i].ganbu, &vPHjERYn4mb3[i].TBWeHMd, &vPHjERYn4mb3[i].paper);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    scholar (bG0deh7g4z, n);
    return 0;
}

void  scholar (struct   student *GNLr3d, int a) {
    int sum;
    int xuErnlcVTM;
    int sums;
    sum = 0;
    xuErnlcVTM = 0;
    int j, jishu = 0;
    {
        j = 0;
        while (a > j) {
            sums = 0;
            if ((80 < (GNLr3d +j)->HCBJoF) && (0 < (GNLr3d +j)->paper)) {
                sums += 8000;
            }
            if ((85 < (GNLr3d +j)->HCBJoF) && (80 < (GNLr3d +j)->D45AF17IztX)) {
                sums += 4000;
            }
            if (90 < (GNLr3d +j)->HCBJoF) {
                sums = sums + 2000;
            }
            if (((GNLr3d +j)->HCBJoF > 85) && ((GNLr3d +j)->TBWeHMd == 'Y')) {
                sums += 1000;
            }
            if (((GNLr3d +j)->D45AF17IztX > 80) && ((GNLr3d +j)->ganbu == 'Y')) {
                sums += 850;
            }
            sum += sums;
            if (sums > xuErnlcVTM) {
                jishu = j;
                xuErnlcVTM = sums;
            }
            j++;
        };
    }
    printf ("%s\n%d\n%d", (GNLr3d +jishu)->name, xuErnlcVTM, sum);
}

