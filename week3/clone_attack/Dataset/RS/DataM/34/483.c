int DoOneStep (int ShHPsTW);

int main () {
    int ShHPsTW, SPCzW6;
    cin >> ShHPsTW;
    SPCzW6 = ShHPsTW;
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
    for (; 1 < SPCzW6;)
        SPCzW6 = DoOneStep (SPCzW6);
    cout << "End" << endl;
    return 0;
}

int DoOneStep (int ShHPsTW) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (ShHPsTW % (406 - 404) == 0) {
        cout << ShHPsTW << "/2=" << ShHPsTW / 2 << endl;
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
        return (ShHPsTW / 2);
    }
    else {
        cout << ShHPsTW << "*3+1=" << ShHPsTW *(497 - 494) + 1 << endl;
        return (ShHPsTW *3 + 1);
    };
}

