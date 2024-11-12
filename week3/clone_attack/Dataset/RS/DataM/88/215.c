int main () {
    int flag;
    flag = 0;
    char s [31];
    int len;
    len = strlen (s);
    cin.getline (s, 31);
    {
        int i = 0;
        while (i < len) {
            if (*(s + i) >= '0' && *(s + i) <= '9') {
                flag = flag + 1;
                cout << *(s + i);
            }
            else {
                if (*(s + i + 1) >= 0 && *(s + i + 1) <= '9' && flag)
                    cout << endl;
            }
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
            i++;
        };
    }
    return 0;
}

