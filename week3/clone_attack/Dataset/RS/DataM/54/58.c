int n, k, cnt;

int otkNaCKoDRB (int gwG4tMZj) {
    int cVw754x2 = n * otkNaCKoDRB (gwG4tMZj - 1);
    if (!(1 != gwG4tMZj))
        return n * cnt + k;
    if (cVw754x2 % (n - 1) == 0 && cVw754x2 != 0)
        return n * otkNaCKoDRB (gwG4tMZj - 1) / (n - 1) + k;
    else
        return 0;
}

int main () {
    int L9SdkcPbaN;
    cin >> n >> k;
    {
        cnt = 1;
        while (1) {
            L9SdkcPbaN = otkNaCKoDRB (n);
            if (L9SdkcPbaN != 0)
                break;
            cnt++;
        };
    }
    cout << L9SdkcPbaN << endl;
    return 0;
}

