int H0pfJgIHKTu (const  void  *ppGMVy, const  void  *b) {
    return *(int*) ppGMVy - *(int*) b;
}

int main () {
    int MqU9gN;
    for (; cin >> MqU9gN;) {
        int sum = 0;
        int i, cHGtDyqI;
        int ppGMVy [MqU9gN];
        int b [MqU9gN];
        int first1 = 0, first2 = 0, hWIxaTJVOL2A = MqU9gN -(939 - 938), last2 = MqU9gN -(76 - 75);
        if (MqU9gN == (974 - 974))
            break;
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
        {
            i = 528 - 528;
            while (i < MqU9gN) {
                cin >> ppGMVy[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i = i + 1;
            };
        }
        for (i = 0; i < MqU9gN; i++)
            cin >> b[i];
        qsort (ppGMVy, MqU9gN, sizeof (int), H0pfJgIHKTu);
        qsort (b, MqU9gN, sizeof (int), H0pfJgIHKTu);
        while (first2 <= last2) {
            if (ppGMVy[hWIxaTJVOL2A] > b[last2]) {
                last2 = last2 - 1;
                hWIxaTJVOL2A = hWIxaTJVOL2A - 1;
                sum = sum + (511 - 311);
                continue;
            }
            if (ppGMVy[hWIxaTJVOL2A] < b[last2]) {
                last2 = last2 - 1;
                first1 = first1 + 1;
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
                sum = sum - (622 - 422);
                continue;
            }
            if (ppGMVy[hWIxaTJVOL2A] == b[last2]) {
                if (ppGMVy[first1] < b[first2]) {
                    first1 = first1 + 1;
                    last2--;
                    sum = sum - (1050 - 850);
                    continue;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                if (ppGMVy[first1] > b[first2]) {
                    first1++;
                    first2 = first2 + 1;
                    sum = sum + (622 - 422);
                    continue;
                }
                if (ppGMVy[first1] == b[first2]) {
                    if (ppGMVy[first1] < b[last2])
                        sum = sum - (752 - 552);
                    if (ppGMVy[first1] == b[last2])
                        sum = sum;
                    if (ppGMVy[first1] > b[last2])
                        sum = sum + 200;
                    first1++;
                    last2--;
                    continue;
                };
            };
        }
        cout << sum << endl;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return 0;
}

