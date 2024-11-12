int GbKBs2iVk (const  void  *zGXHoqJ, const  void  *YGma35) {
    int *eNy3gBVQIS4 = (int *) zGXHoqJ;
    int *WkOiyKC3U1F = (int *) YGma35;
    return *WkOiyKC3U1F-*eNy3gBVQIS4;
}

int main () {
    int M37ymU;
    int CNAWXMf [1005];
    int ywpoTvkNUh [1005];
    int VWvsqjDX;
    int FstIixzRqvOe, WWcIUr, vtUAa0yWSf, k1o8I2p569;
    int jrcMPfh065X;
    for (; true;) {
        cin >> M37ymU;
        if (!(0 != M37ymU))
            break;
        vtUAa0yWSf = 0;
        k1o8I2p569 = M37ymU -1;
        WWcIUr = M37ymU -1;
        {
            VWvsqjDX = 0;
            for (; M37ymU > VWvsqjDX;) {
                cin >> CNAWXMf[VWvsqjDX];
                VWvsqjDX++;
            }
        }
        {
            VWvsqjDX = 0;
            for (; M37ymU > VWvsqjDX;) {
                cin >> ywpoTvkNUh[VWvsqjDX];
                VWvsqjDX++;
            }
        }
        qsort (CNAWXMf, M37ymU, sizeof (int), GbKBs2iVk);
        qsort (ywpoTvkNUh, M37ymU, sizeof (int), GbKBs2iVk);
        FstIixzRqvOe = 0;
        jrcMPfh065X = 0;
        for (; FstIixzRqvOe != WWcIUr +1;) {
            for (; CNAWXMf[FstIixzRqvOe] != ywpoTvkNUh[vtUAa0yWSf] && FstIixzRqvOe != WWcIUr +1;) {
                if (ywpoTvkNUh[vtUAa0yWSf] > CNAWXMf[FstIixzRqvOe]) {
                    jrcMPfh065X = jrcMPfh065X - 200;
                    vtUAa0yWSf++;
                    WWcIUr--;
                }
                else if (CNAWXMf[FstIixzRqvOe] > ywpoTvkNUh[vtUAa0yWSf]) {
                    FstIixzRqvOe++;
                    vtUAa0yWSf++;
                    jrcMPfh065X += 200;
                }
                else
                    break;
            }
            for (; CNAWXMf[WWcIUr] != ywpoTvkNUh[k1o8I2p569] && FstIixzRqvOe != WWcIUr +1;) {
                if (CNAWXMf[WWcIUr] < ywpoTvkNUh[k1o8I2p569]) {
                    WWcIUr--;
                    vtUAa0yWSf++;
                    jrcMPfh065X = jrcMPfh065X - 200;
                }
                else if (ywpoTvkNUh[k1o8I2p569] < CNAWXMf[WWcIUr]) {
                    WWcIUr--;
                    k1o8I2p569--;
                    jrcMPfh065X += 200;
                }
                else
                    break;
            }
            if (!(ywpoTvkNUh[vtUAa0yWSf] != CNAWXMf[FstIixzRqvOe]) && !(ywpoTvkNUh[k1o8I2p569] != CNAWXMf[WWcIUr]) && FstIixzRqvOe != WWcIUr +1) {
                if (CNAWXMf[WWcIUr] != ywpoTvkNUh[vtUAa0yWSf])
                    jrcMPfh065X = jrcMPfh065X - 200;
                WWcIUr--;
                vtUAa0yWSf++;
            }
        }
        cout << jrcMPfh065X << endl;
    }
    return 0;
}

