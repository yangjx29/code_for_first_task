int main () {
    double  uuGmn0yzXIJv [100];
    double  suv [100];
    int fifdA1 [100];
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
    int n;
    cin >> n;
    {
        int gWmHjPbv = 0;
        while (gWmHjPbv < n) {
            cin >> fifdA1[gWmHjPbv] >> suv[gWmHjPbv];
            uuGmn0yzXIJv[gWmHjPbv] = suv[gWmHjPbv] / fifdA1[gWmHjPbv];
            gWmHjPbv++;
        };
    }
    {
        int ODl48T = 1;
        while (ODl48T < n) {
            if (uuGmn0yzXIJv[ODl48T] - uuGmn0yzXIJv[0] > 0.05)
                cout << "better" << endl;
            else if (uuGmn0yzXIJv[0] - uuGmn0yzXIJv[ODl48T] > 0.05)
                cout << "worse" << endl;
            else
                cout << "same" << endl;
            ODl48T++;
        };
    }
    return 0;
}

