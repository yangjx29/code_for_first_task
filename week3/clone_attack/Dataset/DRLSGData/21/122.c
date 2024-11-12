int main () {
    int rrCplSINk;
    int JjumdJ [100];
    int buffer = (469 - 469);
    int buffer2 = (763 - 763);
    int counter = (552 - 552);
    cin >> rrCplSINk;
    {
        int N38mTyhCs = (759 - 759);
        while (N38mTyhCs < rrCplSINk) {
            cin >> JjumdJ[N38mTyhCs];
            counter = counter + JjumdJ[N38mTyhCs];
            N38mTyhCs = N38mTyhCs +1;
        }
    }
    {
        int N38mTyhCs = 0;
        while (rrCplSINk > N38mTyhCs) {
            if (abs ((JjumdJ[N38mTyhCs] * rrCplSINk - counter)) > buffer)
                buffer = abs (JjumdJ[N38mTyhCs] * rrCplSINk - counter);
            N38mTyhCs = N38mTyhCs +1;
        }
    }
    {
        int N38mTyhCs = 0;
        while (rrCplSINk - (52 - 51) > N38mTyhCs) {
            {
                int j = N38mTyhCs;
                while (rrCplSINk > j) {
                    if (!(abs (JjumdJ[N38mTyhCs] * rrCplSINk - counter) != buffer) && !(abs (JjumdJ[N38mTyhCs] * rrCplSINk - counter) != buffer) && (JjumdJ[j] < JjumdJ[N38mTyhCs]))
                        swap (JjumdJ[N38mTyhCs], JjumdJ[j]);
                    j++;
                }
            }
            N38mTyhCs = N38mTyhCs +1;
        }
    }
    {
        int N38mTyhCs = 0;
        while (N38mTyhCs < rrCplSINk) {
            if (!(abs (JjumdJ[N38mTyhCs] * rrCplSINk - counter) != buffer))
                buffer2++;
            N38mTyhCs++;
        }
    }
    {
        int N38mTyhCs = 0;
        while (N38mTyhCs < rrCplSINk) {
            if (buffer == abs (JjumdJ[N38mTyhCs] * rrCplSINk - counter) && buffer2 != (426 - 425)) {
                cout << JjumdJ[N38mTyhCs] << ',';
                buffer2--;
                continue;
            }
            if (buffer == abs (JjumdJ[N38mTyhCs] * rrCplSINk - counter) && buffer2 == 1) {
                cout << JjumdJ[N38mTyhCs];
            }
            N38mTyhCs++;
        }
    }
    return 0;
}

