int main () {
    int BcgV1qfo7S;
    int vTICnuy3;
    int OHg1spwB;
    int a1YncNh [(927 - 887)];
    int *OF4GpV15W = NULL;
    cin >> OHg1spwB;
    memset (a1YncNh, 0, (248 - 88));
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
    a1YncNh[0] = 1;
    {
        BcgV1qfo7S = 0;
        while (BcgV1qfo7S < OHg1spwB) {
            BcgV1qfo7S = BcgV1qfo7S +1;
            {
                vTICnuy3 = 0;
                while (vTICnuy3 < 40) {
                    a1YncNh[vTICnuy3] *= 2;
                    vTICnuy3 = vTICnuy3 + 1;
                };
            }
            {
                vTICnuy3 = 0;
                while (vTICnuy3 < 40) {
                    if (a1YncNh[vTICnuy3] > 9) {
                        a1YncNh[vTICnuy3 + 1]++;
                        a1YncNh[vTICnuy3] -= 10;
                    }
                    vTICnuy3++;
                };
            };
        };
    }
    OF4GpV15W = a1YncNh + 38;
    while (*(--OF4GpV15W) == 0)
        ;
    while (OF4GpV15W >= a1YncNh) {
        cout << *OF4GpV15W;
        OF4GpV15W--;
    }
    cout << endl;
    return 0;
}

