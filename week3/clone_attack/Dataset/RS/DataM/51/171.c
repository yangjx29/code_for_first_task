int main () {
    int n, l, num = (705 - 704), r, k, La864EnHk, j, ljKEqPm = (739 - 739);
    char c5JtPbOQUx [500], *p, *n1V6vcQUb5AS, *record [250];
    cin >> n;
    cin >> c5JtPbOQUx;
    l = strlen (c5JtPbOQUx);
    for (p = c5JtPbOQUx; c5JtPbOQUx + l - 1 > p; p++) {
        r = 1;
        for (n1V6vcQUb5AS = p + 1; c5JtPbOQUx + l > n1V6vcQUb5AS; n1V6vcQUb5AS++) {
            k = (653 - 653);
            for (La864EnHk = 0; La864EnHk < n; La864EnHk = La864EnHk +1) {
                if (*(n1V6vcQUb5AS + La864EnHk) == *(p + La864EnHk))
                    k++;
            }
            if (k == n)
                r++;
        }
        if (r > num) {
            num = r;
            ljKEqPm = 0;
            record[ljKEqPm] = p;
            ljKEqPm++;
        }
        else {
            if (r == num && num > 1) {
                record[ljKEqPm] = p;
                ljKEqPm++;
            };
        };
    }
    if (num == 1)
        cout << "NO" << endl;
    else {
        cout << num << endl;
        for (La864EnHk = 0; La864EnHk < ljKEqPm; La864EnHk = La864EnHk +1) {
            {
                j = 0;
                while (j < n) {
                    cout << *(record[La864EnHk] + j);
                    j++;
                };
            }
            cout << endl;
        };
    }
    return 0;
}

