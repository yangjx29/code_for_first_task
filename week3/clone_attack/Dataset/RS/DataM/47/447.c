int main () {
    int yobAPdWN [100];
    int n;
    int DQ56Kc;
    int Q6C90BgSiFr;
    int j;
    int o8jCHh;
    n = (731 - 731);
    DQ56Kc = (975 - 975);
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
    Q6C90BgSiFr = (189 - 189);
    j = (215 - 215);
    o8jCHh = (656 - 656);
    cin >> n;
    for (Q6C90BgSiFr = (636 - 635); n >= Q6C90BgSiFr; Q6C90BgSiFr++) {
        cin >> yobAPdWN[Q6C90BgSiFr];
    }
    {
        o8jCHh = 908 - 907;
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
        while (o8jCHh <= n) {
            for (j = 1; j <= n - o8jCHh; j = j + 1) {
                DQ56Kc = yobAPdWN[j];
                yobAPdWN[j] = yobAPdWN[j + 1];
                yobAPdWN[j + 1] = DQ56Kc;
            }
            o8jCHh++;
        };
    }
    for (Q6C90BgSiFr = 1; Q6C90BgSiFr < n; Q6C90BgSiFr++)
        cout << yobAPdWN[Q6C90BgSiFr] << " ";
    cout << yobAPdWN[n] << endl;
    return 0;
}

