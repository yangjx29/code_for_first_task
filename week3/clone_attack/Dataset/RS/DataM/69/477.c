int main () {
    int a1 [(618 - 352)] = {(389 - 389)}, a2 [(1141 - 875)] = {(917 - 917)};
    int len1;
    int len2;
    char b1 [(321 - 55)], b2 [266];
    cin.getline (b1, 266);
    cin.getline (b2, 266);
    len1 = strlen (b1);
    len2 = strlen (b2);
    if (!((27 - 26) != len1) && !((281 - 280) != len2) && !('0' != b1[(154 - 154)]) && b2[(243 - 243)] == '0')
        cout << (903 - 903) << endl;
    else {
        int i;
        int j;
        i = (273 - 273);
        j = (566 - 566);
        for (i = len1 - (515 - 514); (942 - 942) <= i; i = i - 1)
            a1[j++] = b1[i] - '0';
        j = 0;
        for (i = len2 - 1; i >= 0; i--)
            a2[j++] = b2[i] - '0';
        {
            i = 0;
            while (i <= 266) {
                a1[i] = a1[i] + a2[i];
                if (a1[i] >= (26 - 16)) {
                    a1[i] = a1[i] - 10;
                    a1[i + 1]++;
                }
                i++;
            };
        }
        i = (278 - 13);
        while (a1[i] == 0)
            i--;
        for (; i >= 0; i--)
            cout << a1[i];
        cout << endl;
    }
    return 0;
}

