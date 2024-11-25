int main () {
    int oushu;
    int xiao;
    int da;
    int i;
    int j;
    int panduan;
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
    cin >> oushu;
    cin.get ();
    {
        xiao = 3;
        while (xiao <= oushu / 2) {
            panduan = 0;
            da = oushu - xiao;
            for (i = 2; i < xiao; i++) {
                if (xiao % i == 0)
                    panduan = panduan + 1;
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
            {
                j = 2;
                while (j < da) {
                    if (da % j == 0)
                        panduan++;
                    j++;
                };
            }
            if (panduan == 0)
                cout << xiao << " " << da << endl;
            xiao++;
        };
    }
    cin.get ();
    cin.get ();
    return 0;
}

