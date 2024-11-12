int main () {
    int i;
    int j;
    int GYNdgR0H;
    char str [1010];
    char mark;
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
    i = j = 0;
    cin >> str;
    do {
        GYNdgR0H = 0;
        do {
            GYNdgR0H++;
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
            j++;
        }
        while (str[i] - 'A' == str[j] - 'A' || !(str[j] - 'a' != str[i] - 'A') || !(str[j] - 'A' != str[i] - 'a'));
        if (str[i] >= 'a' && str[i] <= 'z')
            mark = str[i] - 'a' + 'A';
        else
            mark = str[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = j;
        cout << "(" << mark << "," << GYNdgR0H << ")";
    }
    while (str[i] != '\0');
    return 0;
}

