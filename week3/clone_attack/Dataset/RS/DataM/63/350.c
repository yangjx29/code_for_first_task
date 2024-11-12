int main () {
    int h7KxpQz3M [(365 - 265)] [(581 - 481)];
    int mhXJ3S1I [(567 - 467)] [(137 - 37)];
    int oJMFD5t7s [100] [100];
    int BeKnd4;
    int y1;
    int x2;
    int y2;
    int nNlZcavU;
    int ScaBOedy;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> BeKnd4 >> y1;
    {
        nNlZcavU = 318 - 318;
        while (BeKnd4 > nNlZcavU) {
            {
                ScaBOedy = 414 - 414;
                while (y1 > ScaBOedy) {
                    cin >> h7KxpQz3M[nNlZcavU][ScaBOedy];
                    ScaBOedy++;
                };
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
            nNlZcavU = nNlZcavU + 1;
        };
    }
    cin >> x2 >> y2;
    {
        nNlZcavU = 0;
        while (nNlZcavU < x2) {
            {
                ScaBOedy = 0;
                while (y2 > ScaBOedy) {
                    cin >> mhXJ3S1I[nNlZcavU][ScaBOedy];
                    ScaBOedy++;
                };
            }
            nNlZcavU = nNlZcavU + 1;
        };
    }
    {
        nNlZcavU = 0;
        while (nNlZcavU < 100) {
            for (ScaBOedy = 0; ScaBOedy < 100; ScaBOedy++)
                oJMFD5t7s[nNlZcavU][ScaBOedy] = 0;
            nNlZcavU++;
        };
    }
    for (nNlZcavU = 0; BeKnd4 > nNlZcavU; nNlZcavU++) {
        ScaBOedy = 0;
        while (y2 > ScaBOedy) {
            {
                k = 0;
                while (y1 > k) {
                    oJMFD5t7s[nNlZcavU][ScaBOedy] += h7KxpQz3M[nNlZcavU][k] * mhXJ3S1I[k][ScaBOedy];
                    k++;
                };
            }
            ScaBOedy++;
        };
    }
    {
        nNlZcavU = 0;
        while (nNlZcavU < BeKnd4) {
            cout << oJMFD5t7s[nNlZcavU][0];
            if (y2 == 1)
                cout << endl;
            else {
                ScaBOedy = 1;
                while (y2 > ScaBOedy) {
                    if (ScaBOedy == y2 - 1)
                        cout << ' ' << oJMFD5t7s[nNlZcavU][ScaBOedy] << endl;
                    else
                        cout << ' ' << oJMFD5t7s[nNlZcavU][ScaBOedy];
                    ScaBOedy++;
                };
            }
            nNlZcavU++;
        };
    }
    return 0;
}

