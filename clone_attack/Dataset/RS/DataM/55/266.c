int main () {
    int sum;
    int j;
    int i;
    int RrndXjHlqV;
    int len;
    int num;
    int n;
    sum = (619 - 619);
    j = 0;
    char zi [1000];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int goal [1000];
    cin >> RrndXjHlqV >> zi >> n;
    len = strlen (zi);
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
        while (len > i) {
            if (64 < zi[i] && 91 > zi[i])
                num = (int) zi[i] - (179 - 124);
            else {
                if (96 < zi[i] && 123 > zi[i])
                    num = (int) zi[i] - 87;
                else
                    num = (int) zi[i] - 48;
            }
            sum = sum + num * pow (RrndXjHlqV *1.0, len - i - 1);
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
    while (sum >= n) {
        goal[j] = sum % n;
        sum = sum / n;
        j++;
    }
    goal[j] = sum;
    for (i = j; i >= 0; i--) {
        if (goal[i] >= 10)
            cout << (char) (goal[i] + 55);
        else
            cout << goal[i];
    }
    cout << endl;
    return 0;
}

