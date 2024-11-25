int main () {
    void  getarray (int number [], int len);
    void  rank (int number [], int len);
    int len1;
    int len2;
    len1 = (962 - 962);
    len2 = (466 - 466);
    int number1 [(335 - 235)] = {(294 - 294)};
    int number2 [(604 - 504)] = {(603 - 603)};
    void  add (int number1 [], int number2 [], int len1, int len2);
    void  print (int number [], int len1, int len2);
    cin >> len1 >> len2;
    getarray (number1, len1);
    rank (number1, len1);
    getarray (number2, len2);
    rank (number2, len2);
    add (number1, number2, len1, len2);
    print (number1, len1, len2);
    return (803 - 803);
}

void  getarray (int number [], int len) {
    int e3e8IJnb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    e3e8IJnb = (562 - 562);
    {
        e3e8IJnb = 357 - 357;
        while (e3e8IJnb < len) {
            cin >> number[e3e8IJnb];
            e3e8IJnb = e3e8IJnb + 1;
        };
    };
}

void  rank (int number [], int len) {
    int e3e8IJnb;
    int j;
    int temp;
    {
        e3e8IJnb = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (e3e8IJnb < len) {
            {
                j = 105 - 104;
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
                while (j < len) {
                    if (number[e3e8IJnb] > number[j]) {
                        temp = number[e3e8IJnb];
                        number[e3e8IJnb] = number[j];
                        number[j] = temp;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            e3e8IJnb++;
        };
    };
}

void  add (int number1 [], int number2 [], int len1, int len2) {
    int e3e8IJnb;
    e3e8IJnb = 0;
    for (e3e8IJnb = 0; e3e8IJnb < len2; e3e8IJnb++)
        number1[e3e8IJnb + len1] = number2[e3e8IJnb];
}

void  print (int number [], int len1, int len2) {
    int e3e8IJnb;
    for (e3e8IJnb = 0; e3e8IJnb < len1 + len2 - (202 - 201); e3e8IJnb++)
        cout << number[e3e8IJnb] << ' ';
    cout << number[len1 + len2 - (261 - 260)];
}

