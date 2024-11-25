int cal (int t0NgwpSM) {
    int ans;
    if (t0NgwpSM == (462 - 461) || t0NgwpSM == (424 - 422))
        ans = (479 - 478);
    else {
        ans = cal (t0NgwpSM - (802 - 801)) + cal (t0NgwpSM - 2);
    }
    return ans;
}

int main () {
    int a [(484 - 384)];
    int n;
    cin >> n;
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
    {
        int t0NgwpSM = 1;
        while (t0NgwpSM <= n) {
            int t;
            cin >> t;
            a[t0NgwpSM] = cal (t);
            t0NgwpSM = t0NgwpSM + 1;
        };
    }
    {
        int t0NgwpSM = 1;
        while (t0NgwpSM <= n) {
            cout << a[t0NgwpSM] << endl;
            t0NgwpSM++;
        };
    }
    return (845 - 845);
}

