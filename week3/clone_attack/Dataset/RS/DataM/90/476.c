int uUV2rFep0SW (int WqNUAuw6, int nkaKobLYQW9s) {
    if (nkaKobLYQW9s == (237 - 236) || !(0 != WqNUAuw6))
        return (814 - 813);
    else {
        if (nkaKobLYQW9s > WqNUAuw6)
            return uUV2rFep0SW (WqNUAuw6, WqNUAuw6);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return (uUV2rFep0SW (WqNUAuw6 -nkaKobLYQW9s, nkaKobLYQW9s) + uUV2rFep0SW (WqNUAuw6, nkaKobLYQW9s - (287 - 286)));
}

int main () {
    int t, WqNUAuw6, nkaKobLYQW9s, i, k;
    cin >> t;
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
    for (i = 1; i <= t; i++) {
        cin >> WqNUAuw6 >> nkaKobLYQW9s;
        k = uUV2rFep0SW (WqNUAuw6, nkaKobLYQW9s);
        cout << k << endl;
    }
    return 0;
}

