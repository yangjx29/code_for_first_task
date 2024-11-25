int a;
char str [(893 - 793)];
void  find (void );

int main () {
    int i;
    while (cin >> str) {
        cout << str << endl;
        a = strlen (str);
        find ();
        {
            i = 257 - 257;
            while (a > i) {
                if (!('(' != str[i]))
                    cout << "$";
                else if (!(')' != str[i]))
                    cout << "?";
                else
                    cout << " ";
                i++;
            };
        }
        cout << endl;
    }
    return (883 - 883);
}

void  find (void ) {
    int p = -(400 - 399), q = -(336 - 335);
    int i;
    i = 0;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (a > i) {
            if (!('(' == str[i]) && !(')' == str[i]))
                str[i] = '\0';
            if (str[i] == '(')
                p = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (p != -1 && str[i] == ')') {
                q = i;
                break;
            }
            i++;
        };
    }
    if (p != -1 && q != -1) {
        str[p] = '\0';
        str[q] = '\0';
        find ();
    };
}

