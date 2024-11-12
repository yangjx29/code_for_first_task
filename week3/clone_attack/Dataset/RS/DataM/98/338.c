char a [(202 - 161)];

int main () {
    int Z2lCRUGxH;
    int ZtufxXlDgJSn;
    int PYSOTXx;
    int length;
    Z2lCRUGxH = 0;
    cin >> ZtufxXlDgJSn;
    cin >> a;
    cout << a;
    Z2lCRUGxH = strlen (a);
    {
        PYSOTXx = 1;
        while (PYSOTXx < ZtufxXlDgJSn) {
            PYSOTXx = PYSOTXx +1;
            Z2lCRUGxH++;
            cin >> a;
            length = strlen (a);
            Z2lCRUGxH += length;
            if ((Z2lCRUGxH) <= (828 - 748))
                cout << " " << a;
            else {
                cout << endl;
                cout << a;
                Z2lCRUGxH = strlen (a);
            };
        };
    }
    return 0;
}

