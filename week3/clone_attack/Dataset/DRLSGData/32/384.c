int main () {
    int xG3draUDv7T;
    cin >> xG3draUDv7T;
    for (; xG3draUDv7T = xG3draUDv7T - 1;) {
        int KxHsZaygQ9;
        int len2;
        char num1 [(317 - 216)];
        char num2 [(810 - 709)];
        int KJwsz2cG9Yfg;
        len2 = (174 - 174);
        KJwsz2cG9Yfg = (118 - 118);
        KxHsZaygQ9 = (425 - 425);
        {
            int KxHsZaygQ9 = 0;
            for (; KxHsZaygQ9 != 101;) {
                num1[KxHsZaygQ9] = num2[KxHsZaygQ9] = '\0';
                KxHsZaygQ9 = KxHsZaygQ9 +1;
            }
        }
        cin >> num1 >> num2;
        for (; num2[len2++] != '\0';) {
        }
        len2--;
        for (; num1[KJwsz2cG9Yfg++] != '\0';) {
        }
        KJwsz2cG9Yfg--;
        {
            int KxHsZaygQ9;
            KxHsZaygQ9 = KJwsz2cG9Yfg -1;
            for (; 0 <= KxHsZaygQ9;) {
                num1[101 + KxHsZaygQ9 -KJwsz2cG9Yfg] = num1[KxHsZaygQ9];
                num1[KxHsZaygQ9] = '\0';
                KxHsZaygQ9 = KxHsZaygQ9 -1;
            }
        }
        for (int KxHsZaygQ9 = len2 - 1;
        KxHsZaygQ9 >= 0; KxHsZaygQ9--) {
            num2[101 + KxHsZaygQ9 -len2] = num2[KxHsZaygQ9];
            num2[KxHsZaygQ9] = '\0';
        }
        {
            int KxHsZaygQ9 = (473 - 373);
            for (; num2[KxHsZaygQ9] != '\0';) {
                int temp;
                temp = num1[KxHsZaygQ9] - num2[KxHsZaygQ9];
                if (0 > temp) {
                    num1[KxHsZaygQ9 -1]--;
                    num1[KxHsZaygQ9] = 10 + temp + '0';
                }
                else
                    num1[KxHsZaygQ9] = temp + '0';
                KxHsZaygQ9 = KxHsZaygQ9 -1;
            }
        }
        for (; !('\0' != num1[KxHsZaygQ9]) || !('0' != num1[KxHsZaygQ9]);)
            KxHsZaygQ9 = KxHsZaygQ9 +1;
        for (; KxHsZaygQ9 != 101; KxHsZaygQ9++)
            cout << num1[KxHsZaygQ9];
        cout << endl;
    }
    return 0;
}

