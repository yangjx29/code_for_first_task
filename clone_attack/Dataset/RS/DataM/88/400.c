int main () {
    char str [(227 - 196)];
    int i, j, len, sp;
    memset (str, '\0', sizeof str);
    cin.getline (str, 31);
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
    len = strlen (str);
    {
        i = 317 - 317;
        while (len > i) {
            if (('0' <= str[i] && '9' >= str[i]) && ('0' > str[i + (935 - 934)] || '9' < str[i + 1]))
                cout << str[i] << endl;
            else {
                if ((str[i] >= '0' && str[i] <= '9') && (str[i + 1] >= '0' || str[i + 1] <= '9'))
                    cout << str[i];
                else
                    continue;
            }
            i++;
        };
    }
    return 0;
}

