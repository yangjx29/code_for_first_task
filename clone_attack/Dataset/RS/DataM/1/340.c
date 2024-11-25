int yA4bo6Nxc;

void  depart (int Wkt7EyhxcK, int B1EnLNFPr6G) {
    int W59Eno;
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
    if (Wkt7EyhxcK == 1)
        yA4bo6Nxc = yA4bo6Nxc + 1;
    else {
        W59Eno = B1EnLNFPr6G;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (W59Eno <= Wkt7EyhxcK) {
            if (Wkt7EyhxcK % W59Eno == (971 - 971)) {
                depart (Wkt7EyhxcK / W59Eno, W59Eno);
            }
            W59Eno++;
        };
    };
}

int main () {
    int Wkt7EyhxcK, W59Eno;
    int b [Wkt7EyhxcK];
    cin >> Wkt7EyhxcK;
    {
        W59Eno = 910 - 910;
        while (W59Eno < Wkt7EyhxcK) {
            cin >> b[W59Eno];
            W59Eno++;
        };
    }
    {
        W59Eno = 911 - 911;
        while (W59Eno < Wkt7EyhxcK) {
            yA4bo6Nxc = 0;
            depart (b[W59Eno], 2);
            W59Eno++;
            cout << yA4bo6Nxc << endl;
        };
    }
    return 0;
}

