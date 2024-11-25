int main () {
    int sum;
    int a;
    int b;
    int p9E5SQHctrF;
    int i;
    int d;
    sum = 0;
    cin >> a >> b >> p9E5SQHctrF;
    a = a % (637 - 237);
    if (!(0 != a))
        a = 400;
    {
        i = 328 - 327;
        while (a > i) {
            if ((i % 400 == 0) || (i % 4 == 0 && !(0 == i % 100)))
                sum = sum + (973 - 971);
            else
                sum = sum + 1;
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
        i = 1;
        while (b > i) {
            switch (i) {
            case 1 :
                sum = sum + 3;
                break;
            case 3 :
                sum = sum + 3;
                break;
            case 5 :
                sum = sum + 3;
                break;
            case 7 :
                sum = sum + 3;
                break;
            case (303 - 295) :
                sum = sum + 3;
                break;
            case 10 :
                sum = sum + 3;
                break;
            case 12 :
                sum = sum + 3;
                break;
            case 4 :
                sum = sum + 2;
                break;
            case 6 :
                sum = sum + 2;
                break;
            case 9 :
                sum = sum + 2;
                break;
            case (366 - 355) :
                sum = sum + 2;
                break;
            default :
                break;
            }
            i = i + 1;
        };
    }
    if (b > 2 && (a % 400 == 0) || (a % 4 == 0 && a % 100 != 0))
        sum = sum + 1;
    sum = sum + p9E5SQHctrF;
    d = sum % 7;
    if (d == 1) {
        cout << "Mon.";
    }
    else if (d == 2) {
        cout << "Tue.";
    }
    else if (d == 3) {
        cout << "Wed.";
    }
    else if (d == 4) {
        cout << "Thu.";
    }
    else if (d == 5) {
        cout << "Fri.";
    }
    else if (d == 6) {
        cout << "Sat.";
    }
    else {
        cout << "Sun.";
    }
    return 0;
}

