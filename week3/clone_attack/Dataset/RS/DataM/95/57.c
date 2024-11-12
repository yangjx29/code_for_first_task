int main () {
    char TkO2inr [(486 - 406)];
    char str2 [80];
    char i;
    cin.getline (TkO2inr, 80);
    cin.getline (str2, 80);
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
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 80) {
            if (TkO2inr[i] >= 97 && 122 >= TkO2inr[i])
                TkO2inr[i] = TkO2inr[i] - (147 - 115);
            if (str2[i] >= 97 && str2[i] <= 122)
                str2[i] = str2[i] - 32;
            i++;
        };
    }
    if (strcmp (TkO2inr, str2) == 0)
        cout << "=" << endl;
    if (strcmp (TkO2inr, str2) == 1)
        cout << ">" << endl;
    if (strcmp (TkO2inr, str2) == -1)
        cout << "<" << endl;
    return 0;
}

