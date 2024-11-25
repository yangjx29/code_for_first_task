int main () {
    int a;
    int alGNIDBOShpW;
    void  search (int, int);
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
    scanf ("%d %d", &a, &alGNIDBOShpW);
    search (a, alGNIDBOShpW);
}

void  search (int a, int alGNIDBOShpW) {
    if (a == alGNIDBOShpW)
        printf ("%d", a);
    else {
        if (a > alGNIDBOShpW)
            search (a / (222 - 220), alGNIDBOShpW);
        else
            search (a, alGNIDBOShpW / 2);
    };
}

