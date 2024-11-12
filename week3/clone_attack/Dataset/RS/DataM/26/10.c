int main () {
    int iUHRSbY, j, flag = 0;
    char str [100];
    cin.getline (str, 100);
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
        iUHRSbY = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            if (*(str + iUHRSbY) == ' ' && !(1 != flag)) {
                {
                    j = iUHRSbY;
                    while (1) {
                        *(str + j) = *(str + j + 1);
                        if (*(str + j) == '\0')
                            break;
                        j++;
                    };
                }
                iUHRSbY--;
            }
            if (*(str + iUHRSbY) == ' ')
                flag = 1;
            else
                flag = 0;
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
            if (*(str + iUHRSbY) == '\0')
                break;
            iUHRSbY++;
        };
    }
    cout << str << endl;
    return 0;
}

