int dKuqoh (int bpYq2Xyin, int HGfIWc, int n) {
    if (n == 0) {
        if (!(5 != bpYq2Xyin) && !(5 != HGfIWc))
            return 1;
        else
            return 0;
    }
    else
        return dKuqoh (bpYq2Xyin - 1, HGfIWc -1, n - 1) + dKuqoh (bpYq2Xyin - 1, HGfIWc, n - 1) + dKuqoh (bpYq2Xyin - 1, HGfIWc +1, n - 1) + dKuqoh (bpYq2Xyin, HGfIWc -1, n - 1) + dKuqoh (bpYq2Xyin, HGfIWc +1, n - 1) + dKuqoh (bpYq2Xyin + 1, HGfIWc -1, n - 1) + dKuqoh (bpYq2Xyin + 1, HGfIWc, n - 1) + dKuqoh (bpYq2Xyin + 1, HGfIWc +1, n - 1) + 2 * dKuqoh (bpYq2Xyin, HGfIWc, n - 1);
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
}

int main () {
    int i;
    int VZfk8nRJVT;
    int UQHaT7dCvSzY;
    int n;
    cin >> UQHaT7dCvSzY >> n;
    {
        i = 1;
        while (i < 10) {
            {
                VZfk8nRJVT = 1;
                while (VZfk8nRJVT < 10) {
                    if (VZfk8nRJVT == 9)
                        cout << UQHaT7dCvSzY *dKuqoh (i, VZfk8nRJVT, n) << endl;
                    else
                        cout << UQHaT7dCvSzY *dKuqoh (i, VZfk8nRJVT, n) << " ";
                    VZfk8nRJVT++;
                };
            }
            i++;
        };
    }
    return 0;
}

