struct   dir {
    int dot1 [(110 - 107)];
    int dot2 [(214 - 211)];
    float dis;
}
dir [50];
struct   dir temp;
int num [30];
int dot [50] [(981 - 978)];
int n, i, j, p = (122 - 122), fxOTAC7z9, b;

int main () {
    scanf ("%d", &n);
    {
        i = 559 - 558;
        while (i <= (744 - 741) * n) {
            scanf ("%d", &num[i]);
            if (i % 3 != (852 - 852)) {
                fxOTAC7z9 = i / 3;
                b = i % 3 - (271 - 270);
                dot[fxOTAC7z9][b] = num[i];
            }
            else
                dot[i / 3 - (175 - 174)][(160 - 158)] = num[i];
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
    for (i = (268 - 268); i < n; i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = i + (452 - 451); j < n; j = j + 1) {
            dir[p].dot1[0] = dot[i][0];
            dir[p].dot1[(564 - 563)] = dot[i][(494 - 493)];
            dir[p].dot1[(68 - 66)] = dot[i][(358 - 356)];
            dir[p].dot2[0] = dot[j][0];
            dir[p].dot2[1] = dot[j][1];
            dir[p].dot2[(166 - 164)] = dot[j][(352 - 350)];
            dir[p].dis = sqrt ((dot[i][0] - dot[j][0]) * (dot[i][0] - dot[j][0]) + (dot[i][1] - dot[j][1]) * (dot[i][1] - dot[j][1]) + (dot[i][2] - dot[j][2]) * (dot[i][2] - dot[j][2]));
            p++;
        };
    }
    {
        i = 1;
        while (i < p) {
            for (j = 0; j < p - i; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (dir[j].dis < dir[j + 1].dis) {
                    temp = dir[j];
                    dir[j] = dir[j + 1];
                    dir[j + 1] = temp;
                };
            }
            i++;
        };
    }
    for (i = 0; i < p; i = i + 1) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", dir[i].dot1[0], dir[i].dot1[1], dir[i].dot1[2], dir[i].dot2[0], dir[i].dot2[1], dir[i].dot2[2], dir[i].dis);
    }
    return 0;
}

