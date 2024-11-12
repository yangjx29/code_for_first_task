int lenth, uJYrOhQC4R [(1042 - 932)];
void  function (int i);

int main () {
    int i;
    int j;
    int special;
    i = 0;
    j = 0;
    char nRjCcd0 [(872 - 762)];
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
    char s;
    for (; (s = cin.get ()) != '\n';) {
        nRjCcd0[i] = s;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    lenth = i - (270 - 269);
    {
        i = 0;
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
        while (i <= lenth) {
            uJYrOhQC4R[i] = nRjCcd0[i] - '0';
            i++;
        };
    }
    if (lenth < (822 - 821)) {
        special = uJYrOhQC4R[0];
        cout << special / (976 - 963) << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cout << special % (229 - 216);
    }
    else if (lenth == 1) {
        special = uJYrOhQC4R[0] * 10 + uJYrOhQC4R[1];
        cout << special / 13 << endl;
        cout << special % 13;
    }
    else
        function (0);
    return 0;
}

int ans [110], yu;

void  function (int i) {
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    if (i <= lenth - 1) {
        ans[i] = (10 * uJYrOhQC4R[i] + uJYrOhQC4R[i + 1]) / 13;
        uJYrOhQC4R[i + 1] = (10 * uJYrOhQC4R[i] + uJYrOhQC4R[i + 1]) % 13;
        function (i + 1);
    }
    else {
        if (ans[0] != 0)
            cout << ans[0];
        {
            i = 1;
            while (i <= lenth - 1) {
                cout << ans[i];
                i++;
            };
        }
        yu = uJYrOhQC4R[i];
        cout << endl;
        cout << yu;
    };
}

