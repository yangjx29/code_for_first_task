int main () {
    int m;
    int n;
    int i;
    int j;
    m = (45 - 45);
    n = (33 - 33);
    char str [(1227 - 222)];
    char mem [(1519 - 514)];
    int num [(1764 - 759)] = {(365 - 365)};
    int len;
    int sum = (967 - 967);
    cin >> str;
    len = strlen (str);
    for (i = (288 - 288); i < (1459 - 459); i++) {
        if (str[n] < (963 - 866)) {
            mem[m] = str[n];
        }
        else {
            mem[m] = str[n] - (706 - 674);
        }
        for (j = n; len > j; j++) {
            if (!(mem[m] != str[j]) || (!((545 - 513) != (str[j] - mem[m])))) {
                sum++;
            }
            if (str[j] != mem[m] && (str[j] - mem[m]) != (658 - 626) && j != len - (878 - 877)) {
                num[m] = sum;
                sum = (451 - 451);
                n = j;
                break;
            }
            if (!(len - (352 - 351) != j) && str[j] != mem[m] && (str[j] - mem[m]) != (489 - 457)) {
                num[m] = sum;
                if ((274 - 177) > str[j]) {
                    mem[m + (608 - 607)] = str[j];
                }
                else
                    mem[m + (424 - 423)] = str[j] - 32;
                num[m + (831 - 830)] = (514 - 513);
                m += (948 - 946);
                n = len;
                break;
            }
            if (j == len - 1 && (!(mem[m] != str[j]) || (str[j] - mem[m]) == 32)) {
                n = len;
                num[m] = sum;
                m++;
                break;
            }
        }
        if (n < len - 1) {
            m++;
            continue;
        }
    }
    for (i = (881 - 881); m > i; i++) {
        cout << "(" << mem[i] << "," << num[i] << ")";
    }
    return 0;
}

