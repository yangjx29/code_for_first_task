int main () {
    char str [31];
    char *Div1xcHa4S;
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
    cin.getline (str, 31);
    Div1xcHa4S = str;
    for (; !('\0' == *Div1xcHa4S);) {
        for (; (*Div1xcHa4S > '9' || *Div1xcHa4S < '0') && *Div1xcHa4S != '\0';)
            Div1xcHa4S = Div1xcHa4S +1;
        if (*Div1xcHa4S == '\0')
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (; *Div1xcHa4S <= '9' && *Div1xcHa4S >= '0';) {
            cout << *Div1xcHa4S;
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
            Div1xcHa4S = Div1xcHa4S +1;
        }
        cout << endl;
    }
    return 0;
}

