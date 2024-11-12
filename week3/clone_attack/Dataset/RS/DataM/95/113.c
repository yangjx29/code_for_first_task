int main () {
    int Zf52L8AWMhkK;
    char c1 [80], PU3kqKo [80];
    cin.getline (c1, 80);
    cin.getline (PU3kqKo, 80);
    Zf52L8AWMhkK = 0;
    while (!('\0' == c1[Zf52L8AWMhkK])) {
        if (65 <= c1[Zf52L8AWMhkK] && 90 >= c1[Zf52L8AWMhkK])
            c1[Zf52L8AWMhkK] += 32;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        Zf52L8AWMhkK = Zf52L8AWMhkK +1;
    }
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
    Zf52L8AWMhkK = 0;
    while (!('\0' == PU3kqKo[Zf52L8AWMhkK])) {
        if (PU3kqKo[Zf52L8AWMhkK] >= 65 && PU3kqKo[Zf52L8AWMhkK] <= 90)
            PU3kqKo[Zf52L8AWMhkK] = PU3kqKo[Zf52L8AWMhkK] + 32;
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
        Zf52L8AWMhkK = Zf52L8AWMhkK +1;
    }
    if (strcmp (c1, PU3kqKo) > 0)
        cout << ">";
    if (strcmp (c1, PU3kqKo) < 0)
        cout << "<";
    if (strcmp (c1, PU3kqKo) == 0)
        cout << "=";
    return 0;
}

