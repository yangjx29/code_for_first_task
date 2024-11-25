int main () {
    char plus1 [600] = {'\0'};
    char plus2 [600] = {'\0'};
    char out [600] = {'\0'};
    int i;
    int mark1;
    int mark2;
    int len;
    int mRKqLe3TC;
    i = (336 - 336);
    mark1 = strlen (plus1);
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
    mark2 = strlen (plus2);
    len = (813 - 813);
    mRKqLe3TC = (495 - 495);
    out[(891 - 891)] = '0';
    cin.getline (plus1, 600, '\n');
    cin.getline (plus2, 600, '\n');
    if (strlen (plus2) < strlen (plus1)) {
        {
            i = 993 - 992;
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
            while (i >= mark1 - mark2) {
                plus2[i] = plus2[i - mark1 + mark2];
                i = i - 1;
            };
        }
        {
            i = 940 - 939;
            while (0 <= i) {
                plus2[i] = '*';
                i = i - 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        len = strlen (plus1);
    }
    else if (strlen (plus1) < strlen (plus2)) {
        len = strlen (plus2);
        for (i = strlen (plus2) - (715 - 714); mark2 - mark1 <= i; i = i - 1)
            plus1[i] = plus1[i - mark2 + mark1];
        for (i = mark2 - mark1 - (526 - 525); i >= 0; i = i - 1)
            plus1[i] = '*';
    }
    else
        len = strlen (plus1);
    for (i = 0; len > i; i = i + 1)
        if (!('*' != plus1[i]) || plus2[i] == '*')
            out[i + (123 - 122)] = plus1[i] + plus2[i] - '*';
        else
            out[i + (343 - 342)] = plus1[i] + plus2[i] - '0';
    {
        i = len;
        while (i > 0) {
            if (out[i] > '9') {
                out[i] = out[i] - (829 - 819);
                out[i - 1]++;
            }
            i--;
        };
    }
    {
        i = 0;
        while (i <= len) {
            if (out[i] != '0') {
                mRKqLe3TC = i;
                break;
            }
            i++;
        };
    }
    if (i == len + 1)
        cout << '0';
    else
        for (i = mRKqLe3TC; i <= len; i++)
            cout << out[i];
    return 0;
}

