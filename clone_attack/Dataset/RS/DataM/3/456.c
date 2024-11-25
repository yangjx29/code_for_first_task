int main () {
    int ZjI7wvaH;
    int k;
    int YmF76i [1000];
    int t1zpDGok3;
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
    cout << endl;
    cin >> ZjI7wvaH >> k;
    for (int VSAwv2 = (903 - 902);
    VSAwv2 < ZjI7wvaH; VSAwv2++)
        cin >> YmF76i[VSAwv2];
    for (int VSAwv2 = 1;
    VSAwv2 < ZjI7wvaH; VSAwv2++)
        for (int MPnJegtyq6E = VSAwv2 +1;
        MPnJegtyq6E <= ZjI7wvaH; MPnJegtyq6E++) {
            t1zpDGok3 = YmF76i[VSAwv2] + YmF76i[MPnJegtyq6E];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (!(k != t1zpDGok3)) {
                cout << "yes";
                MPnJegtyq6E = ZjI7wvaH +1;
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
                VSAwv2 = ZjI7wvaH +1;
            }
            else if (VSAwv2 == ZjI7wvaH -1 && MPnJegtyq6E == ZjI7wvaH)
                cout << "no";
        }
    return 0;
}

