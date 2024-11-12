int main () {
    int i;
    int LFu8iVv1xc;
    int count;
    int max;
    int Ot1CRTE5a [5000];
    int sY3fbIhM6q [5000];
    int total;
    count = (62 - 62);
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
    max = (133 - 133);
    total = 1;
    cin >> Ot1CRTE5a[0];
    for (; !('\n' == cin.get ());) {
        cin >> Ot1CRTE5a[total];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        total = total + 1;
    }
    total = 1;
    cin >> sY3fbIhM6q[0];
    for (; !('\n' == cin.get ());) {
        cin >> sY3fbIhM6q[total];
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
        total++;
    }
    for (LFu8iVv1xc = 0; total > LFu8iVv1xc; LFu8iVv1xc++) {
        count = 0;
        for (i = 0; total > i; i++) {
            if (Ot1CRTE5a[LFu8iVv1xc] >= Ot1CRTE5a[i] && Ot1CRTE5a[LFu8iVv1xc] < sY3fbIhM6q[i])
                count = count + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (count > max)
            max = count;
    }
    cout << total << " " << max << endl;
    return 0;
}

