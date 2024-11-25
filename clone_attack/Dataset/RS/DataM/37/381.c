int main () {
    char Br1epCcWtsD [(100764 - 763)];
    int STBIKaYWmzrx, FEyhnmM, qa0ohGXW5rV, SEpuwTvB, SaE50GsUK8F = 0, qJfBoLQW1PT, flag [26] = {0};
    cin >> STBIKaYWmzrx;
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
    cin.Br1epCcWtsD ();
    {
        FEyhnmM = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FEyhnmM < STBIKaYWmzrx) {
            cin.getline (Br1epCcWtsD, 100001);
            SEpuwTvB = strlen (Br1epCcWtsD);
            {
                qa0ohGXW5rV = 0;
                while (SEpuwTvB > qa0ohGXW5rV) {
                    qJfBoLQW1PT = Br1epCcWtsD[qa0ohGXW5rV] - 'a';
                    qa0ohGXW5rV = qa0ohGXW5rV + 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    flag[qJfBoLQW1PT]++;
                };
            }
            {
                qa0ohGXW5rV = 0;
                while (qa0ohGXW5rV < SEpuwTvB) {
                    qJfBoLQW1PT = Br1epCcWtsD[qa0ohGXW5rV] - 'a';
                    if (flag[qJfBoLQW1PT] == 1) {
                        SaE50GsUK8F = 1;
                        cout << Br1epCcWtsD[qa0ohGXW5rV] << endl;
                        break;
                    }
                    qa0ohGXW5rV++;
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
            if (!SaE50GsUK8F)
                cout << "no" << endl;
            SaE50GsUK8F = 0;
            memset (flag, 0, sizeof (flag));
            FEyhnmM++;
        };
    }
    return 0;
}

