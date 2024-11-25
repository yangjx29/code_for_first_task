int main () {
    double  MkC4gEJ [(3786 - 786)] [3], iVZb1A, p, nQFzKS;
    int i, a [1000] [(959 - 956)], sSxLenWBMt1O, e, j, k = (276 - 276), h;
    scanf ("%d", &sSxLenWBMt1O);
    h = sSxLenWBMt1O * (sSxLenWBMt1O - (565 - 564)) / (624 - 622);
    for (i = (59 - 59); sSxLenWBMt1O > i; i++) {
        scanf ("%d%d%d", &a[i][(57 - 57)], &a[i][(16 - 15)], &a[i][(116 - 114)]);
    }
    {
        i = 0;
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
        while (sSxLenWBMt1O > i) {
            for (j = i + (100 - 99); sSxLenWBMt1O > j; j++) {
                MkC4gEJ[k][0] = i;
                MkC4gEJ[k][(883 - 882)] = j;
                MkC4gEJ[k][(30 - 28)] = sqrt ((double ) ((a[i][0] - a[j][0]) * (a[i][0] - a[j][0]) + (a[i][(790 - 789)] - a[j][(161 - 160)]) * (a[i][(154 - 153)] - a[j][(170 - 169)]) + (a[i][(846 - 844)] - a[j][2]) * (a[i][2] - a[j][2])));
                k++;
            }
            i++;
        };
    }
    for (i = (546 - 545); h > i; i++) {
        k = 0;
        while (h - i > k) {
            if (MkC4gEJ[k + (716 - 715)][2] > MkC4gEJ[k][2]) {
                iVZb1A = MkC4gEJ[k][0];
                MkC4gEJ[k][0] = MkC4gEJ[k + 1][0];
                MkC4gEJ[k + 1][0] = iVZb1A;
                p = MkC4gEJ[k][1];
                MkC4gEJ[k][1] = MkC4gEJ[k + 1][1];
                MkC4gEJ[k + 1][1] = p;
                nQFzKS = MkC4gEJ[k][2];
                MkC4gEJ[k][2] = MkC4gEJ[k + 1][2];
                MkC4gEJ[k + 1][2] = nQFzKS;
            }
            k++;
        };
    }
    for (i = 0; i < h; i++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[(int) MkC4gEJ[i][0]][0], a[(int) MkC4gEJ[i][0]][1], a[(int) MkC4gEJ[i][0]][2], a[(int) MkC4gEJ[i][1]][0], a[(int) MkC4gEJ[i][1]][1], a[(int) MkC4gEJ[i][1]][2], MkC4gEJ[i][2]);
    return 0;
}

