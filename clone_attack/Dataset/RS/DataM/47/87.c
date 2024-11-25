int mark = 0;

int main () {
    void  print (int);
    int ErpaYDlqo;
    print (ErpaYDlqo -1);
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
    cin >> ErpaYDlqo;
    return 0;
}

void  print (int dMJ2Da) {
    int temp;
    cin >> temp;
    if (dMJ2Da == 0) {
        cout << temp;
        mark = 1;
        return;
    }
    else
        print (dMJ2Da - 1);
    if (mark)
        cout << " " << temp;
}

