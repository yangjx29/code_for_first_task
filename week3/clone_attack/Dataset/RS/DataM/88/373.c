int main () {
    char P9Nr0kLbjt [1000];
    char f [200];
    char *WmcYxCzZV;
    int i;
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
    int t;
    cin.getline (P9Nr0kLbjt, 200);
    WmcYxCzZV = P9Nr0kLbjt;
    while (*WmcYxCzZV != '\000') {
        while (((*WmcYxCzZV < 48) || (*WmcYxCzZV > 57)) && (*WmcYxCzZV != '\000'))
            WmcYxCzZV = WmcYxCzZV +1;
        while ((*WmcYxCzZV >= 48) && (*WmcYxCzZV <= 57) && (*WmcYxCzZV != '\000')) {
            cout << *WmcYxCzZV;
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
            WmcYxCzZV++;
        }
        cout << endl;
    }
    i = 0;
}

