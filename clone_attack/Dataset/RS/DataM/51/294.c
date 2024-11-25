struct   chain {
    char qGjrZb [6];
    int rHPhWObS3;
};
void  I4utXfZ (struct   chain JV897KvCL [], int vP1iB69zZeC) {
    int RFNBVj7pzqQE, fxD0Wz4w;
    struct   chain temp;
    {
        RFNBVj7pzqQE = vP1iB69zZeC - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((143 - 143) < RFNBVj7pzqQE) {
            {
                fxD0Wz4w = 801 - 801;
                while (RFNBVj7pzqQE >= fxD0Wz4w) {
                    if (JV897KvCL[fxD0Wz4w + 1].rHPhWObS3 > JV897KvCL[fxD0Wz4w].rHPhWObS3) {
                        temp = JV897KvCL[fxD0Wz4w];
                        JV897KvCL[fxD0Wz4w] = JV897KvCL[fxD0Wz4w + 1];
                        JV897KvCL[fxD0Wz4w + 1] = temp;
                    }
                    fxD0Wz4w = fxD0Wz4w + 1;
                };
            }
            RFNBVj7pzqQE = RFNBVj7pzqQE -1;
        };
    };
}

int main () {
    struct   chain JV897KvCL [500];
    int RFNBVj7pzqQE, fxD0Wz4w, plbp5e;
    char gWuX5jTv [501];
    char jhtQsHgi [6];
    char GHmI4Quk;
    {
        RFNBVj7pzqQE = 0;
        while (500 >= RFNBVj7pzqQE) {
            JV897KvCL[RFNBVj7pzqQE].rHPhWObS3 = 1;
            RFNBVj7pzqQE = RFNBVj7pzqQE +1;
        };
    }
    scanf ("%d", &plbp5e);
    scanf ("%s", gWuX5jTv);
    {
        RFNBVj7pzqQE = 0;
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
        while (RFNBVj7pzqQE <= strlen (gWuX5jTv) - plbp5e) {
            {
                fxD0Wz4w = 0;
                while (plbp5e > fxD0Wz4w) {
                    jhtQsHgi[fxD0Wz4w] = gWuX5jTv[RFNBVj7pzqQE +fxD0Wz4w];
                    fxD0Wz4w = fxD0Wz4w + 1;
                };
            }
            jhtQsHgi[fxD0Wz4w] = '\0';
            strcpy (JV897KvCL[RFNBVj7pzqQE].qGjrZb, jhtQsHgi);
            RFNBVj7pzqQE = RFNBVj7pzqQE +1;
        };
    }
    {
        RFNBVj7pzqQE = 0;
        while (RFNBVj7pzqQE < strlen (gWuX5jTv) - plbp5e) {
            {
                fxD0Wz4w = RFNBVj7pzqQE +1;
                while (strlen (gWuX5jTv) - plbp5e >= fxD0Wz4w) {
                    if (strcmp (JV897KvCL[RFNBVj7pzqQE].qGjrZb, JV897KvCL[fxD0Wz4w].qGjrZb) == 0) {
                        JV897KvCL[RFNBVj7pzqQE].rHPhWObS3++;
                    }
                    fxD0Wz4w = fxD0Wz4w + 1;
                };
            }
            RFNBVj7pzqQE = RFNBVj7pzqQE +1;
        };
    }
    I4utXfZ (JV897KvCL, strlen (gWuX5jTv) - plbp5e);
    if (JV897KvCL[0].rHPhWObS3 > 1) {
        printf ("%d\n", JV897KvCL[0].rHPhWObS3);
        printf ("%s\n", JV897KvCL[0].qGjrZb);
        {
            RFNBVj7pzqQE = 1;
            while (RFNBVj7pzqQE <= strlen (gWuX5jTv) - plbp5e) {
                if (JV897KvCL[RFNBVj7pzqQE].rHPhWObS3 == JV897KvCL[0].rHPhWObS3 && (strcmp (JV897KvCL[RFNBVj7pzqQE].qGjrZb, JV897KvCL[RFNBVj7pzqQE -1].qGjrZb) != 0))
                    printf ("%s\n", JV897KvCL[RFNBVj7pzqQE].qGjrZb);
                RFNBVj7pzqQE++;
            };
        };
    }
    else
        ;
    return 0;
}

