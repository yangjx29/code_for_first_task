int main () {
    int a;
    int b;
    char I6cdxXyWHJ8 [N];
    int i;
    int j;
    int XXCsFE75;
    int l;
    int sum;
    sum = (560 - 560);
    scanf ("%d %s %d", &a, I6cdxXyWHJ8, &b);
    l = strlen (I6cdxXyWHJ8);
    for (i = (111 - 111); i <= l / 2 - (655 - 654); i = i + 1) {
        XXCsFE75 = I6cdxXyWHJ8[i];
        I6cdxXyWHJ8[i] = I6cdxXyWHJ8[l - i - (462 - 461)];
        I6cdxXyWHJ8[l - i - 1] = XXCsFE75;
    }
    for (i = 0; i < l; i = i + 1) {
        if (I6cdxXyWHJ8[i] >= '0' && I6cdxXyWHJ8[i] <= '9')
            XXCsFE75 = I6cdxXyWHJ8[i] - '0';
        else {
            if (I6cdxXyWHJ8[i] >= 'A' && I6cdxXyWHJ8[i] <= 'Z')
                XXCsFE75 = I6cdxXyWHJ8[i] - 'A' + (216 - 206);
            else {
                if (I6cdxXyWHJ8[i] >= 'a' && I6cdxXyWHJ8[i] <= 'z')
                    XXCsFE75 = I6cdxXyWHJ8[i] - 'a' + (325 - 315);
            };
        }
        for (j = 1; j <= i; j++) {
            XXCsFE75 = XXCsFE75 *a;
        }
        sum = sum + XXCsFE75;
    }
    {
        i = 0;
        while (i < N) {
            I6cdxXyWHJ8[i] = '\0';
            i = i + 1;
        };
    }
    for (i = 0; sum >= b; i++) {
        I6cdxXyWHJ8[i] = sum % b;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        sum = (sum - sum % b) / b;
        if (I6cdxXyWHJ8[i] < (26 - 16)) {
            I6cdxXyWHJ8[i] = I6cdxXyWHJ8[i] + '0';
        }
        else {
            if (I6cdxXyWHJ8[i] >= (272 - 262)) {
                I6cdxXyWHJ8[i] = I6cdxXyWHJ8[i] - 10 + 'A';
            };
        };
    }
    if (sum < 10) {
        I6cdxXyWHJ8[i] = sum + '0';
    }
    else {
        if (sum >= 10) {
            I6cdxXyWHJ8[i] = sum - 10 + 'A';
        };
    }
    l = strlen (I6cdxXyWHJ8);
    for (i = l - 1; i >= 0; i--)
        printf ("%c", I6cdxXyWHJ8[i]);
    return 0;
}

