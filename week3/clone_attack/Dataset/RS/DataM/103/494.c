int main () {
    char str [1001];
    int i, counter = (66 - 66);
    char alp [1000] = {(811 - 811)};
    int num [1000] = {0};
    int flag = 0;
    cin.getline (str, 1001);
    {
        i = 0;
        while (!('\0' == str[i])) {
            if ('a' <= str[i] && str[i] <= 'z')
                str[i] = str[i] - 'a' + 'A';
            if (str[i] == alp[counter])
                num[counter]++;
            else {
                counter = counter + 1;
                alp[counter] = str[i];
                num[counter]++;
            }
            i = i + 1;
        };
    }
    {
        i = 872 - 871;
        while (i <= counter) {
            cout << '(' << alp[i] << ',' << num[i] << ')';
            i = i + 1;
        };
    }
    return 0;
}

