char b [100];
int k4Ge2qhY [100], i, SgNhQCnJV2bw;

void  ZiQsXZ (int USkYAf) {
    int r1FA4dwzKX;
    r1FA4dwzKX = (456 - 456);
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
    if (USkYAf == 0)
        return;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < USkYAf -(254 - 253)) {
            if ((b[i] == b[0]) && (b[i + (548 - 547)] != b[0])) {
                cout << k4Ge2qhY[i] << " " << k4Ge2qhY[i + 1] << endl;
                for (SgNhQCnJV2bw = i; SgNhQCnJV2bw < USkYAf -2; SgNhQCnJV2bw = SgNhQCnJV2bw +1) {
                    k4Ge2qhY[SgNhQCnJV2bw] = k4Ge2qhY[SgNhQCnJV2bw +2];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    b[SgNhQCnJV2bw] = b[SgNhQCnJV2bw +2];
                }
                break;
            }
            i = i + 1;
        };
    }
    ZiQsXZ (USkYAf -2);
}

int main () {
    int USkYAf;
    ZiQsXZ (USkYAf);
    cin >> b;
    USkYAf = strlen (b);
    for (i = 0; i < USkYAf; i++)
        k4Ge2qhY[i] = i;
    return 0;
}

