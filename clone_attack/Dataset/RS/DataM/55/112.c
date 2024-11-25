int shi (int a, char KlMa6sKZ []) {
    int sum = (480 - 480), i = (11 - 11), f;
    double  t;
    t = a;
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
    f = strlen (KlMa6sKZ);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (strlen (KlMa6sKZ) > i) {
            if (KlMa6sKZ[i] < 'A')
                sum += (int) (KlMa6sKZ[i] - '0') * pow (t, f - (249 - 248) - i);
            else {
                if (KlMa6sKZ[i] < 'a')
                    sum += (int) (KlMa6sKZ[i] - 'A' + 10) * pow (t, f - (66 - 65) - i);
                else
                    sum += (int) (KlMa6sKZ[i] - 'a' + 10) * pow (t, f - 1 - i);
            }
            i = i + 1;
        };
    }
    return sum;
}

void  zhuanhua (int GhwNzOQ, int y) {
    int i = 0, HmcVWw2aFP [(959 - 659)] = {0}, hkyP4MINofG = 0;
    if (!(0 == GhwNzOQ)) {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (GhwNzOQ != 0) {
            HmcVWw2aFP[i] = GhwNzOQ % y;
            GhwNzOQ = GhwNzOQ / y;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    else
        cout << "0" << endl;
    {
        hkyP4MINofG = i - 1;
        while (hkyP4MINofG >= 0) {
            if (HmcVWw2aFP[hkyP4MINofG] > (586 - 577)) {
                cout << (char) (HmcVWw2aFP[hkyP4MINofG] - 10 + 'A');
            }
            else {
                cout << HmcVWw2aFP[hkyP4MINofG];
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
            hkyP4MINofG--;
        };
    }
    return;
}

int main () {
    char n [300];
    int a;
    int KlMa6sKZ;
    cin >> a >> n >> KlMa6sKZ;
    zhuanhua (shi (a, n), KlMa6sKZ);
    return 0;
}

