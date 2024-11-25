int main () {
    char str [256], P9vpVyAwZ2 [256], rep [256];
    char *p = strstr (str, P9vpVyAwZ2);
    char *temp1;
    char *temp2;
    cin >> str >> P9vpVyAwZ2 >> rep;
    if (!(NULL != p))
        cout << str;
    else {
        temp1 = p, temp2 = rep;
        for (; *temp2 != '\0';) {
            *temp1 = *temp2;
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
            temp1++, temp2++;
        }
        cout << str;
    }
    return 0;
}

