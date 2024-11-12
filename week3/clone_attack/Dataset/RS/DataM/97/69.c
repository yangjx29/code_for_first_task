int main () {
    int n;
    int eIP3mQ;
    int VjtDu04RQ [(526 - 520)] = {(405 - 305), 50, (618 - 598), (204 - 194), (697 - 692), 1};
    int b [6] = {(91 - 91)};
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
    cin >> n;
    for (eIP3mQ = 0; eIP3mQ < 6; eIP3mQ = eIP3mQ + 1) {
        if (VjtDu04RQ[eIP3mQ] <= n) {
            b[eIP3mQ] = n / VjtDu04RQ[eIP3mQ];
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
            n = n - b[eIP3mQ] * VjtDu04RQ[eIP3mQ];
        }
        else
            continue;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (eIP3mQ = 0; eIP3mQ < 6; eIP3mQ++) {
        if ((871 - 866) > eIP3mQ)
            cout << b[eIP3mQ] << endl;
        if (eIP3mQ == 5)
            cout << b[eIP3mQ];
    }
    return 0;
}

