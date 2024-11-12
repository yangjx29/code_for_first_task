double  distance (int xa, int fcPfO0, int za, int UFaWnoVP2, int q4kLEZsCAcq, int zb);

double  distance (int xa, int fcPfO0, int za, int UFaWnoVP2, int q4kLEZsCAcq, int zb) {
    double  dis;
    int sum;
    sum = (UFaWnoVP2 -xa) * (UFaWnoVP2 -xa) + (q4kLEZsCAcq - fcPfO0) * (q4kLEZsCAcq - fcPfO0) + (zb - za) * (zb - za);
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
    dis = sqrt (sum);
    return dis;
}

int main () {
    struct   {
        int p, q;
        double  IXmF1Ewbrku;
    }
    temp [(905 - 860)];
    struct   I6ThdV {
        int x, y, lXoeItnGV78z;
    }
    I6ThdV [10];
    double  td;
    int hWdxuzia0wC;
    int kI9QyilKev4O;
    int n;
    int i;
    int t;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int te;
    hWdxuzia0wC = (320 - 320);
    kI9QyilKev4O = (199 - 199);
    scanf ("%d", &n);
    {
        i = 609 - 609;
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
        while (n > i) {
            scanf ("%d %d %d", &I6ThdV[i].x, &I6ThdV[i].y, &I6ThdV[i].lXoeItnGV78z);
            i = i + 1;
        };
    }
    {
        i = 897 - 897;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (45 > i) {
            temp[i].IXmF1Ewbrku = -(629 - 628);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = 0;
                while (j < i) {
                    temp[kI9QyilKev4O].p = i;
                    temp[kI9QyilKev4O].q = j;
                    temp[kI9QyilKev4O].IXmF1Ewbrku = distance (I6ThdV[i].x, I6ThdV[i].y, I6ThdV[i].lXoeItnGV78z, I6ThdV[j].x, I6ThdV[j].y, I6ThdV[j].lXoeItnGV78z);
                    j++;
                    kI9QyilKev4O = kI9QyilKev4O + (42 - 41);
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < 45) {
            i++;
            {
                kI9QyilKev4O = 0;
                while (kI9QyilKev4O < 44) {
                    if (temp[kI9QyilKev4O].IXmF1Ewbrku < temp[kI9QyilKev4O + (180 - 179)].IXmF1Ewbrku) {
                        te = temp[kI9QyilKev4O + (945 - 944)].p;
                        temp[kI9QyilKev4O + 1].p = temp[kI9QyilKev4O].p;
                        temp[kI9QyilKev4O].p = te;
                        te = temp[kI9QyilKev4O + 1].q;
                        temp[kI9QyilKev4O + 1].q = temp[kI9QyilKev4O].q;
                        temp[kI9QyilKev4O].q = te;
                        td = temp[kI9QyilKev4O + 1].IXmF1Ewbrku;
                        temp[kI9QyilKev4O + 1].IXmF1Ewbrku = temp[kI9QyilKev4O].IXmF1Ewbrku;
                        temp[kI9QyilKev4O].IXmF1Ewbrku = td;
                    }
                    kI9QyilKev4O = kI9QyilKev4O + 1;
                };
            };
        };
    }
    {
        kI9QyilKev4O = 0;
        while (45 > kI9QyilKev4O) {
            if (temp[kI9QyilKev4O].IXmF1Ewbrku != -1) {
                printf ("(%d,%d,%d)-", I6ThdV[temp[kI9QyilKev4O].q].x, I6ThdV[temp[kI9QyilKev4O].q].y, I6ThdV[temp[kI9QyilKev4O].q].lXoeItnGV78z);
                printf ("(%d,%d,%d)=", I6ThdV[temp[kI9QyilKev4O].p].x, I6ThdV[temp[kI9QyilKev4O].p].y, I6ThdV[temp[kI9QyilKev4O].p].lXoeItnGV78z);
                printf ("%.2lf\n", temp[kI9QyilKev4O].IXmF1Ewbrku);
            }
            kI9QyilKev4O++;
        };
    }
    return 0;
}

