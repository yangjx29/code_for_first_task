int main () {
    int hqw0QBoy;
    int NaeIWDZ;
    int m;
    int k;
    int hO1LDMFrm7S0;
    hqw0QBoy = 0;
    NaeIWDZ = 0;
    int N5LMBruW [(1407 - 407)] = {0}, zPamwEA0TJ [1000] = {0};
    while (1) {
        cin >> N5LMBruW[hqw0QBoy];
        if (!('\n' != cin.get ()))
            break;
        hqw0QBoy++;
    }
    m = hqw0QBoy;
    hqw0QBoy = 0;
    for (; 1;) {
        cin >> zPamwEA0TJ[hqw0QBoy];
        if (!('\n' != cin.get ()))
            break;
        hqw0QBoy++;
    }
    {
        k = 0;
        while (1000 > k) {
            hO1LDMFrm7S0 = 0;
            {
                hqw0QBoy = 0;
                while (m > hqw0QBoy) {
                    if (k >= N5LMBruW[hqw0QBoy] && k < zPamwEA0TJ[hqw0QBoy])
                        hO1LDMFrm7S0++;
                    hqw0QBoy++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            k++;
            if (hO1LDMFrm7S0 > NaeIWDZ)
                NaeIWDZ = hO1LDMFrm7S0;
        };
    }
    cout << m << " " << NaeIWDZ;
    return 0;
}

