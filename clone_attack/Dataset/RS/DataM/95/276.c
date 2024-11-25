int main () {
    char flag = '=', i = 0;
    char sen_1 [80];
    gets (sen_1);
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
    char sen_2 [80];
    gets (sen_2);
    for (i = 0; 80 > i; i++) {
        if (sen_1[i] >= 65 && 90 >= sen_1[i])
            sen_1[i] = sen_1[i] + 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sen_2[i] >= 65 && 90 >= sen_2[i])
            sen_2[i] = sen_2[i] + 32;
        if (!('\0' != sen_1[i]) && !('\0' == sen_2[i])) {
            flag = '<';
            break;
        }
        else {
            if (sen_2[i] == '\0' && sen_1[i] != '\0') {
                flag = '>';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            }
            else if (sen_1[i] > sen_2[i]) {
                flag = '>';
                break;
            }
            else if (sen_1[i] < sen_2[i]) {
                flag = '<';
                break;
            }
            else if (sen_1[i] == '\0' && sen_2[i] == '\0')
                break;
        };
    }
    printf ("%c", flag);
}

