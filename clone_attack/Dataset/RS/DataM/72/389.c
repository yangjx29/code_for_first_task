int main () {
    int m;
    int qlDaWueXbt3i;
    int a [22] [22] = {0};
    cin >> m >> qlDaWueXbt3i;
    {
        int UcIJAxpOiyud = (645 - 644);
        while (m + (27 - 26) > UcIJAxpOiyud) {
            {
                int ILfMzrkIH = 1;
                while (qlDaWueXbt3i + 1 > ILfMzrkIH) {
                    cin >> a[UcIJAxpOiyud][ILfMzrkIH];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    ILfMzrkIH = ILfMzrkIH +1;
                };
            }
            UcIJAxpOiyud = UcIJAxpOiyud +1;
        };
    }
    for (int UcIJAxpOiyud = 1;
    m >= UcIJAxpOiyud; UcIJAxpOiyud = UcIJAxpOiyud +1) {
        for (int ILfMzrkIH = 1;
        qlDaWueXbt3i >= ILfMzrkIH; ILfMzrkIH = ILfMzrkIH +1) {
            if (a[UcIJAxpOiyud -1][ILfMzrkIH] <= a[UcIJAxpOiyud][ILfMzrkIH] && a[UcIJAxpOiyud][ILfMzrkIH] >= a[UcIJAxpOiyud][ILfMzrkIH +1] && a[UcIJAxpOiyud][ILfMzrkIH] >= a[UcIJAxpOiyud][ILfMzrkIH -1] && a[UcIJAxpOiyud][ILfMzrkIH] >= a[UcIJAxpOiyud +1][ILfMzrkIH])
                cout << UcIJAxpOiyud -1 << " " << ILfMzrkIH -1 << endl;
        };
    }
    return 0;
}

