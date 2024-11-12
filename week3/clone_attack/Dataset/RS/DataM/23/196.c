int main () {
    int kJiDd4 = (528 - 528), j = (181 - 181), CYzH3y7pn = (135 - 135), num = 0;
    char tYbPraiEz2U [15000];
    char OlW1XT38RGM [(350 - 50)] [50];
    int len;
    len = strlen (tYbPraiEz2U);
    cin.getline (tYbPraiEz2U, 50000);
    {
        kJiDd4 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (kJiDd4 < len) {
            if (tYbPraiEz2U[kJiDd4] == ' ')
                num++;
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
            kJiDd4++;
        };
    }
    for (kJiDd4 = 0; kJiDd4 < len; kJiDd4++) {
        if (tYbPraiEz2U[kJiDd4] != ' ') {
            OlW1XT38RGM[j][CYzH3y7pn] = tYbPraiEz2U[kJiDd4];
            CYzH3y7pn++;
        }
        else if (tYbPraiEz2U[kJiDd4] == ' ') {
            j++;
            CYzH3y7pn = 0;
        };
    }
    cout << OlW1XT38RGM[num];
    for (kJiDd4 = num - 1; kJiDd4 >= 0; kJiDd4 = kJiDd4 - 1)
        cout << " " << OlW1XT38RGM[kJiDd4];
}

