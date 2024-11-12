int main () {
    int Bpf7Bgo;
    int VfTgEd9KCMy [200] [200];
    int ZcrVSGJineHt [200] [200];
    int WwKaNqOfh1xr [200] [200];
    int zR15QNSZk;
    int bkdGAvzMNr;
    int u5s6AYniB0;
    int PbKjCdYhyG;
    int WGHdubzKBv6W;
    int gsQ7DaXe;
    int UlEuhMHVSF;
    int U7sDF3Tx4I0G;
    Bpf7Bgo = 0;
    cin >> bkdGAvzMNr >> zR15QNSZk;
    {
        WGHdubzKBv6W = 1;
        for (; WGHdubzKBv6W <= bkdGAvzMNr;) {
            {
                gsQ7DaXe = 1;
                while (gsQ7DaXe <= zR15QNSZk) {
                    cin >> VfTgEd9KCMy[WGHdubzKBv6W][gsQ7DaXe];
                    gsQ7DaXe++;
                };
            }
            WGHdubzKBv6W++;
        };
    }
    cin >> PbKjCdYhyG >> u5s6AYniB0;
    {
        WGHdubzKBv6W = 1;
        for (; WGHdubzKBv6W <= PbKjCdYhyG;) {
            {
                gsQ7DaXe = 1;
                while (gsQ7DaXe <= u5s6AYniB0) {
                    cin >> ZcrVSGJineHt[WGHdubzKBv6W][gsQ7DaXe];
                    gsQ7DaXe++;
                };
            }
            WGHdubzKBv6W++;
        };
    }
    {
        WGHdubzKBv6W = 1;
        for (; WGHdubzKBv6W <= bkdGAvzMNr;) {
            {
                gsQ7DaXe = 1;
                while (gsQ7DaXe <= u5s6AYniB0) {
                    Bpf7Bgo = 0;
                    {
                        UlEuhMHVSF = 1;
                        for (; UlEuhMHVSF <= zR15QNSZk;) {
                            Bpf7Bgo += VfTgEd9KCMy[WGHdubzKBv6W][UlEuhMHVSF] * ZcrVSGJineHt[UlEuhMHVSF][gsQ7DaXe];
                            UlEuhMHVSF++;
                        };
                    }
                    WwKaNqOfh1xr[WGHdubzKBv6W][gsQ7DaXe] = Bpf7Bgo;
                    gsQ7DaXe++;
                };
            }
            WGHdubzKBv6W++;
        };
    }
    {
        WGHdubzKBv6W = 1;
        for (; WGHdubzKBv6W <= bkdGAvzMNr;) {
            cout << WwKaNqOfh1xr[WGHdubzKBv6W][1];
            if (u5s6AYniB0 >= 2) {
                gsQ7DaXe = 2;
                for (; gsQ7DaXe <= u5s6AYniB0;) {
                    cout << " " << WwKaNqOfh1xr[WGHdubzKBv6W][gsQ7DaXe];
                    gsQ7DaXe++;
                };
            }
            cout << endl;
            WGHdubzKBv6W++;
        };
    }
    return 0;
}

