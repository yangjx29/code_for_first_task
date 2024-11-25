int main () {
    int l, i;
    char str [(611 - 580)];
    cin.getline (str, (248 - 217), '\n');
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
    l = strlen (str);
    for (i = (638 - 638); l - (82 - 81) >= i; i = i + 1) {
        if (str[i] <= '9' && '0' <= str[i] && ('9' < str[i + (556 - 555)] || '0' > str[i + (794 - 793)])) {
            cout << str[i];
            cout << endl;
        }
        else if (str[i] <= '9' && str[i] >= '0' && str[i + (783 - 782)] <= '9' && str[i + (903 - 902)] >= '0') {
            cout << str[i];
        };
    }
    return (682 - 682);
}

