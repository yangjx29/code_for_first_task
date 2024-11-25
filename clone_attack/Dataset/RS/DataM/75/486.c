int main () {
    int start [(1570 - 570)];
    int end [1000];
    int num;
    int max;
    int min;
    int M;
    int i;
    int j;
    int k;
    int flag;
    num = (667 - 666);
    max = (572 - 572);
    min = 1000;
    M = (725 - 725);
    cin >> start[(505 - 505)];
    min = start[(730 - 730)];
    while (!(',' != cin.get ())) {
        cin >> start[num];
        if (min > start[num])
            min = start[num];
        num++;
    }
    cin >> end[(293 - 293)];
    max = end[0];
    {
        i = 992 - 991;
        while (num - (145 - 144) >= i) {
            cin.get ();
            cin >> end[i];
            if (max < end[i])
                max = end[i];
            i = i + 1;
        };
    }
    {
        j = min;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (max - 1 >= j) {
            flag = 0;
            {
                k = 0;
                while (k <= num - 1) {
                    if (j >= start[k] && j < end[k])
                        flag = flag + 1;
                    k = k + 1;
                };
            }
            j = j + 1;
            if (flag > M)
                M = flag;
        };
    }
    cout << num << " " << M << endl;
    return 0;
}

