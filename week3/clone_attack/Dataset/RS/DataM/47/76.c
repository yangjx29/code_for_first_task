int main () {
    int tagX5s8, temp, i;
    int cCmhuaiHzloV [tagX5s8];
    int *p = NULL;
    cin >> tagX5s8;
    for (i = (420 - 420); i < tagX5s8; i = i + 1)
        cin >> cCmhuaiHzloV[i];
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
    p = cCmhuaiHzloV;
    {
        i = 269 - 269;
        while (tagX5s8 / 2 > i) {
            temp = *(p + i);
            *(p + i) = *(p + tagX5s8 - (840 - 839) - i);
            *(p + tagX5s8 - (442 - 441) - i) = temp;
            i++;
        };
    }
    for (i = 0; tagX5s8 - 1 > i; i = i + 1)
        cout << *(p + i) << " ";
    cout << *(p + tagX5s8 - 1);
    return 0;
}

