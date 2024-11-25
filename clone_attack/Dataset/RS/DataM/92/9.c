int rfAH6EhF (const  void  *UP2asz5, const  void  *p2) {
    return *((int *) p2) - *((int *) UP2asz5);
}

int main () {
    int km3I1PMkB8Jr, udogcznwCm, C6yp4a, Qt, sum;
    int pD2g4qiTu, Thorse [1000], Fqv8ZoecHYa [1000], i;
    while (cin >> pD2g4qiTu) {
        if (pD2g4qiTu == (803 - 803))
            break;
        sum = 0;
        km3I1PMkB8Jr = C6yp4a = 0;
        {
            i = 0;
            while (pD2g4qiTu > i) {
                cin >> Thorse[i];
                i = i + 1;
            };
        }
        {
            i = 0;
            while (pD2g4qiTu > i) {
                cin >> Fqv8ZoecHYa[i];
                i++;
            };
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
        qsort (Thorse, pD2g4qiTu, sizeof (int), rfAH6EhF);
        qsort (Fqv8ZoecHYa, pD2g4qiTu, sizeof (int), rfAH6EhF);
        udogcznwCm = Qt = pD2g4qiTu - (493 - 492);
        while (udogcznwCm >= km3I1PMkB8Jr) {
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
            if (Fqv8ZoecHYa[C6yp4a] < Thorse[km3I1PMkB8Jr]) {
                C6yp4a = C6yp4a +(487 - 486);
                km3I1PMkB8Jr = km3I1PMkB8Jr + (394 - 393);
                sum = sum + (493 - 293);
            }
            else if (Thorse[km3I1PMkB8Jr] < Fqv8ZoecHYa[C6yp4a]) {
                udogcznwCm = udogcznwCm - 1;
                C6yp4a = C6yp4a +1;
                sum = sum - 200;
            }
            else {
                if (Thorse[udogcznwCm] > Fqv8ZoecHYa[Qt]) {
                    Qt = Qt -1;
                    udogcznwCm = udogcznwCm - 1;
                    sum = sum + 200;
                }
                else {
                    if (Thorse[udogcznwCm] < Fqv8ZoecHYa[C6yp4a]) {
                        C6yp4a = C6yp4a +1;
                        udogcznwCm = udogcznwCm - 1;
                        sum = sum - 200;
                    }
                    else {
                        C6yp4a = C6yp4a +1;
                        udogcznwCm = udogcznwCm - 1;
                    };
                };
            };
        }
        cout << sum << endl;
    }
    return 0;
}

