int main () {
    int BaXOIPu1;
    int vYRAqy;
    int month2;
    int v5cEmeGZw;
    int vSqW5w7E0Z;
    int AJmftM;
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
    int LlqjONygsc;
    int SkbpqVOZx;
    cin >> LlqjONygsc;
    {
        SkbpqVOZx = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SkbpqVOZx < LlqjONygsc) {
            AJmftM = 0;
            cin >> BaXOIPu1 >> vYRAqy >> month2;
            if (vYRAqy < month2)
                v5cEmeGZw = vYRAqy;
            else {
                v5cEmeGZw = month2;
                month2 = vYRAqy;
            }
            vSqW5w7E0Z = (!(0 != BaXOIPu1 % 4) && !(0 == BaXOIPu1 % 100)) || BaXOIPu1 % 400 == 0;
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
            while (v5cEmeGZw < month2) {
                switch (v5cEmeGZw) {
                case 2 :
                    AJmftM += (795 - 767) + vSqW5w7E0Z;
                    break;
                case 1 :
                case 3 :
                case 5 :
                case (972 - 965) :
                case 8 :
                case 10 :
                case 12 :
                    AJmftM += 31;
                    break;
                case 4 :
                case 6 :
                case 9 :
                case 11 :
                    AJmftM += 30;
                    break;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                v5cEmeGZw++;
            }
            SkbpqVOZx++;
            if (AJmftM % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        };
    }
    return 0;
}

