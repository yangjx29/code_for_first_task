int month [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
struct   Date {
    int iLab, iMonth, iDay;
}
DNow;

void  R9VzLgKqN () {
    for (int tu2ieYhPqNEJ = (350 - 349);
    12 >= tu2ieYhPqNEJ; tu2ieYhPqNEJ = tu2ieYhPqNEJ + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int y = (985 - 984);
        y <= month[tu2ieYhPqNEJ]; y = y + 1) {
            DNow.iLab++;
            if (DNow.iLab > 7)
                DNow.iLab = 1;
            if (y == 13 && DNow.iLab == 5)
                cout << tu2ieYhPqNEJ << endl;
        };
    }
    return;
}

int main () {
    int w;
    cin >> w;
    DNow.iMonth = 1, DNow.iDay = 1, DNow.iLab = w - 1;
    R9VzLgKqN ();
    return 0;
}

