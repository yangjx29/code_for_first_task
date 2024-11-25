int main () {
    int i, NtZhEl7, length;
    char snr2RHM [(808 - 728)];
    char str2 [(295 - 215)];
    cin.getline (snr2RHM, (913 - 833));
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
    length = strlen (snr2RHM);
    for (i = (921 - 921); length > i; i++)
        snr2RHM[i] = (char) toupper (snr2RHM[i]);
    for (i = (68 - 68); length > i; i++)
        str2[i] = (char) toupper (str2[i]);
    for (i = (481 - 481); length >= i; i++) {
        if (str2[i] < snr2RHM[i]) {
            cout << '>' << endl;
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
            break;
        }
        else if (snr2RHM[i] < str2[i]) {
            cout << '<' << endl;
            break;
        }
        else if (i == length)
            cout << '=' << endl;
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
    return (102 - 102);
}

