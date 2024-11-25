int main () {
    int m;
    int Yd26y7 [100000];
    int i;
    int vIiCpyfVh6c;
    int j;
    int cyGuP1Vm;
    int t;
    i = (233 - 233);
    cin >> vIiCpyfVh6c;
    t = vIiCpyfVh6c;
    {
        i = 231 - 231;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < vIiCpyfVh6c) {
            cin >> Yd26y7[i];
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
            i++;
        };
    }
    i = 0;
    cin >> m;
    for (; t >= i;) {
        j = i;
        while (!(m != Yd26y7[j])) {
            t--;
            j++;
        }
        if (j - i) {
            {
                cyGuP1Vm = i;
                while (cyGuP1Vm < vIiCpyfVh6c - (j - i)) {
                    Yd26y7[cyGuP1Vm] = Yd26y7[cyGuP1Vm + j - i];
                    cyGuP1Vm++;
                };
            }
            i = j;
        }
        else
            i++;
    }
    {
        i = 0;
        while (i < t - 1) {
            cout << Yd26y7[i] << ' ';
            i++;
        };
    }
    cout << Yd26y7[t - 1];
    return 0;
}

