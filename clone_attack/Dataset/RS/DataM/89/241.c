int main () {
    int jcG0iOA = 0, FM9mUXF, I;
    int CWJb0x;
    int Rf9l8Ner [CWJb0x];
    int x7wU8LDk6j [100000];
    int EkR0cxzQ [100000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> CWJb0x;
    while (1) {
        cin >> x7wU8LDk6j[jcG0iOA] >> EkR0cxzQ[jcG0iOA++];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (x7wU8LDk6j[jcG0iOA - 1] == 0 && EkR0cxzQ[jcG0iOA - 1] == 0) {
            I = jcG0iOA;
            break;
        };
    }
    {
        FM9mUXF = 0;
        while (FM9mUXF < CWJb0x) {
            Rf9l8Ner[FM9mUXF] = 0;
            {
                int uQWLHB7G = 0;
                while (uQWLHB7G < I -1) {
                    if (EkR0cxzQ[uQWLHB7G] == FM9mUXF)
                        Rf9l8Ner[FM9mUXF]++;
                    uQWLHB7G = uQWLHB7G + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (Rf9l8Ner[FM9mUXF] >= CWJb0x -1) {
                cout << FM9mUXF << endl;
                break;
            }
            FM9mUXF++;
        };
    }
    if (FM9mUXF == CWJb0x)
        cout << "NOT FOUND" << endl;
    return 0;
}

