int n9aim2YAULvb (int FSR7sqw) {
    if (FSR7sqw % 4 == 0 && FSR7sqw % 100 != 0)
        return 1;
    else if (FSR7sqw % 400 == 0)
        return 1;
    else
        return 0;
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
}

main () {
    int FSR7sqw;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    scanf ("%d", &FSR7sqw);
    for (int Px2yNem = 1;
    Px2yNem <= FSR7sqw; Px2yNem = Px2yNem +1) {
        int JAwN4DgSo [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day;
        int duzYN5;
        int HnmYGl6uHLeb;
        int yv1ZWq6;
        int b3F8isBo;
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
        };
        day = 0;
        scanf ("%d %d %d", &duzYN5, &HnmYGl6uHLeb, &yv1ZWq6);
        if (n9aim2YAULvb (duzYN5) == 1)
            JAwN4DgSo[1] = 29;
        if (HnmYGl6uHLeb > yv1ZWq6) {
            b3F8isBo = HnmYGl6uHLeb;
            HnmYGl6uHLeb = yv1ZWq6;
            yv1ZWq6 = b3F8isBo;
        }
        for (int j = HnmYGl6uHLeb;
        j < yv1ZWq6; j = j + 1) {
            day += JAwN4DgSo[j - 1];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        if (day % 7 == 0)
            printf ("YES\n");
        else
            ;
    };
}

