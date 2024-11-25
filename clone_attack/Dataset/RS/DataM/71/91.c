int judge (int year, int a, int jqpN86LP) {
    int NS9a6DAri = (522 - 522), i, sj21qZa9u, iiYxlA, n8G3NcM;
    int BqmXswKWp [(812 - 810)] [12] = {{(448 - 417), 28, (789 - 758), (1004 - 974), 31, (137 - 107), 31, 31, 30, 31, 30, 31}, {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    if (!(0 != year % 4) && !(0 == year % 100) || !(0 != year % 400))
        sj21qZa9u = (656 - 655);
    else
        sj21qZa9u = 0;
    if (!(jqpN86LP != a))
        return (655 - 654);
    else {
        iiYxlA = (a > jqpN86LP) ? a : jqpN86LP;
        n8G3NcM = (a < jqpN86LP) ? a : jqpN86LP;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (i = n8G3NcM; i < iiYxlA; i = i + 1)
            NS9a6DAri += BqmXswKWp[sj21qZa9u][i - 1];
        if (NS9a6DAri % 7 == 0)
            return 1;
        else
            return 0;
    };
}

int main () {
    int n, year, a, jqpN86LP, i;
    cin >> n;
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
    for (i = 1; i <= n; i = i + 1) {
        cin >> year >> a >> jqpN86LP;
        if (judge (year, a, jqpN86LP))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

