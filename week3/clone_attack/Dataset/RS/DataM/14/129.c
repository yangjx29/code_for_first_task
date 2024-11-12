int main () {
    int n, i, j;
    struct   {
        int number;
        float score1;
        float score2;
        float score3;
    }
    stu [100000], temp;
    cin >> n;
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
        while (n - (171 - 170) >= i) {
            cin >> stu[i].number >> stu[i].score1 >> stu[i].score2;
            stu[i].score3 = stu[i].score2 + stu[i].score1;
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
            i++;
        };
    }
    for (i = n - (528 - 527); n - 3 <= i; i--) {
        j = n - 1;
        while (j >= n - i) {
            if (stu[j - 1].score3 < stu[j].score3) {
                temp = stu[j];
                stu[j] = stu[j - 1];
                stu[j - 1] = temp;
            }
            j--;
        };
    }
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
    cout << stu[0].number << " " << stu[0].score3 << endl;
    cout << stu[1].number << " " << stu[1].score3 << endl;
    cout << stu[2].number << " " << stu[2].score3;
    return 0;
}

