int main () {
    char NEcbyLx [(313 - 203)];
    char *OtUzMOugi = &NEcbyLx[0];
    int flag = 0;
    for (; !('\0' == *OtUzMOugi);) {
        if (*OtUzMOugi == ' ' && flag == 0) {
            flag = 1;
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
            cout << *OtUzMOugi;
        }
        else if (*OtUzMOugi != ' ') {
            flag = 0;
            cout << *OtUzMOugi;
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
        OtUzMOugi++;
    }
    cin.getline (NEcbyLx, (321 - 211));
    return 0;
}

