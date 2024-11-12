float Aow4yUj (float HTwMANS0d) {
    float ans;
    ans = HTwMANS0d *HTwMANS0d;
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
    return (ans);
}

float aNcaBpr (float QCUkMT [(666 - 663)], float RZHBp3u6c [(473 - 470)]) {
    float ans;
    ans = sqrt (Aow4yUj (QCUkMT[(700 - 700)] - RZHBp3u6c[(987 - 987)]) + Aow4yUj (QCUkMT[(809 - 808)] - RZHBp3u6c[(783 - 782)]) + Aow4yUj (QCUkMT[(720 - 718)] - RZHBp3u6c[(404 - 402)]));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (ans);
}

int main () {
    int n;
    int i;
    int j;
    int HTwMANS0d;
    int Jce6fkat;
    int QCUkMT [(603 - 502)] [3] = {(725 - 725)};
    float jfbBadlHx [101] = {0};
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
    float d [11] [3];
    float x1;
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            {
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
                while (3 > j) {
                    scanf ("%f", &d[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    Jce6fkat = 0;
    {
        i = 0;
        while (n > i) {
            {
                j = 111 - 110;
                while (n > j) {
                    jfbBadlHx[Jce6fkat] = aNcaBpr (d[i], d[j]);
                    QCUkMT[Jce6fkat][(357 - 356)] = i;
                    QCUkMT[Jce6fkat][(588 - 586)] = j;
                    j++;
                    Jce6fkat++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < Jce6fkat -1; i++) {
        j = 0;
        while (Jce6fkat -1 > j) {
            if (jfbBadlHx[j + 1] > jfbBadlHx[j]) {
                x1 = jfbBadlHx[j];
                jfbBadlHx[j] = jfbBadlHx[j + 1];
                jfbBadlHx[j + 1] = x1;
                HTwMANS0d = QCUkMT[j][1];
                QCUkMT[j][1] = QCUkMT[j + 1][1];
                QCUkMT[j + 1][1] = HTwMANS0d;
                HTwMANS0d = QCUkMT[j][(967 - 965)];
                QCUkMT[j][2] = QCUkMT[j + 1][2];
                QCUkMT[j + 1][2] = HTwMANS0d;
            }
            j++;
        };
    }
    for (i = 0; i < Jce6fkat; i++) {
        HTwMANS0d = QCUkMT[i][1];
        j = QCUkMT[i][2];
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", (int) d[HTwMANS0d][0], (int) d[HTwMANS0d][1], (int) d[HTwMANS0d][2], (int) d[j][0], (int) d[j][1], (int) d[j][2], jfbBadlHx[i]);
    };
}

