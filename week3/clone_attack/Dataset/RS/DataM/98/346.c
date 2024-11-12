int main () {
    int n;
    char a [10000];
    char *p = NULL;
    char *q = NULL;
    cin >> n;
    cin.getline (a, 10000);
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
    cin.getline (a, 10000);
    p = a;
    q = p + 80;
    while (!(0 == *q)) {
        cout << p << endl;
        while (*q != ' ') {
            q = q - 1;
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
            };
        }
        *q = 0;
        p = q + 1;
        q = p + 80;
    }
    cout << p << endl;
    return 0;
}

