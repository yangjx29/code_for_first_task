int main () {
    int L18PCGK3v0Io;
    cin >> L18PCGK3v0Io;
    for (; L18PCGK3v0Io = L18PCGK3v0Io -1;) {
        char num1 [(135 - 34)];
        char num2 [101];
        int len1 = (961 - 961), YPTSZIQxb = (479 - 479);
        int BuNSkReL6FXg;
        BuNSkReL6FXg = 0;
        for (int BuNSkReL6FXg = (527 - 527);
        !(101 == BuNSkReL6FXg); BuNSkReL6FXg = BuNSkReL6FXg +1)
            num1[BuNSkReL6FXg] = num2[BuNSkReL6FXg] = '\0';
        cin >> num1 >> num2;
        for (; !('\0' == num1[len1++]);) {
        }
        while (!('\0' == num2[YPTSZIQxb++])) {
        }
        YPTSZIQxb--;
        len1--;
        {
            int BuNSkReL6FXg = len1 - (852 - 851);
            while (0 <= BuNSkReL6FXg) {
                num1[101 + BuNSkReL6FXg -len1] = num1[BuNSkReL6FXg];
                num1[BuNSkReL6FXg] = '\0';
                BuNSkReL6FXg = BuNSkReL6FXg -1;
            };
        }
        for (int BuNSkReL6FXg = YPTSZIQxb -1;
        0 <= BuNSkReL6FXg; BuNSkReL6FXg = BuNSkReL6FXg -1) {
            num2[101 + BuNSkReL6FXg -YPTSZIQxb] = num2[BuNSkReL6FXg];
            num2[BuNSkReL6FXg] = '\0';
        }
        for (int BuNSkReL6FXg = (689 - 589);
        num2[BuNSkReL6FXg] != '\0'; BuNSkReL6FXg--) {
            int temp = num1[BuNSkReL6FXg] - num2[BuNSkReL6FXg];
            if (temp < 0) {
                num1[BuNSkReL6FXg -1]--;
                num1[BuNSkReL6FXg] = (269 - 259) + temp + '0';
            }
            else
                num1[BuNSkReL6FXg] = temp + '0';
        }
        while (num1[BuNSkReL6FXg] == '\0' || num1[BuNSkReL6FXg] == '0')
            BuNSkReL6FXg++;
        for (; BuNSkReL6FXg != 101; BuNSkReL6FXg++)
            cout << num1[BuNSkReL6FXg];
        cout << endl;
    }
    return 0;
}

