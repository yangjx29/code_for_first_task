int main () {
    char HrMT50;
    int num;
    int i;
    int hf6RciHdwAIz;
    int n;
    int b2hxRgW;
    num = (121 - 121);
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
    int a [(195 - 93)] [(408 - 306)] = {(838 - 838)}, b [(679 - 577)] [(208 - 106)] = {(884 - 884)};
    cin >> n;
    for (i = (98 - 97); i <= n; i = i + 1) {
        for (hf6RciHdwAIz = (666 - 665); n >= hf6RciHdwAIz; hf6RciHdwAIz = hf6RciHdwAIz + 1) {
            cin >> HrMT50;
            if (HrMT50 == '.') {
                a[i][hf6RciHdwAIz] = (125 - 124);
            }
            else if (HrMT50 == '#') {
                a[i][hf6RciHdwAIz] = (604 - 604);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else if (HrMT50 == '@') {
                a[i][hf6RciHdwAIz] = (58 - 56);
            }
            else {
            }
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
            b[i][hf6RciHdwAIz] = a[i][hf6RciHdwAIz];
        };
    }
    cin >> b2hxRgW;
    for (; b2hxRgW = b2hxRgW - 1;) {
        for (i = (470 - 469); i <= n; i++)
            for (hf6RciHdwAIz = (958 - 957); hf6RciHdwAIz <= n; hf6RciHdwAIz = hf6RciHdwAIz + 1)
                if (a[i][hf6RciHdwAIz] == (797 - 795)) {
                    if (a[i - (978 - 977)][hf6RciHdwAIz])
                        b[i - (653 - 652)][hf6RciHdwAIz] = (46 - 44);
                    if (a[i + (889 - 888)][hf6RciHdwAIz])
                        b[i + (678 - 677)][hf6RciHdwAIz] = (993 - 991);
                    if (a[i][hf6RciHdwAIz - (500 - 499)])
                        b[i][hf6RciHdwAIz - (95 - 94)] = (646 - 644);
                    if (a[i][hf6RciHdwAIz + (481 - 480)])
                        b[i][hf6RciHdwAIz + (531 - 530)] = (286 - 284);
                }
        for (i = 1; i <= n; i++)
            for (hf6RciHdwAIz = 1; hf6RciHdwAIz <= n; hf6RciHdwAIz = hf6RciHdwAIz + 1)
                a[i][hf6RciHdwAIz] = b[i][hf6RciHdwAIz];
    }
    for (i = 1; i <= n; i++)
        for (hf6RciHdwAIz = 1; hf6RciHdwAIz <= n; hf6RciHdwAIz++)
            if (a[i][hf6RciHdwAIz] == 2)
                num++;
    cout << num;
    return 0;
}

