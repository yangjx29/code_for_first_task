int main () {
    int x;
    int y;
    int xArray [11];
    int yArray [11];
    int i;
    int j;
    cin >> x;
    cin >> y;
    for (i = 0; 11 > i; i = i + 1) {
        xArray[i] = x;
        yArray[i] = y;
        y = y / (2);
        x /= 2;
    }
    {
        i = 0;
        while (i < 11) {
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < 11) {
                    if (xArray[i] == yArray[j]) {
                        cout << xArray[i] << endl;
                        i = j = 11;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

