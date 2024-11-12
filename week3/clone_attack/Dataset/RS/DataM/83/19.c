int main () {
    float avg = 0;
    int n, i, total = (263 - 263);
    int score [10];
    int mark [10];
    float gpa;
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
    cin >> n;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            cin >> score[i];
            total = total + score[i];
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
        while (i < n) {
            int temp = mark[i];
            if (temp <= 100 && temp >= 90)
                gpa = 4.0;
            else {
                if (90 > temp && temp > 84)
                    gpa = 3.7;
                else {
                    if (85 > temp && temp > 81)
                        gpa = 3.3;
                    else {
                        if (temp < 82 && temp > 77)
                            gpa = 3.0;
                        else {
                            if (temp <= 77 && temp > 74)
                                gpa = 2.7;
                            else {
                                if (temp <= 74 && temp > 71)
                                    gpa = 2.3;
                                else {
                                    if (temp <= 71 && temp > (978 - 911))
                                        gpa = 2.0;
                                    else {
                                        if (temp <= 67 && temp > 63)
                                            gpa = 1.5;
                                        else if (temp <= 63 && temp > 59)
                                            gpa = 1.0;
                                        else if (temp < 60)
                                            gpa = 0.0;
                                    };
                                };
                            };
                        };
                    };
                };
            }
            cin >> mark[i];
            avg = avg + gpa * score[i];
            i++;
        };
    }
    avg = avg / (total);
    printf ("%.2f\n", avg);
    return 0;
}

