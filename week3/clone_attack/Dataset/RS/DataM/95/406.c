int main () {
    int i;
    char str1 [(910 - 829)];
    char str2 [(116 - 35)];
    char ans;
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
    cin.getline (str1, 81);
    cin.getline (str2, 81);
    {
        i = 600 - 600;
        while (!('\0' == str1[i])) {
            if (str1[i] > (367 - 271) && str1[i] < (1050 - 927))
                str1[i] = str1[i] - (223 - 191);
            if (str2[i] > 96 && str2[i] < 123)
                str2[i] = str2[i] - 32;
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
            if (str1[i] == str2[i])
                ans = '=';
            else {
                if (str1[i] > str2[i]) {
                    ans = '>';
                    break;
                }
                else {
                    ans = '<';
                    break;
                };
            }
            i++;
        };
    }
    cout << ans << endl;
    return 0;
}

