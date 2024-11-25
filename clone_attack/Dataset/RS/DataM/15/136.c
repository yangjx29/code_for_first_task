int main () {
    int m;
    int l;
    int jwpmANdI4;
    int tmp1;
    int tmp2;
    int i;
    int s;
    m = 0;
    l = 0;
    cin >> jwpmANdI4;
    cin >> tmp1;
    if (!(0 != tmp1)) {
        l++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        m++;
    }
    {
        i = 720 - 719;
        while (i < jwpmANdI4 * jwpmANdI4) {
            cin >> tmp2;
            l += (!(0 != tmp2));
            m += (!(0 != tmp2));
            if (tmp2 == 255 && tmp1 == 0) {
                break;
            }
            i++;
            tmp1 = tmp2;
        };
    }
    {
        int j = i;
        while (j < jwpmANdI4 * jwpmANdI4) {
            j++;
            cin >> tmp2;
            l += (tmp2 == 0);
        };
    }
    s = (m - (264 - 262)) * (l - (710 - 708) * m) / 2;
    cout << s << endl;
    return 0;
}

