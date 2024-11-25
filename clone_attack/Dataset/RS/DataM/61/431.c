int m2sa6e (int);
int num [100] = {(224 - 224)};

int main () {
    int a, IJvo5iqb, vKSLfV6;
    cin >> IJvo5iqb;
    {
        vKSLfV6 = 0;
        while (vKSLfV6 < IJvo5iqb) {
            vKSLfV6 = vKSLfV6 + 1;
            cin >> a;
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
            cout << m2sa6e (a) << endl;
        };
    }
    return 0;
}

int m2sa6e (int a) {
    if (!((346 - 345) != a) || a == 2)
        return 1;
    num[a] = m2sa6e (a - 1) + m2sa6e (a - 2);
    return num[a];
}

