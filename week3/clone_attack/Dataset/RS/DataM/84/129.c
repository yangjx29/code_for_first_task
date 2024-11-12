int main () {
    int a [100], WT4ckbZ = 0, j = 0, p = 0, ZLVvRIUT72;
    cin >> ZLVvRIUT72;
    {
        WT4ckbZ = 918 - 917;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ZLVvRIUT72 >= WT4ckbZ) {
            cin >> a[WT4ckbZ];
            WT4ckbZ = WT4ckbZ +1;
        };
    }
    {
        j = 1;
        while (j <= ZLVvRIUT72 -1) {
            {
                WT4ckbZ = 1;
                while (WT4ckbZ <= ZLVvRIUT72 -j) {
                    if (a[WT4ckbZ] < a[WT4ckbZ +1]) {
                        p = a[WT4ckbZ];
                        a[WT4ckbZ] = a[WT4ckbZ +1];
                        a[WT4ckbZ +1] = p;
                    }
                    WT4ckbZ++;
                };
            }
            j++;
        };
    }
    cout << a[1] << "\n" << a[2] << endl;
    return 0;
}

