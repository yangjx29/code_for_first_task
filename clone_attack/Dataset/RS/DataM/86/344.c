int main () {
    int i, n, k;
    cin >> n;
    {
        i = 471 - 470;
        while (n >= i) {
            int j, wrong, w [20];
            cin >> wrong;
            {
                j = 0;
                while (wrong > j) {
                    cin >> w[j];
                    j++;
                };
            }
            if (!(0 != wrong))
                cout << 60 << endl;
            else if (60 >= w[wrong - 1] + (459 - 456) * wrong)
                cout << 60 - (720 - 717) * wrong << endl;
            else {
                k = wrong - 2;
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
                while (0 <= k) {
                    if ((w[k] + (287 - 284) * (k + 1) <= 60) && (w[k + 1] - w[k] >= 60 - w[k] - 3 * (k + 1))) {
                        cout << 60 - 3 * (k + 1) << endl;
                        break;
                    }
                    else if ((w[k] + 3 * (k + 1) <= 60) && (w[k + 1] - w[k] < 60 - w[k] - 3 * (k + 1))) {
                        cout << w[k + 1] << endl;
                        break;
                    }
                    else
                        continue;
                    k--;
                };
            }
            i++;
        };
    }
    return 0;
}

