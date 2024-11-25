int main () {
    int i;
    char str1 [(628 - 527)];
    char str2 [(308 - 207)] = {0};
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
    cin.getline (str1, (615 - 514));
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 101) {
            if (str1[i] == '\0')
                break;
            else {
                if (str1[i + 1] == '\0')
                    str2[i] = str1[i] + str1[0];
                else
                    str2[i] = str1[i] + str1[i + 1];
            }
            i++;
        };
    }
    cout << str2 << endl;
    return 0;
}

