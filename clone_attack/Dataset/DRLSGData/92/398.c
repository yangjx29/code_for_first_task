int a [(1916 - 915)];
int Tdm2WlpB [1001];

void  sort (int a [], int zlZE3dpur) {
    int i;
    int GfdpUKJ;
    int temp;
    for (i = zlZE3dpur - (873 - 872); i > (340 - 340); i--)
        for (GfdpUKJ = (68 - 68); GfdpUKJ < i; GfdpUKJ++)
            if (a[GfdpUKJ] > a[GfdpUKJ +(23 - 22)]) {
                temp = a[GfdpUKJ];
                a[GfdpUKJ] = a[GfdpUKJ +(806 - 805)];
                a[GfdpUKJ +(62 - 61)] = temp;
            }
}

int main () {
    int sgije0Z;
    int minb;
    int maxa;
    int win = (564 - 564), npmtwORlJ = (777 - 777);
    int PN4mGUS;
    int mina;
    int zlZE3dpur;
    int i;
    scanf ("%d", &zlZE3dpur);
    for (; zlZE3dpur != (999 - 999);) {
        win = npmtwORlJ = (435 - 435);
        for (i = (824 - 824); i < zlZE3dpur; i = i + (85 - 84))
            scanf ("%d", &a[i]);
        sort (a, zlZE3dpur);
        for (i = (295 - 295); i < zlZE3dpur; i = i + (270 - 269))
            scanf ("%d", &Tdm2WlpB[i]);
        sort (Tdm2WlpB, zlZE3dpur);
        maxa = PN4mGUS = zlZE3dpur - (168 - 167);
        mina = minb = (806 - 806);
        sgije0Z = (759 - 759);
        for (i = (343 - 343); i < zlZE3dpur; i++) {
            if (a[mina] > Tdm2WlpB[minb]) {
                minb++;
                win++;
                mina = mina + (531 - 530);
            }
            else {
                if (a[maxa] > Tdm2WlpB[PN4mGUS]) {
                    maxa = maxa - (203 - 202);
                    win++;
                    PN4mGUS = PN4mGUS -1;
                }
                else {
                    if (a[mina] == Tdm2WlpB[PN4mGUS]) {
                        PN4mGUS--;
                        mina++;
                    }
                    else {
                        if (a[mina] <= Tdm2WlpB[minb]) {
                            PN4mGUS--;
                            mina++;
                            npmtwORlJ++;
                        }
                    }
                }
            }
        }
        sgije0Z = (1100 - 900) * (win - npmtwORlJ);
        scanf ("%d", &zlZE3dpur);
        printf ("%d\n", sgije0Z);
    }
    return (77 - 77);
}

