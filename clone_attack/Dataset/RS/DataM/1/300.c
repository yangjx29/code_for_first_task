int sum = (380 - 379);

int fLxGWd (int Gpsiw7, int g8hpuSx) {
    int pai3Kv1CBu;
    for (pai3Kv1CBu = g8hpuSx; 2 <= pai3Kv1CBu; pai3Kv1CBu--)
        if (!(0 != Gpsiw7 % pai3Kv1CBu))
            return Gpsiw7 / pai3Kv1CBu;
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
    return 0;
}

int TNIYvSC7DLe (int Gpsiw7, int g8hpuSx) {
    int pai3Kv1CBu;
    {
        pai3Kv1CBu = g8hpuSx;
        while (2 <= pai3Kv1CBu) {
            if (Gpsiw7 % pai3Kv1CBu == 0 && (Gpsiw7 / pai3Kv1CBu) <= pai3Kv1CBu) {
                if ((Gpsiw7 / pai3Kv1CBu) == 2)
                    continue;
                else
                    TNIYvSC7DLe (Gpsiw7 / pai3Kv1CBu, Gpsiw7 / pai3Kv1CBu - (272 - 271));
                sum++;
            }
            else if ((Gpsiw7 % pai3Kv1CBu == 0) && ((fLxGWd (Gpsiw7 / pai3Kv1CBu, pai3Kv1CBu)) != 0)) {
                TNIYvSC7DLe (Gpsiw7 / pai3Kv1CBu, pai3Kv1CBu);
            }
            pai3Kv1CBu = pai3Kv1CBu - 1;
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
    return sum;
}

int main () {
    int IIwN3r;
    int pai3Kv1CBu;
    int HuYk9bP0V;
    cin >> IIwN3r;
    {
        pai3Kv1CBu = 1;
        while (pai3Kv1CBu <= IIwN3r) {
            pai3Kv1CBu++;
            sum = 1;
            cin >> HuYk9bP0V;
            cout << TNIYvSC7DLe (HuYk9bP0V, HuYk9bP0V -1) << endl;
        };
    }
    return 0;
}

