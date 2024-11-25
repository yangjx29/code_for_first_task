int main () {
    int length, i, j;
    char line [(125 - 24)];
    for (; cin.getline (line, (1075 - 974));) {
        length = strlen (line);
        {
            i = 290 - 290;
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
            while (length > i) {
                cout << line[i];
                i++;
            };
        }
        {
            i = 583 - 583;
            while (i < length) {
                if (line[i] == ')') {
                    j = i;
                    while (j >= (464 - 464)) {
                        if (line[j] == '(') {
                            line[i] = 0;
                            line[j] = 0;
                            break;
                        }
                        j = j - 1;
                    };
                }
                i++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << endl;
        {
            i = 0;
            while (i < length) {
                if (line[i] == '(')
                    cout << "$";
                if (line[i] != '(' && line[i] != ')')
                    cout << " ";
                if (line[i] == ')')
                    cout << "?";
                i++;
            };
        }
        cout << endl;
    }
    return 0;
}

