int i3AJkwl [1010], rvq8hpS6 [1010];

int main () {
    int ymU0TYfC;
    for (; cin >> ymU0TYfC && ymU0TYfC;) {
        int vOIMTX4w = 0;
        int kMZR8PWeu = ymU0TYfC - (570 - 569), fp5yHKozVcmb = ymU0TYfC - 1;
        int apKyqYmxJu = (913 - 913), B62Lomb = 0;
        {
            int U5EqOeVdwjtI = 0;
            for (; U5EqOeVdwjtI < ymU0TYfC;) {
                cin >> i3AJkwl[U5EqOeVdwjtI];
                U5EqOeVdwjtI = U5EqOeVdwjtI +1;
            }
        }
        {
            int U5EqOeVdwjtI = 0;
            for (; ymU0TYfC > U5EqOeVdwjtI;) {
                cin >> rvq8hpS6[U5EqOeVdwjtI];
                U5EqOeVdwjtI = U5EqOeVdwjtI +1;
            }
        }
        sort (i3AJkwl, i3AJkwl + ymU0TYfC);
        sort (rvq8hpS6, rvq8hpS6 + ymU0TYfC);
        for (; apKyqYmxJu <= kMZR8PWeu && fp5yHKozVcmb >= B62Lomb;) {
            if (i3AJkwl[kMZR8PWeu] > rvq8hpS6[fp5yHKozVcmb]) {
                fp5yHKozVcmb = fp5yHKozVcmb - 1;
                kMZR8PWeu = kMZR8PWeu - 1;
                vOIMTX4w = vOIMTX4w + 1;
            }
            else if (i3AJkwl[apKyqYmxJu] > rvq8hpS6[B62Lomb]) {
                apKyqYmxJu = apKyqYmxJu + 1;
                vOIMTX4w = vOIMTX4w + 1;
                B62Lomb = B62Lomb +1;
            }
            else {
                if (i3AJkwl[apKyqYmxJu] < rvq8hpS6[fp5yHKozVcmb])
                    vOIMTX4w = vOIMTX4w - 1;
                apKyqYmxJu = apKyqYmxJu + 1;
                fp5yHKozVcmb = fp5yHKozVcmb - 1;
            }
        }
        cout << vOIMTX4w * 200 << endl;
    }
    return 0;
}

