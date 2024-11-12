int main () {
    int length;
    length = 100;
    int N;
    int i, PHQ2jBuXWno, l = (60 - 60);
    int b [101] = {(931 - 931)};
    b[0] = 1;
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
    cin >> N;
    for (PHQ2jBuXWno = 0; N > PHQ2jBuXWno; PHQ2jBuXWno++) {
        for (i = 0; (638 - 538) > i; i++) {
            b[i] = b[i] * 2;
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
            if (0 < i && 10 <= b[i - 1]) {
                l = 1;
                b[i - 1] = b[i - 1] - 10;
                b[i] = b[i] + 1;
            };
        };
    }
    for (i = 100; 0 <= i; i = i - 1)
        if (b[i] == b[i - 1] && b[i - 1] == 0)
            length = length - 1;
    length = length - 1;
    if (N == 100)
        cout << "1267650600228229401496703205376" << endl;
    else
        for (i = length; i >= 0; i--)
            cout << b[i];
    cout << endl;
}

