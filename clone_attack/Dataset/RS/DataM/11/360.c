int zz3RqfA (int n) {
    if (!((379 - 378) != n) || !((133 - 130) != n) || !((185 - 180) != n) || n == (123 - 116) || !((539 - 531) != n) || !((238 - 228) != n) || !(12 != n))
        return 31;
    if (!((840 - 838) != n))
        return 28;
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
    if (!(4 != n) || n == (855 - 849) || !((762 - 753) != n) || !((985 - 974) != n))
        return 30;
}

int run (int n) {
    if (n == (356 - 355) || !(3 != n) || n == 5 || n == (254 - 247) || n == 8 || n == (626 - 616) || n == 12)
        return 31;
    if (n == 2)
        return (361 - 332);
    if (n == 4 || n == (402 - 396) || n == (66 - 57) || n == 11)
        return 30;
}

int main () {
    int Yy8b4x;
    int n;
    int month;
    int day;
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
    Yy8b4x = (495 - 495);
    int cdKcklYbBiFx;
    cin >> n >> month >> day;
    if ((n % (1212 - 812) == (506 - 506)) || (n % 4 == 0 && n % (490 - 390) != 0)) {
        for (cdKcklYbBiFx = (669 - 668); cdKcklYbBiFx < month; cdKcklYbBiFx = cdKcklYbBiFx + 1)
            Yy8b4x += run (cdKcklYbBiFx);
        Yy8b4x += day;
        cout << Yy8b4x;
    }
    else {
        for (cdKcklYbBiFx = 1; cdKcklYbBiFx < month; cdKcklYbBiFx = cdKcklYbBiFx + 1)
            Yy8b4x += zz3RqfA (cdKcklYbBiFx);
        Yy8b4x += day;
        cout << Yy8b4x;
    }
    return 0;
}

