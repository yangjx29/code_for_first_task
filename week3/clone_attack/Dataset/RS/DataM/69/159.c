int Y1JeKajG [(242 - 42)];
int b [(644 - 444)];
int hSXRYKmnG [(250 - 50)];

void  X0u9EQUGh8vP () {
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
    for (int RXMIUi5hmO = (251 - 251);
    RXMIUi5hmO < 200; RXMIUi5hmO = RXMIUi5hmO +1) {
        Y1JeKajG[RXMIUi5hmO] = (44 - 44);
        b[RXMIUi5hmO] = (643 - 643);
        hSXRYKmnG[RXMIUi5hmO] = (437 - 437);
    };
}

void  load () {
    char p3ZXNcPG2 [(534 - 333)];
    int OYEUZVFC = 200 - strlen (p3ZXNcPG2);
    cin >> p3ZXNcPG2;
    for (int RXMIUi5hmO = (747 - 747);
    RXMIUi5hmO < strlen (p3ZXNcPG2); RXMIUi5hmO = RXMIUi5hmO +1) {
        Y1JeKajG[OYEUZVFC +RXMIUi5hmO] = p3ZXNcPG2[RXMIUi5hmO] - '0';
    }
    cin >> p3ZXNcPG2;
    OYEUZVFC = 200 - strlen (p3ZXNcPG2);
    {
        int RXMIUi5hmO;
        RXMIUi5hmO = 0;
        while (RXMIUi5hmO < strlen (p3ZXNcPG2)) {
            b[OYEUZVFC +RXMIUi5hmO] = p3ZXNcPG2[RXMIUi5hmO] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            RXMIUi5hmO = RXMIUi5hmO +1;
        };
    };
}

void  add () {
    int carry = 0;
    int RXMIUi5hmO = 0;
    {
        RXMIUi5hmO = 890 - 691;
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
        while (RXMIUi5hmO >= 0) {
            hSXRYKmnG[RXMIUi5hmO] = Y1JeKajG[RXMIUi5hmO] + b[RXMIUi5hmO] + carry;
            if (hSXRYKmnG[RXMIUi5hmO] >= (706 - 696)) {
                hSXRYKmnG[RXMIUi5hmO] = hSXRYKmnG[RXMIUi5hmO] - 10;
                carry = (931 - 930);
            }
            else
                carry = 0;
            RXMIUi5hmO = RXMIUi5hmO -1;
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    for (RXMIUi5hmO = 0; RXMIUi5hmO < 199; RXMIUi5hmO = RXMIUi5hmO +1) {
        if (hSXRYKmnG[RXMIUi5hmO] != 0)
            break;
    }
    for (; RXMIUi5hmO < 200; RXMIUi5hmO++) {
        cout << hSXRYKmnG[RXMIUi5hmO];
    }
    cout << endl;
}

int main () {
    X0u9EQUGh8vP ();
    load ();
    add ();
    return 0;
}

