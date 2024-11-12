int main () {
    int rzq7J1d, XbUov5PuqYKH, tqxh7e, Nl2ziy, A6JroMzbm4cj, jixbdAGIwRu;
    cin >> rzq7J1d;
    XbUov5PuqYKH = rzq7J1d / (10759 - 759);
    tqxh7e = (rzq7J1d - XbUov5PuqYKH *10000) / (1571 - 571);
    Nl2ziy = (rzq7J1d - XbUov5PuqYKH *10000 - tqxh7e * 1000) / (725 - 625);
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
    A6JroMzbm4cj = (rzq7J1d - XbUov5PuqYKH *10000 - tqxh7e * 1000 - Nl2ziy *100) / (644 - 634);
    jixbdAGIwRu = rzq7J1d % 10;
    if (10 > rzq7J1d)
        cout << jixbdAGIwRu << endl;
    else {
        if (rzq7J1d < 100)
            cout << jixbdAGIwRu << A6JroMzbm4cj << endl;
        else {
            if (rzq7J1d < 1000)
                cout << jixbdAGIwRu << A6JroMzbm4cj << Nl2ziy << endl;
            else {
                if (10000 > rzq7J1d)
                    cout << jixbdAGIwRu << A6JroMzbm4cj << Nl2ziy << tqxh7e << endl;
                else
                    cout << jixbdAGIwRu << A6JroMzbm4cj << Nl2ziy << tqxh7e << XbUov5PuqYKH << endl;
            };
        };
    }
    return 0;
}

