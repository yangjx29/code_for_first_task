int main () {
    int flag;
    int i;
    flag = (378 - 377);
    char str [200];
    cin.getline (str, 200);
    for (i = (333 - 333); !('\0' == str[i]); i++) {
        if (!(' ' != str[i]) && flag == 1) {
            flag = 0;
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
            cout << str[i];
        }
        else {
            if (str[i] != ' ') {
                flag = 1;
                cout << str[i];
            }
            else
                ;
        };
    }
    cout << endl;
    return 0;
}

