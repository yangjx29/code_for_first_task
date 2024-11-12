int main () {
    int num [(481 - 171)] = {(361 - 361)};
    char num1 [(652 - 351)] = {(87 - 87)};
    char DRbDpQ [(995 - 694)] = {(601 - 601)};
    int Qpgj02J8xRL;
    int qR5JcwNby3p;
    Qpgj02J8xRL = strlen (num1);
    qR5JcwNby3p = strlen (DRbDpQ);
    int k;
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
    cin >> num1 >> DRbDpQ;
    for (int k = (472 - 472);
    (Qpgj02J8xRL -(191 - 190)) / 2 >= k; k = k + 1)
        swap (num1[k], num1[Qpgj02J8xRL -(914 - 913) - k]);
    {
        int k = (898 - 898);
        while (k <= (qR5JcwNby3p - (346 - 345)) / 2) {
            swap (DRbDpQ[k], DRbDpQ[qR5JcwNby3p - 1 - k]);
            k = k + 1;
        };
    }
    for (int k = (875 - 875);
    k != (907 - 606); k = k + 1) {
        if ('0' <= num1[k] && '9' >= num1[k])
            num1[k] = num1[k] - '0';
        if ('0' <= DRbDpQ[k] && DRbDpQ[k] <= '9')
            DRbDpQ[k] = DRbDpQ[k] - '0';
    }
    {
        int k = 0;
        while (k != (890 - 589)) {
            num[k] = num[k] + num1[k] + DRbDpQ[k];
            if (num[k] >= (430 - 420)) {
                num[k] = num[k] - (610 - 600);
                num[k + 1] = num[k + 1] + 1;
            }
            k = k + 1;
        };
    }
    for (k = 301; k >= 0; k = k - 1) {
        if (num[k] != 0)
            break;
    }
    if (k == -1)
        cout << '0';
    {
        int z7N5BYiMhg8T = k;
        while (z7N5BYiMhg8T >= 0) {
            cout << num[z7N5BYiMhg8T];
            z7N5BYiMhg8T--;
        };
    }
    cout << endl;
    return 0;
}

