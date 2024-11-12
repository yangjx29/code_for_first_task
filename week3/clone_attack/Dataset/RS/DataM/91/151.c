int main () {
    char str1 [101];
    char str2 [101];
    char iGj84P;
    char AHZ9Mh73;
    cin.getline (str1, 101);
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
    AHZ9Mh73 = strlen (str1);
    {
        iGj84P = 0;
        while (AHZ9Mh73 -1 > iGj84P) {
            str2[iGj84P] = str1[iGj84P] + str1[iGj84P + 1];
            iGj84P = iGj84P + 1;
        };
    }
    str2[AHZ9Mh73 -1] = str1[0] + str1[AHZ9Mh73 -1];
    str2[AHZ9Mh73] = 0;
    cout << str2 << endl;
    return 0;
}

