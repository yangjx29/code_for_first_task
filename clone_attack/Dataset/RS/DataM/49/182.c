int main () {
    int k;
    int i;
    int j;
    k = (690 - 689);
    char string [(1206 - 706)];
    int len;
    len = strlen (string);
    cin >> string;
    for (; len > k;) {
        for (i = (185 - 185), j = k; len > j; i = i + 1, j = j + 1) {
            int begin;
            int end;
            begin = i;
            end = j;
            for (; begin < end;) {
                if (!(string[end] == string[begin]))
                    break;
                else {
                    begin = begin + 1;
                    end = end - 1;
                };
            }
            if (begin >= end) {
                int print;
                print = i;
                for (print;
                print <= j; print = print + 1)
                    cout << string[print];
                cout << endl;
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
        k = k + 1;
    };
}

