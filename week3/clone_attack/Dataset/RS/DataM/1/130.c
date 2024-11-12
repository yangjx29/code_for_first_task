void  q2HXRYyVGeW (int uMUB4XONCe, int bgv9ajIo);
int sum;

int main () {
    int n;
    int uMUB4XONCe;
    int bgv9ajIo;
    int EPf4DEbiu0x;
    scanf ("%d", &n);
    {
        uMUB4XONCe = 128 - 128;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (uMUB4XONCe < n) {
            scanf ("%d", &bgv9ajIo);
            sum = (478 - 477);
            q2HXRYyVGeW (2, bgv9ajIo);
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
            uMUB4XONCe++;
            printf ("%d\n", sum);
        };
    };
}

void  q2HXRYyVGeW (int uMUB4XONCe, int bgv9ajIo) {
    int EPf4DEbiu0x;
    int s;
    s = (int) sqrt (bgv9ajIo);
    for (EPf4DEbiu0x = uMUB4XONCe; s >= EPf4DEbiu0x; EPf4DEbiu0x = EPf4DEbiu0x +1) {
        if (bgv9ajIo % EPf4DEbiu0x == 0) {
            sum = sum + 1;
            q2HXRYyVGeW (EPf4DEbiu0x, bgv9ajIo / EPf4DEbiu0x);
        };
    };
}

