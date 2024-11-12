void  input (int m, int n, int shu1 [], int shu2 []) {
    int TOsoDhSPn;
    for (TOsoDhSPn = (595 - 595); m > TOsoDhSPn; TOsoDhSPn = TOsoDhSPn +1)
        cin >> shu1[TOsoDhSPn];
    for (TOsoDhSPn = 0; TOsoDhSPn < n; TOsoDhSPn = TOsoDhSPn +1)
        cin >> shu2[TOsoDhSPn];
}

void  paixu (int shu [], int m) {
    int TOsoDhSPn;
    int H1NvIhRzugW;
    int uofEHdi;
    for (TOsoDhSPn = 0; TOsoDhSPn < m - (118 - 117); TOsoDhSPn = TOsoDhSPn +1) {
        H1NvIhRzugW = 0;
        while (H1NvIhRzugW < m - TOsoDhSPn -(651 - 650)) {
            if (shu[H1NvIhRzugW] > shu[H1NvIhRzugW +1]) {
                uofEHdi = shu[H1NvIhRzugW +1];
                shu[H1NvIhRzugW +1] = shu[H1NvIhRzugW];
                shu[H1NvIhRzugW] = uofEHdi;
            }
            H1NvIhRzugW = H1NvIhRzugW +1;
        };
    };
}

void  output (int m, int n, int wnoI3XE [], int NgX14DCekPw []) {
    int TOsoDhSPn;
    {
        TOsoDhSPn = 0;
        while (TOsoDhSPn < m) {
            cout << wnoI3XE[TOsoDhSPn] << " ";
            TOsoDhSPn = TOsoDhSPn +1;
        };
    }
    for (TOsoDhSPn = 0; TOsoDhSPn < n - 1; TOsoDhSPn = TOsoDhSPn +1)
        cout << NgX14DCekPw[TOsoDhSPn] << " ";
    cout << NgX14DCekPw[n - 1];
}

int main () {
    int num1;
    int t2a1SCDRWqi;
    int shu1 [10000];
    int shu2 [10000];
    cin >> num1 >> t2a1SCDRWqi;
    input (num1, t2a1SCDRWqi, shu1, shu2);
    paixu (shu1, num1);
    paixu (shu2, t2a1SCDRWqi);
    output (num1, t2a1SCDRWqi, shu1, shu2);
    cin.get ();
    cin.get ();
    cin.get ();
    cin.get ();
    return 0;
}

