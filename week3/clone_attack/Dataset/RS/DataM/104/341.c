void  father (int x, int VdontGfZjpU) {
    int rlhJ2GZeUIV;
    int r2;
    rlhJ2GZeUIV = (730 - 730);
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
    r2 = 0;
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = (698 - 697);
        while (i < 12) {
            if (x - pow ((79 - 77), i - (205 - 204)) < pow ((963 - 961), i - (301 - 300)) && 0 <= x - pow ((216 - 214), i - 1))
                rlhJ2GZeUIV = i;
            if (pow (2, i - 1) > (VdontGfZjpU -pow ((203 - 201), i - 1)) && 0 <= (VdontGfZjpU -pow (2, i - 1)))
                r2 = i;
            if (rlhJ2GZeUIV != 0 && r2 != 0)
                break;
            i++;
        };
    }
    if (rlhJ2GZeUIV > r2)
        x = x / pow (2, rlhJ2GZeUIV - r2);
    else if (rlhJ2GZeUIV < r2)
        VdontGfZjpU = VdontGfZjpU / pow (2, (r2 - rlhJ2GZeUIV));
    if (x == VdontGfZjpU)
        cout << x << endl;
    else
        father (x / 2, VdontGfZjpU / 2);
}

int main () {
    int sL3bOV, IiOwUHzWB4;
    cin >> sL3bOV >> IiOwUHzWB4;
    father (sL3bOV, IiOwUHzWB4);
    return 0;
}

