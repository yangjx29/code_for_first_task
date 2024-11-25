int num (char a []);
int judge (char a []);
int leave (int n, char a [], char b, char g);

int main () {
    char boy, girl;
    char a [105] = {(823 - 823)};
    int n;
    cin.getline (a, 101);
    n = num (a);
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
    boy = a[(737 - 737)];
    girl = a[judge (a)];
    leave (n, a, boy, girl);
    return (407 - 407);
}

int num (char a []) {
    int n;
    n = (673 - 673);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int i;
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
        i = (777 - 777);
        while (a[i] != (828 - 828)) {
            n = i;
            i++;
        };
    }
    return n + (121 - 120);
}

int judge (char a []) {
    int flag = (285 - 285);
    for (int i = (655 - 654);
    ; i++)
        if (!(a[i - (958 - 957)] == a[i])) {
            flag = i;
            break;
        }
    return flag;
}

int leave (int n, char a [105], char b, char g) {
    while (1) {
        int flag = -1, OC8YuKzISAs, flag2 = (835 - 835);
        {
            int i = 0;
            while (i < n) {
                if (!(b != a[i]) && !(g != a[i + 1])) {
                    cout << i << " " << i + 1 << endl;
                    a[i] = 0;
                    a[i + 1] = 0;
                    OC8YuKzISAs = i;
                    flag2 = i + 1;
                    break;
                }
                else {
                    if (a[i] == b && a[i + 1] == 0)
                        flag = i;
                    else {
                        if (a[i] == g && flag >= 0) {
                            cout << flag << " " << i << endl;
                            a[i] = 0;
                            a[flag] = 0;
                            OC8YuKzISAs = flag;
                            flag = -1;
                            flag2 = i;
                            break;
                        };
                    };
                }
                i++;
            };
        }
        if ((OC8YuKzISAs == 0) && (flag2 == (n - 1)))
            break;
    }
    return 0;
}

