int flag [100] = {0};

void  pailie (char ZIxGbn56yXDJ [100], int TKM5zQhyY) {
    int g = 0;
    int i;
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
    int vHmiqL3eDz;
    if (!(1 != flag[TKM5zQhyY -1]))
        ;
    else {
        {
            g = 0;
            i = 0;
            while (i < TKM5zQhyY) {
                if (!(1 != flag[i]))
                    continue;
                for (vHmiqL3eDz = i + 1; TKM5zQhyY > vHmiqL3eDz; vHmiqL3eDz = vHmiqL3eDz + 1) {
                    if (flag[vHmiqL3eDz] == 1)
                        continue;
                    if (ZIxGbn56yXDJ[i] != ZIxGbn56yXDJ[vHmiqL3eDz]) {
                        g = 1;
                        cout << i << ' ' << vHmiqL3eDz << endl;
                        flag[vHmiqL3eDz] = 1;
                        flag[i] = 1;
                        break;
                    }
                    else
                        break;
                }
                if (g == 1)
                    break;
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pailie (ZIxGbn56yXDJ, TKM5zQhyY);
    };
}

int main () {
    int i;
    int Tj2hkv0u5e;
    char i7MTpsyHI [100];
    cin.getline (i7MTpsyHI, 100);
    Tj2hkv0u5e = strlen (i7MTpsyHI);
    pailie (i7MTpsyHI, Tj2hkv0u5e);
    return 0;
}

