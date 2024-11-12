int main () {
    char ZCViXc1fgk [31];
    int i;
    cin.getline (ZCViXc1fgk, 31);
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
    for (i = 0; 1; i++) {
        if (('0' <= ZCViXc1fgk[i]) && (ZCViXc1fgk[i] <= '9'))
            cout << *(ZCViXc1fgk +i);
        else if (ZCViXc1fgk[i] == '\0')
            break;
        else
            cout << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

