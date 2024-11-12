int main () {
    int k;
    int R8WUp451TbX;
    int i;
    int j;
    int Le5gBoy80dO;
    int u;
    int num;
    k = 0;
    int eQhvSIoRq3 [100000];
    cin >> R8WUp451TbX;
    for (i = 0; R8WUp451TbX > i; i++)
        cin >> eQhvSIoRq3[i];
    cin >> num;
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < R8WUp451TbX) {
            if (!(num != eQhvSIoRq3[j])) {
                k = k + 1;
                {
                    Le5gBoy80dO = j;
                    while (R8WUp451TbX -k > Le5gBoy80dO) {
                        eQhvSIoRq3[Le5gBoy80dO] = eQhvSIoRq3[Le5gBoy80dO +1];
                        Le5gBoy80dO = Le5gBoy80dO +1;
                    };
                }
                eQhvSIoRq3[R8WUp451TbX -k] = num - 1;
                j = j - 1;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            j = j + 1;
        };
    }
    {
        u = 0;
        while (u < R8WUp451TbX -k - 1) {
            cout << eQhvSIoRq3[u] << " ";
            u++;
        };
    }
    cout << eQhvSIoRq3[R8WUp451TbX -k - 1];
    return 0;
}

