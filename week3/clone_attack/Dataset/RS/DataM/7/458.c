int main () {
    int n, m, cut, FzxkeRJ = (346 - 346), flag = 0;
    char str [1000], sub [(981 - 481)], rep [(1242 - 742)];
    cin >> str >> sub >> rep;
    n = strlen (str);
    m = strlen (sub);
    cut = strlen (rep);
    for (; str[FzxkeRJ] != '\0';) {
        if (!(sub[0] != str[FzxkeRJ])) {
            int j;
            j = 0;
            int k;
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
            k = FzxkeRJ;
            for (; !('\0' == sub[j]);) {
                if (sub[j] == str[k]) {
                    k++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                }
                else
                    break;
            }
            if (j == m) {
                {
                    int t = n - (637 - 636);
                    while (t >= FzxkeRJ +m) {
                        str[t + cut - m] = str[t];
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
                        t--;
                    };
                }
                str[n + cut - m] = '\0';
                {
                    int t = FzxkeRJ;
                    while (t < FzxkeRJ +cut) {
                        str[t] = rep[t - FzxkeRJ];
                        t++;
                    };
                }
                flag = 1;
            }
            if (flag == 1)
                break;
        }
        FzxkeRJ = FzxkeRJ +1;
    }
    cout << str;
    return 0;
}

