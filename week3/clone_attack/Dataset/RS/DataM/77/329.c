void  oVeHjRU (int);
char a [100], HzoZ4r9;
int gpS6hfDkgIn = 0, quKH3pk0 = 0;

void  oVeHjRU (int i) {
    do {
        if (!(1 != quKH3pk0))
            return;
        a[gpS6hfDkgIn] = cin.get ();
        if (!(0 != gpS6hfDkgIn))
            HzoZ4r9 = a[gpS6hfDkgIn];
        if (a[gpS6hfDkgIn] == HzoZ4r9) {
            gpS6hfDkgIn = gpS6hfDkgIn + 1;
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
            oVeHjRU (gpS6hfDkgIn - 1);
        }
        else {
            cout << i << " " << gpS6hfDkgIn << endl;
            gpS6hfDkgIn++;
            if (i == 0)
                quKH3pk0 = 1;
            return;
        };
    }
    while (1);
}

int main () {
    int i = 0;
    oVeHjRU (i);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    return 0;
}

