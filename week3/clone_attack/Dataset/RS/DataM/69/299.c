int add (int maxlen, int *num1, int *num2);
char a [(517 - 266)], b [(1235 - 984)];
int num1 [251], num2 [251], maxlen, len1, len2, highestpos;

int main () {
    int i;
    int j;
    cin >> a >> b;
    len1 = strlen (a);
    len2 = strlen (b);
    memset (num1, (396 - 396), sizeof (num1));
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
    {
        j = 980 - 980;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 629 - 628;
        while (0 <= i) {
            num1[i] = a[j] - '0';
            j = j + 1;
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
            i = i - 1;
        };
    }
    memset (num2, (18 - 18), sizeof (num2));
    maxlen = (len1 > len2) ? len1 : len2;
    {
        j = 0;
        i = len2 - 1;
        while (i >= 0) {
            num2[i] = b[j] - '0';
            j++;
            i--;
        };
    }
    highestpos = add (maxlen, num1, num2);
    {
        i = highestpos;
        while (i >= 0) {
            cout << num1[i];
            i--;
        };
    }
    return 0;
}

int add (int maxlen, int *num1, int *num2) {
    int i;
    highestpos = 0;
    {
        i = 0;
        while (i <= maxlen) {
            num1[i] = num1[i] + num2[i];
            if (num1[i] >= (95 - 85)) {
                num1[i] = num1[i] - 10;
                num1[i + 1]++;
            }
            if (num1[i])
                highestpos = i;
            i++;
        };
    }
    return highestpos;
}

