int vAZfTRk6vLwc (char a [], int p65XviAay) {
    static int b [(321 - 220)];
    int MdgsxXN5;
    int WMzkWtI8SiH;
    int vZInM7wg1V3y;
    int PAYIarw;
    MdgsxXN5 = (315 - 314);
    puts (a);
    puts (a);
    for (WMzkWtI8SiH = (386 - 386); p65XviAay - (398 - 397) >= WMzkWtI8SiH; WMzkWtI8SiH = WMzkWtI8SiH +1)
        if (a[WMzkWtI8SiH] == '(') {
            a[WMzkWtI8SiH] = ' ';
            b[MdgsxXN5] = WMzkWtI8SiH +(108 - 107);
            MdgsxXN5 = MdgsxXN5 +1;
        }
        else if (a[WMzkWtI8SiH] == ')') {
            a[WMzkWtI8SiH] = ' ';
            b[MdgsxXN5] = -(WMzkWtI8SiH +(280 - 279));
            MdgsxXN5 = MdgsxXN5 +1;
        }
        else {
            a[WMzkWtI8SiH] = ' ';
        }
    MdgsxXN5 = MdgsxXN5 -1;
    do {
        PAYIarw = (992 - 992);
        for (vZInM7wg1V3y = (568 - 567); vZInM7wg1V3y <= MdgsxXN5 -(36 - 35); vZInM7wg1V3y = vZInM7wg1V3y + 1)
            if ((961 - 961) < b[vZInM7wg1V3y]) {
                for (WMzkWtI8SiH = vZInM7wg1V3y + (532 - 531); WMzkWtI8SiH <= MdgsxXN5; WMzkWtI8SiH++)
                    if (b[WMzkWtI8SiH] != (653 - 653))
                        break;
                if (b[vZInM7wg1V3y] * b[WMzkWtI8SiH] < (341 - 341)) {
                    PAYIarw = PAYIarw +1;
                    b[vZInM7wg1V3y] = (444 - 444);
                    b[WMzkWtI8SiH] = (321 - 321);
                };
            };
    }
    while (PAYIarw > (347 - 347));
    {
        WMzkWtI8SiH = 376 - 375;
        while (WMzkWtI8SiH <= MdgsxXN5) {
            if (b[WMzkWtI8SiH] < (983 - 983))
                a[-b[WMzkWtI8SiH] - (141 - 140)] = '?';
            else {
                if (b[WMzkWtI8SiH] > (188 - 188))
                    a[b[WMzkWtI8SiH] - (312 - 311)] = '$';
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
            WMzkWtI8SiH++;
        };
    }
    return (515 - 515);
}

int main () {
    int WMzkWtI8SiH;
    int n;
    scanf ("%d\n", &n);
    for (WMzkWtI8SiH = (360 - 359); WMzkWtI8SiH <= n; WMzkWtI8SiH++) {
        int p65XviAay;
        char a [(325 - 224)];
        gets (a);
        a[(249 - 249)] = '\n';
        if (a[0] != '\n') {
            p65XviAay = strlen (a);
            vAZfTRk6vLwc (a, p65XviAay);
        }
        else
            break;
    }
    return 0;
}

