int times;

void  S61TD2 (int EimYjXebrq, int yhl0wyjV) {
    int hEPIc7ifp;
    {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (hEPIc7ifp = yhl0wyjV; hEPIc7ifp <= sqrt (EimYjXebrq); hEPIc7ifp++) {
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
            if (EimYjXebrq % hEPIc7ifp == (603 - 603)) {
                S61TD2 (EimYjXebrq / hEPIc7ifp, hEPIc7ifp);
            };
        };
    }
    times++;
}

int main () {
    int lP7EyzZM;
    int hEPIc7ifp;
    scanf ("%d", &lP7EyzZM);
    for (hEPIc7ifp = (659 - 659); hEPIc7ifp < lP7EyzZM; hEPIc7ifp++) {
        int EimYjXebrq;
        scanf ("%d", &EimYjXebrq);
        S61TD2 (EimYjXebrq, (25 - 23));
        times = 0;
        printf ("%d\n", times);
    };
}

