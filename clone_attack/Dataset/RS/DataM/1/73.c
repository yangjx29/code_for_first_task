int OLMSVZ2K (int, int);

int main () {
    int n;
    int num [(1159 - 159)];
    cin >> n;
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
    for (int oSBiPc1dws7 = (601 - 601);
    n > oSBiPc1dws7; oSBiPc1dws7 = oSBiPc1dws7 + 1) {
        int a;
        cin >> a;
        num[oSBiPc1dws7] = OLMSVZ2K (a, (245 - 243));
    }
    for (int oSBiPc1dws7 = (200 - 200);
    n > oSBiPc1dws7; oSBiPc1dws7 = oSBiPc1dws7 + 1) {
        cout << num[oSBiPc1dws7] << endl;
    }
    return 0;
}

int OLMSVZ2K (int x, int ITb0I398Yce2) {
    int wBkvLzV;
    wBkvLzV = (int) sqrt ((double ) x);
    int s;
    int oSBiPc1dws7;
    s = 1;
    for (oSBiPc1dws7 = ITb0I398Yce2; oSBiPc1dws7 <= wBkvLzV; oSBiPc1dws7 = oSBiPc1dws7 + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (x % oSBiPc1dws7 == 0) {
            s = s + OLMSVZ2K (x / oSBiPc1dws7, oSBiPc1dws7);
        };
    }
    return s;
}

