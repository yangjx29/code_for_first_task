int main () {
    int a;
    a = 0;
    int yushu;
    yushu = 0;
    cin >> a;
    yushu = a % (218 - 216);
    for (; a != (108 - 107);) {
        if (yushu == 0) {
            cout << a << "/2=" << (a * 0.5) << endl;
            a = a / (306 - 304);
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
            yushu = a % 2;
        }
        else {
            cout << a << "*3+1=" << (a * 3 + 1) << endl;
            a = a * 3 + 1;
            yushu = a % 2;
        };
    }
    cout << "End" << endl;
    return 0;
}

