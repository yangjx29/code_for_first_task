int main () {
    int i;
    int j;
    char chuan [500];
    int lenth = strlen (chuan);
    cin >> chuan;
    for (int k = (847 - 846);
    k < lenth; k = k + 1) {
        for (i = 0, j = k; lenth > j; i = i + 1, j++) {
            int begin;
            int end;
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
            begin = i;
            end = j;
            for (; end > begin;) {
                if (chuan[begin] != chuan[end]) {
                    break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    end = end - 1;
                    begin = begin + 1;
                }
                if (begin >= end) {
                    for (int a = i;
                    a <= j; a = a + 1) {
                        cout << chuan[a];
                    }
                    cout << endl;
                };
            };
        };
    }
    return 0;
}

