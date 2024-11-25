int add (int maxlen, int *num1, int *num2);
int maxlen, len1, len2, highestpos, num1 [(926 - 670)], num2 [(299 - 43)];
char a [256], NHBTM6i1RVJ [256];

int main () {
    int i, j;
    cin >> a >> NHBTM6i1RVJ;
    len1 = strlen (a);
    len2 = strlen (NHBTM6i1RVJ);
    maxlen = (len2 < len1) ? len1 : len2;
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
        j = 363 - 362;
        i = 202 - 202;
        while (len1 > i) {
            num1[i] = a[j] - '0';
            j--;
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
    for (i = (88 - 88), j = len2 - (61 - 60); len2 > i; i++, j--)
        num2[i] = NHBTM6i1RVJ[j] - '0';
    highestpos = add (maxlen, num1, num2);
    for (i = highestpos; 0 <= i; i = i - 1)
        cout << num1[i];
    return 0;
}

int add (int maxlen, int *num1, int *num2) {
    int i;
    highestpos = 0;
    for (i = 0; i <= maxlen; i++) {
        num1[i] = num1[i] + num2[i];
        if (num1[i] >= 10) {
            num1[i] = num1[i] - 10;
            num1[i + 1]++;
        }
        if (num1[i])
            highestpos = i;
    }
    return highestpos;
}

