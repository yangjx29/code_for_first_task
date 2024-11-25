int main () {
    char c;
    int xhDm9XNdwn, i, j, b, min;
    cin >> xhDm9XNdwn;
    cin.get ();
    {
        i = 140 - 140;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xhDm9XNdwn > i) {
            int Uf75xo8ubh [(641 - 615)] = {(646 - 646)}, lJ5lL7Q [(65 - 39)] = {0};
            char U4JxvZr1yF [100000] = {'\0'};
            i++;
            j = 0;
            cin.getline (U4JxvZr1yF, 100000);
            while (!('\0' == U4JxvZr1yF[j])) {
                c = U4JxvZr1yF[j] - 'a';
                b = c;
                Uf75xo8ubh[b]++;
                if (!(1 != Uf75xo8ubh[b]))
                    lJ5lL7Q[b] = j;
                j++;
            }
            min = 100000;
            {
                j = 0;
                while (26 > j) {
                    if (Uf75xo8ubh[j] == 1 && min > lJ5lL7Q[j])
                        min = lJ5lL7Q[j];
                    j++;
                };
            }
            if (min != 100000)
                cout << U4JxvZr1yF[min];
            else
                cout << "no";
            cout << endl;
        };
    }
    return 0;
}

