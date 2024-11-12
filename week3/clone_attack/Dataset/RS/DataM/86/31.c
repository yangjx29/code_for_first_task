int main () {
    int tERgn6QDTz, j, wps6975MU2, i36gsvEFH, swKoEnlI = 0, a [1000];
    cin >> tERgn6QDTz;
    for (j = 1; tERgn6QDTz >= j; j++) {
        cin >> i36gsvEFH;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != i36gsvEFH))
            cout << "60" << endl;
        else {
            for (wps6975MU2 = 1; i36gsvEFH >= wps6975MU2; wps6975MU2++)
                cin >> a[wps6975MU2];
            for (wps6975MU2 = 1; i36gsvEFH >= wps6975MU2; wps6975MU2++) {
                if (a[wps6975MU2] + 3 * wps6975MU2 - 3 <= 60)
                    swKoEnlI = a[wps6975MU2];
                if ((a[wps6975MU2] + 3 * wps6975MU2 - 3 > 60) && (swKoEnlI + 3 * wps6975MU2 - 3 <= 60)) {
                    swKoEnlI = 63 - 3 * wps6975MU2;
                    break;
                };
            }
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
            if (swKoEnlI + 3 * i36gsvEFH <= 60)
                cout << (60 - 3 * i36gsvEFH) << endl;
            else
                cout << swKoEnlI << endl;
        };
    }
    return 0;
}

