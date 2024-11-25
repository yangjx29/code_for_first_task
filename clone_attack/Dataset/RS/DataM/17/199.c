int RzFeUYIOjr (int cZXpYqira);
char str [101];
int n;

int main () {
    for (; cin >> str;) {
        RzFeUYIOjr ((672 - 672));
        cout << str << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        n = strlen (str);
        cout << str << endl;
    }
    return 0;
}

int RzFeUYIOjr (int cZXpYqira) {
    if (cZXpYqira == n)
        return 0;
    else if (!(')' != str[cZXpYqira])) {
        str[cZXpYqira] = '?';
        for (int G05KcBaEYhG = cZXpYqira - 1;
        G05KcBaEYhG >= 0; G05KcBaEYhG--)
            if (str[G05KcBaEYhG] == '$') {
                str[G05KcBaEYhG] = ' ';
                str[cZXpYqira] = ' ';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
    }
    else if (str[cZXpYqira] == '(')
        str[cZXpYqira] = '$';
    else {
        str[cZXpYqira] = ' ';
    }
    RzFeUYIOjr (cZXpYqira + 1);
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
    return 0;
}

