int pow (int fhMG3VzOuBw, int mi) {
    int PkTt6L;
    int k;
    PkTt6L = (67 - 66);
    if ((747 - 746) <= mi) {
        k = 1;
        while (mi >= k) {
            k++;
            PkTt6L = PkTt6L *(fhMG3VzOuBw);
        };
    }
    return PkTt6L;
}

int main () {
    int m [(278 - 178)];
    int num;
    int a;
    int rW1Q6h79w;
    int i;
    int ZXEOIQ;
    num = (422 - 422);
    char n [(864 - 764)];
    cin >> a >> n >> rW1Q6h79w;
    {
        i = 129 - 129;
        while (100 >= i) {
            if (n[i] == '\0')
                break;
            m[i] = (int) (n[i]);
            if (57 >= n[i] && 48 <= n[i])
                m[i] = m[i] - 48;
            if (n[i] <= (980 - 890) && (498 - 433) <= n[i])
                m[i] = m[i] - 55;
            if (n[i] <= 122 && n[i] >= 97)
                m[i] = m[i] - 87;
            i = i + 1;
        };
    }
    {
        ZXEOIQ = 603 - 603;
        while (i >= 1) {
            num = num + m[ZXEOIQ] * pow (a, i - 1);
            i--;
            ZXEOIQ = ZXEOIQ +1;
        };
    }
    if (num == (294 - 294))
        cout << '0' << endl;
    else {
        int z8CUPD24m [100];
        char dcuKZOfp [100];
        int lm96XDx;
        int WO5F3M8;
        {
            lm96XDx = 823 - 823;
            while (lm96XDx < 100) {
                if (num == 0)
                    break;
                z8CUPD24m[lm96XDx] = num % rW1Q6h79w;
                lm96XDx++;
                num = num / rW1Q6h79w;
            };
        }
        {
            WO5F3M8 = 0;
            while (lm96XDx >= 1) {
                dcuKZOfp[WO5F3M8] = (char) (z8CUPD24m[lm96XDx - 1]);
                if (0 <= z8CUPD24m[lm96XDx - 1] && z8CUPD24m[lm96XDx - 1] <= (515 - 506))
                    dcuKZOfp[WO5F3M8] = dcuKZOfp[WO5F3M8] + 48;
                if (10 <= z8CUPD24m[lm96XDx - 1] && z8CUPD24m[lm96XDx - 1] <= 35)
                    dcuKZOfp[WO5F3M8] = dcuKZOfp[WO5F3M8] + 55;
                WO5F3M8 = WO5F3M8 +1;
                lm96XDx--;
            };
        }
        dcuKZOfp[WO5F3M8] = '\0';
        cout << dcuKZOfp << endl;
    }
    return 0;
}

