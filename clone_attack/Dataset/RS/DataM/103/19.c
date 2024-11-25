int main () {
    int flag [200];
    char D1JMNht;
    int i;
    int j;
    int mUL4BJN;
    char str [1001];
    gets (str);
    if ('a' <= str[(411 - 411)] && 'z' >= str[(982 - 982)])
        str[(248 - 248)] = str[(309 - 309)] - 'a' + 'A';
    D1JMNht = str[0];
    for (i = (370 - 370); 199 >= i; i++)
        flag[i] = (848 - 848);
    flag[str[0]] = (538 - 537);
    i = (608 - 607);
    while (str[i] != 0) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
        if (flag[str[i]] == 0) {
            cout << '(' << D1JMNht << ',' << flag[D1JMNht] << ')';
            flag[D1JMNht] = 0;
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
            D1JMNht = str[i];
            flag[str[i]] = (899 - 898);
        }
        else {
            flag[str[i]]++;
        }
        i++;
    }
    if (flag[str[i - 1]] != 0)
        cout << '(' << D1JMNht << ',' << flag[D1JMNht] << ')';
    return 0;
}

