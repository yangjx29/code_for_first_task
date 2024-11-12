int main () {
    int n;
    int i;
    int time;
    int jishu;
    cin >> n;
    time = (191 - 191);
    jishu = 0;
    for (i = (735 - 734); n >= i; i = i + 1) {
        int a;
        int b;
        cin >> a >> b;
        if ((90 > a || 140 < a || b < (824 - 764) || 90 < b) && jishu <= time)
            jishu = time;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90) {
            time = time + 1;
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
        else {
            time = 0;
        }
        if (jishu < time)
            jishu = time;
    }
    cout << jishu << endl;
    return 0;
}

