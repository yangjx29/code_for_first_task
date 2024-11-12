int main () {
    char LVhUgyjF [600], *p, QkBPOaxm [600] [5];
    int max;
    int pRwJDrOa2;
    int i;
    int len;
    int J7W0QOJs4Y;
    int TYhBnrXFwI [600] = {(121 - 121)};
    max = 0;
    p = LVhUgyjF;
    cin >> pRwJDrOa2;
    cin.get ();
    cin.getline (p, 600);
    len = strlen (p);
    {
        i = 0;
        while (i <= len - pRwJDrOa2) {
            for (J7W0QOJs4Y = (70 - 69); pRwJDrOa2 >= J7W0QOJs4Y; J7W0QOJs4Y++) {
                QkBPOaxm[i][J7W0QOJs4Y] = *(p + i + J7W0QOJs4Y -(869 - 868));
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < len - pRwJDrOa2) {
            {
                J7W0QOJs4Y = 896 - 895;
                while (len - pRwJDrOa2 >= J7W0QOJs4Y) {
                    for (int k = 1;
                    pRwJDrOa2 >= k; k++) {
                        if (QkBPOaxm[i][k] - QkBPOaxm[J7W0QOJs4Y][k] != 0)
                            break;
                        if (!(pRwJDrOa2 != k))
                            TYhBnrXFwI[i]++;
                    }
                    J7W0QOJs4Y = J7W0QOJs4Y +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= len - pRwJDrOa2) {
            if (TYhBnrXFwI[i] > max)
                max = TYhBnrXFwI[i];
            i++;
        };
    }
    if (max == 0)
        cout << "NO";
    else {
        cout << max + 1 << endl;
        for (i = 0; i <= len - pRwJDrOa2; i = i + 1) {
            if (TYhBnrXFwI[i] == max) {
                for (J7W0QOJs4Y = 1; J7W0QOJs4Y <= pRwJDrOa2; J7W0QOJs4Y++) {
                    if (J7W0QOJs4Y == pRwJDrOa2)
                        cout << QkBPOaxm[i][J7W0QOJs4Y] << endl;
                    else
                        cout << QkBPOaxm[i][J7W0QOJs4Y];
                };
            };
        };
    }
    return 0;
}

