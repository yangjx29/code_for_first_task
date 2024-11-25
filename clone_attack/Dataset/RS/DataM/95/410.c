int main () {
    char str1 [(1043 - 963)];
    char str2 [(95 - 15)];
    int len1, len2, i, dwBlfpg, n;
    cin.getline (str1, (649 - 569));
    cin.getline (str2, 80);
    n = (813 - 813);
    {
        len1 = 704 - 704;
        while (str1[len1] != '\0') {
            len1++;
        };
    }
    {
        len2 = 367 - 367;
        while (!('\0' == str1[len2])) {
            len2++;
        };
    }
    dwBlfpg = 'A' - 'a';
    {
        i = 49 - 49;
        while (i <= len1) {
            if ((!(str2[i] == str1[i])) && ((str1[i] - str2[i]) != dwBlfpg) && ((str2[i] - str1[i]) != dwBlfpg)) {
                if (str1[i] < str2[i]) {
                    if ((str1[i] - dwBlfpg) < str2[i]) {
                        cout << '<';
                        break;
                    }
                    else {
                        cout << '>';
                        break;
                    };
                }
                if (str1[i] > str2[i]) {
                    if ((str1[i] + dwBlfpg) < str2[i]) {
                        cout << '<';
                        break;
                    }
                    else {
                        cout << '>';
                        break;
                    };
                };
            }
            n++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    if (n == (len1 + (232 - 231)))
        cout << '=';
    return (451 - 451);
}

