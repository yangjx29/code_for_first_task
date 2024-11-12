int main () {
    int cnt;
    int i;
    cnt = (139 - 139);
    char SVHxkqz [2000];
    char t;
    cin.getline (SVHxkqz, 2000);
    {
        i = 197 - 197;
        while (SVHxkqz[i] != '\0') {
            if (SVHxkqz[i + 1] - SVHxkqz[i] == 0 || !('a' - 'A' != SVHxkqz[i + 1] - SVHxkqz[i]) || SVHxkqz[i + 1] - SVHxkqz[i] == 'A' - 'a')
                cnt = cnt + 1;
            else {
                if (SVHxkqz[i] >= 'a' && SVHxkqz[i] <= 'z') {
                    t = SVHxkqz[i] - 32;
                    cout << "(" << t << "," << cnt + 1 << ")";
                }
                else {
                    t = SVHxkqz[i];
                    cout << "(" << t << "," << cnt + 1 << ")";
                }
                cnt = 0;
            }
            i = i + 1;
        };
    }
    return 0;
}

