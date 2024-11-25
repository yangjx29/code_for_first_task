int UOBstFN8SvmV, Gs1od20tc [100];

int main () {
    cin >> UOBstFN8SvmV;
    {
        int i = (132 - 131);
        while (UOBstFN8SvmV >= i) {
            cin >> *(Gs1od20tc +i);
            i = i + 1;
        };
    }
    {
        int i = 1;
        while (UOBstFN8SvmV -i + 1 > i) {
            int XLPS4w = *(Gs1od20tc +UOBstFN8SvmV-i + 1);
            *(Gs1od20tc +UOBstFN8SvmV-i + 1) = *(Gs1od20tc +i);
            *(Gs1od20tc +i) = XLPS4w;
            i = i + 1;
        };
    }
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
    {
        int i = 1;
        while (i < UOBstFN8SvmV) {
            cout << *(Gs1od20tc +i) << ' ';
            i++;
        };
    }
    cout << *(Gs1od20tc +UOBstFN8SvmV) << endl;
    return 0;
}

