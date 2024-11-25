int main () {
    int ALyFZH1Nah;
    int kMHXfs8ZhC;
    int Rxa5AqRZ1hm;
    int i;
    int j;
    int czlYTn9DOt4;
    int JdIMR5B;
    int a [(672 - 572)] [100];
    cin >> ALyFZH1Nah;
    vKfOQd = a;
    for (; ALyFZH1Nah--;) {
        cin >> kMHXfs8ZhC >> Rxa5AqRZ1hm;
        czlYTn9DOt4 = (137 - 137);
        JdIMR5B = (521 - 521);
        {
            i = 420 - 420;
            while (i < kMHXfs8ZhC) {
                {
                    j = 455 - 455;
                    while (j < Rxa5AqRZ1hm) {
                        cin >> a[i][j];
                        JdIMR5B = JdIMR5B +*(*(vKfOQd + i) + j);
                        j++;
                    };
                }
                i = i + 1;
            };
        }
        if (kMHXfs8ZhC == (476 - 475) || Rxa5AqRZ1hm == (568 - 567) || (kMHXfs8ZhC == 1 && Rxa5AqRZ1hm == 1))
            cout << JdIMR5B << endl;
        else {
            {
                i = 193 - 193;
                while (i < kMHXfs8ZhC) {
                    {
                        j = 0;
                        while (j < Rxa5AqRZ1hm) {
                            czlYTn9DOt4 = czlYTn9DOt4 + *(*(vKfOQd + i) + j);
                            j++;
                        };
                    }
                    i += kMHXfs8ZhC - 1;
                };
            }
            {
                i = 0;
                while (i < kMHXfs8ZhC) {
                    {
                        j = 0;
                        while (j < Rxa5AqRZ1hm) {
                            czlYTn9DOt4 = czlYTn9DOt4 + *(*(vKfOQd + i) + j);
                            j += Rxa5AqRZ1hm -1;
                        };
                    }
                    i = i + 1;
                };
            }
            czlYTn9DOt4 = czlYTn9DOt4 - a[0][0] - a[0][Rxa5AqRZ1hm -1] - a[kMHXfs8ZhC - 1][0] - a[kMHXfs8ZhC - 1][Rxa5AqRZ1hm -1];
            cout << czlYTn9DOt4 << endl;
        };
    }
    return 0;
}

