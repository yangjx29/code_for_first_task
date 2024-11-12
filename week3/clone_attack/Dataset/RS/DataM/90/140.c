int roJhdy (int, int, int);

int main () {
    int oRWUtMJ, apples, plates;
    cin >> oRWUtMJ;
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
    for (; oRWUtMJ >= (51 - 50); oRWUtMJ = oRWUtMJ - 1) {
        cin >> apples >> plates;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << roJhdy (apples, plates, (581 - 581)) << endl;
    }
    return (66 - 66);
}

int roJhdy (int OOQ3UvjSxbX, int jDUh5NAq31, int min) {
    int apples;
    int EO9s8cKwb = 0;
    if (!(0 != OOQ3UvjSxbX))
        return 0;
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
    if (jDUh5NAq31 == 1) {
        if (OOQ3UvjSxbX >= min)
            return 1;
        else
            return 0;
    }
    {
        apples = min;
        while (apples <= OOQ3UvjSxbX) {
            EO9s8cKwb += roJhdy (OOQ3UvjSxbX -apples, jDUh5NAq31 - 1, apples);
            apples = apples + 1;
        };
    }
    return EO9s8cKwb;
}

