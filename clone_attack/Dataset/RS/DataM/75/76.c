int main () {
    int xzKhUeiBy2gV;
    int hrQXPuSUyg;
    int KyuPeBZ8gW;
    int F71t4mQIFx0J [1000];
    int InC9pMW [1000];
    int mjM0zm [2000] = {(794 - 794)};
    int wH2xpuBQP;
    wH2xpuBQP = 0;
    cin >> KyuPeBZ8gW;
    {
        xzKhUeiBy2gV = 0;
        while (xzKhUeiBy2gV < KyuPeBZ8gW) {
            cin >> F71t4mQIFx0J[xzKhUeiBy2gV];
            xzKhUeiBy2gV++;
        };
    }
    for (xzKhUeiBy2gV = 0; xzKhUeiBy2gV < KyuPeBZ8gW; xzKhUeiBy2gV = xzKhUeiBy2gV + 1) {
        cin >> InC9pMW[xzKhUeiBy2gV];
    }
    for (xzKhUeiBy2gV = 0; xzKhUeiBy2gV < KyuPeBZ8gW; xzKhUeiBy2gV = xzKhUeiBy2gV + 1) {
        for (hrQXPuSUyg = F71t4mQIFx0J[xzKhUeiBy2gV]; hrQXPuSUyg < InC9pMW[xzKhUeiBy2gV]; hrQXPuSUyg++)
            mjM0zm[hrQXPuSUyg]++;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    for (xzKhUeiBy2gV = 0; xzKhUeiBy2gV < 2000; xzKhUeiBy2gV++) {
        if (mjM0zm[xzKhUeiBy2gV] > wH2xpuBQP)
            wH2xpuBQP = mjM0zm[xzKhUeiBy2gV];
    }
    cout << wH2xpuBQP << endl;
    return 0;
}

