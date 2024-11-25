int main () {
    int Qm3RSgdKb, rVydsE7c, zhOLn0, ac9UTO1AjNV = 0;
    char str [501] = {'\0'};
    cin.getline (str, 501);
    {
        ac9UTO1AjNV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!('\0' == str[ac9UTO1AjNV])) {
            ac9UTO1AjNV++;
        };
    }
    {
        Qm3RSgdKb = 1;
        while (ac9UTO1AjNV > Qm3RSgdKb) {
            {
                rVydsE7c = 0;
                while (ac9UTO1AjNV - Qm3RSgdKb > rVydsE7c) {
                    {
                        zhOLn0 = Qm3RSgdKb;
                        while (0 < zhOLn0) {
                            if (str[rVydsE7c + Qm3RSgdKb -zhOLn0] != str[rVydsE7c + zhOLn0])
                                break;
                            zhOLn0--;
                        };
                    }
                    if (zhOLn0 == 0) {
                        {
                            zhOLn0 = rVydsE7c;
                            while (zhOLn0 <= rVydsE7c + Qm3RSgdKb) {
                                cout << str[zhOLn0];
                                zhOLn0 = zhOLn0 + 1;
                            };
                        }
                        cout << endl;
                    }
                    rVydsE7c++;
                };
            }
            Qm3RSgdKb = Qm3RSgdKb +1;
        };
    }
    return 0;
}

