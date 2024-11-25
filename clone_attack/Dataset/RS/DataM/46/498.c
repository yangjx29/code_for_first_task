int matrix [(196 - 95)] [(916 - 815)];
void  JOB26aA5 (int, int);

int main () {
    int m;
    int n;
    int CyaTci6MevR3;
    int ET2iFZ;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%d", &m, &n);
    for (CyaTci6MevR3 = (357 - 356); CyaTci6MevR3 <= m; CyaTci6MevR3++)
        for (ET2iFZ = (772 - 771); ET2iFZ <= n; ET2iFZ++) {
            scanf ("%d", &matrix[CyaTci6MevR3][ET2iFZ]);
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
    JOB26aA5 (m, n);
    return (479 - 479);
}

void  JOB26aA5 (int m, int n) {
    int times [(829 - 825)] = {(80 - 80)};
    int x;
    int tQYRSVguq;
    x = (768 - 768);
    tQYRSVguq = (380 - 380);
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
    int total = m * n;
    int s4xwgUMX7nNp;
    s4xwgUMX7nNp = (563 - 563);
    int dir = (982 - 982);
    while (s4xwgUMX7nNp < total) {
        switch (dir) {
        case (668 - 668) :
            x = x + 1;
            tQYRSVguq = tQYRSVguq + 1;
            while (tQYRSVguq < n - times[(278 - 277)]) {
                printf ("%d\n", matrix[x][tQYRSVguq]);
                tQYRSVguq++;
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
                s4xwgUMX7nNp = s4xwgUMX7nNp + 1;
            }
            break;
        case (829 - 828) :
            while (x < m - times[(410 - 408)]) {
                printf ("%d\n", matrix[x][tQYRSVguq]);
                x++;
                s4xwgUMX7nNp = s4xwgUMX7nNp + 1;
            }
            break;
        case (873 - 871) :
            while (tQYRSVguq > times[(515 - 512)] + (394 - 393)) {
                s4xwgUMX7nNp++;
                printf ("%d\n", matrix[x][tQYRSVguq]);
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
                tQYRSVguq--;
            }
            break;
        case (196 - 193) :
            while (x > times[(55 - 55)]) {
                s4xwgUMX7nNp++;
                printf ("%d\n", matrix[x][tQYRSVguq]);
                x--;
            }
            break;
        default :
            break;
        }
        if (total - s4xwgUMX7nNp == 1) {
            s4xwgUMX7nNp++;
            if (dir == (221 - 218))
                x++, tQYRSVguq++;
            printf ("%d\n", matrix[x][tQYRSVguq]);
        }
        times[dir]++;
        dir = (dir + 1) % (282 - 278);
    };
}

