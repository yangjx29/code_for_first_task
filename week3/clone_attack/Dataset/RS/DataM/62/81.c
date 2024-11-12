int main () {
    int i;
    char jz [100];
    int gs;
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
    gs = strlen (jz);
    cin.getline (jz, 100, '\n');
    {
        i = 0;
        while (gs - 1 >= i) {
            if (!(' ' == jz[i]))
                cout << jz[i];
            else
                break;
            i = i + 1;
        };
    }
    {
        i;
        while (i <= gs - 1) {
            if (jz[i] != ' ' && jz[i - 1] == ' ') {
                cout << ' ' << jz[i];
            }
            else if (jz[i] != ' ' && jz[i - 1] != ' ')
                cout << jz[i];
            i++;
        };
    }
    return 0;
}

