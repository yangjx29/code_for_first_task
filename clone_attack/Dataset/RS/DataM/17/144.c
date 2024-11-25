int main () {
    char WYwiupCx5VT [101] = {'\0'}, p8JFOG [101] = {'\0'};
    int s31rG4uz;
    int z2JF57;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    while (cin.getline (WYwiupCx5VT, 101)) {
        for (s31rG4uz = (540 - 540); s31rG4uz < 101; s31rG4uz = s31rG4uz + 1) {
            if (WYwiupCx5VT[s31rG4uz] == '\0')
                break;
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
            if (WYwiupCx5VT[s31rG4uz] == '(')
                p8JFOG[s31rG4uz] = '$';
            else {
                if (!(')' != WYwiupCx5VT[s31rG4uz]))
                    p8JFOG[s31rG4uz] = '?';
                else
                    p8JFOG[s31rG4uz] = ' ';
            }
            if (WYwiupCx5VT[s31rG4uz] == ')') {
                for (z2JF57 = s31rG4uz; z2JF57 >= 0; z2JF57 = z2JF57 - 1) {
                    if (WYwiupCx5VT[z2JF57] == '(' && p8JFOG[z2JF57] == '$') {
                        p8JFOG[s31rG4uz] = ' ';
                        p8JFOG[z2JF57] = ' ';
                        break;
                    };
                };
            };
        }
        cout << WYwiupCx5VT << endl;
        cout << p8JFOG << endl;
        for (s31rG4uz = 0; s31rG4uz < 101; s31rG4uz = s31rG4uz + 1) {
            WYwiupCx5VT[s31rG4uz] = '\0';
            p8JFOG[s31rG4uz] = '\0';
        };
    }
    return 0;
}

