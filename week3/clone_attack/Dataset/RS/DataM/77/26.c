void  queue (char [], int);
char boy, girl;

int main () {
    char str [(816 - 716)];
    int l = strlen (str);
    cin.getline (str, 100);
    boy = str[0];
    {
        int i;
        i = (563 - 562);
        while (l > i) {
            if (!(boy == str[i])) {
                girl = str[i];
                break;
            }
            i++;
        };
    }
    {
        int i = 0;
        while (i < l) {
            i++;
            queue (str, l);
        };
    }
    return 0;
}

void  queue (char a [], int s) {
    for (int i = 0;
    s > i; i++) {
        if (!(boy != a[i])) {
            int k = 1;
            while (a[i + k] == '0') {
                k = k + 1;
            }
            if (a[i + k] == girl) {
                cout << i << " " << i + k << endl;
                a[i] = '0';
                a[i + k] = '0';
                break;
            };
        };
    };
}

