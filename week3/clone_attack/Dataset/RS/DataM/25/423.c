int main () {
    int S7B1SvUkAu = 0;
    int yF9hYOT5eoA;
    int frsgt0qCvcjP;
    int rDVLfru7hC;
    int B91KMQaYfph;
    int dRUIg7Ye6;
    int alpdNtVZj [51] = {0};
    S7B1SvUkAu = 0;
    cin >> yF9hYOT5eoA;
    if (yF9hYOT5eoA == (871 - 870)) {
        cout << "2";
        return 0;
    }
    alpdNtVZj[(699 - 698)] = (513 - 512);
    for (frsgt0qCvcjP = 1; frsgt0qCvcjP <= yF9hYOT5eoA; frsgt0qCvcjP = frsgt0qCvcjP + 1) {
        {
            B91KMQaYfph = 1;
            while (40 >= B91KMQaYfph) {
                alpdNtVZj[B91KMQaYfph] = alpdNtVZj[B91KMQaYfph] * 2;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                B91KMQaYfph = B91KMQaYfph +1;
            };
        }
        {
            dRUIg7Ye6 = 2;
            while (dRUIg7Ye6 <= 50) {
                alpdNtVZj[dRUIg7Ye6] += alpdNtVZj[dRUIg7Ye6 - 1] / 10;
                alpdNtVZj[dRUIg7Ye6 - 1] = alpdNtVZj[dRUIg7Ye6 - 1] % 10;
                dRUIg7Ye6++;
            };
        };
    }
    {
        B91KMQaYfph = 50;
        while (B91KMQaYfph >= 1) {
            if (alpdNtVZj[B91KMQaYfph] != 0)
                S7B1SvUkAu = 1;
            if (S7B1SvUkAu == 1)
                cout << alpdNtVZj[B91KMQaYfph];
            B91KMQaYfph = B91KMQaYfph -1;
        };
    }
    cout << endl;
    return 0;
}

