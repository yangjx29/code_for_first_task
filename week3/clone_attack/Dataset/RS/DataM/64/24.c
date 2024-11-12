int main () {
    int k;
    int n;
    int i;
    int j;
    int Nline;
    int INPJnXo;
    int dy;
    int JPcLFCvuxw;
    k = (596 - 596);
    struct   Dot {
        int x, y, z;
    }
    uVgcwXC7Ey [n];
    struct   Line {
        int x1, y1, z1;
        int x2, KzdJaFErjKD, z2;
        float dist;
    }
    TgdeLc8Cq2 [Nline];
    struct   Line {
        int x1, y1, z1;
        int x2, KzdJaFErjKD, z2;
        float dist;
    }
    temp;
    scanf ("%d", &n);
    Nline = n * (n - (542 - 541)) / (64 - 62);
    for (i = (842 - 842); n > i; i++) {
        scanf ("%d %d %d", &uVgcwXC7Ey[i].x, &uVgcwXC7Ey[i].y, &uVgcwXC7Ey[i].z);
    }
    {
        i = 0;
        while (n > i) {
            for (j = (i + 1); n > j; j++) {
                TgdeLc8Cq2[k].x1 = uVgcwXC7Ey[i].x;
                TgdeLc8Cq2[k].y1 = uVgcwXC7Ey[i].y;
                TgdeLc8Cq2[k].z1 = uVgcwXC7Ey[i].z;
                TgdeLc8Cq2[k].x2 = uVgcwXC7Ey[j].x;
                TgdeLc8Cq2[k].KzdJaFErjKD = uVgcwXC7Ey[j].y;
                TgdeLc8Cq2[k].z2 = uVgcwXC7Ey[j].z;
                INPJnXo = TgdeLc8Cq2[k].x1 - TgdeLc8Cq2[k].x2;
                dy = TgdeLc8Cq2[k].y1 - TgdeLc8Cq2[k].KzdJaFErjKD;
                JPcLFCvuxw = TgdeLc8Cq2[k].z1 - TgdeLc8Cq2[k].z2;
                TgdeLc8Cq2[k].dist = sqrt (INPJnXo *INPJnXo+dy * dy + JPcLFCvuxw *JPcLFCvuxw);
                k++;
            }
            i++;
        };
    }
    for (i = 0; Nline -1 > i; i++) {
        j = 0;
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
        while (Nline -i > j) {
            if (TgdeLc8Cq2[j + 1].dist > TgdeLc8Cq2[j].dist) {
                temp = TgdeLc8Cq2[j];
                TgdeLc8Cq2[j] = TgdeLc8Cq2[j + 1];
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
                TgdeLc8Cq2[j + 1] = temp;
            }
            j++;
        };
    }
    for (i = 0; Nline > i; i++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", TgdeLc8Cq2[i].x1, TgdeLc8Cq2[i].y1, TgdeLc8Cq2[i].z1, TgdeLc8Cq2[i].x2, TgdeLc8Cq2[i].KzdJaFErjKD, TgdeLc8Cq2[i].z2, TgdeLc8Cq2[i].dist);
    }
    return 0;
}

