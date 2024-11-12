int main () {
    char BDAY0L7hye [100];
    char Eat2pe3x [100];
    char lY8gPl;
    char CNAWvijZVXz;
    char pqD8Frgv9Ok;
    pqD8Frgv9Ok = 0;
    cin.getline (BDAY0L7hye, 100);
    cin.getline (Eat2pe3x, 100);
    if (strlen (Eat2pe3x) < strlen (BDAY0L7hye)) {
        CNAWvijZVXz = strlen (BDAY0L7hye);
    }
    else {
        CNAWvijZVXz = strlen (Eat2pe3x);
    }
    {
        lY8gPl = 0;
        while (CNAWvijZVXz -1 >= lY8gPl) {
            if (97 <= BDAY0L7hye[lY8gPl]) {
                BDAY0L7hye[lY8gPl] = BDAY0L7hye[lY8gPl] - 32;
            }
            if (97 <= Eat2pe3x[lY8gPl]) {
                Eat2pe3x[lY8gPl] = Eat2pe3x[lY8gPl] - 32;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (BDAY0L7hye[lY8gPl] == Eat2pe3x[lY8gPl]) {
                pqD8Frgv9Ok = pqD8Frgv9Ok + 1;
            }
            else if (BDAY0L7hye[lY8gPl] > Eat2pe3x[lY8gPl]) {
                cout << ">" << '\n';
            }
            else if (BDAY0L7hye[lY8gPl] < Eat2pe3x[lY8gPl]) {
                cout << "<" << '\n';
            }
            lY8gPl++;
        };
    }
    if (pqD8Frgv9Ok == CNAWvijZVXz) {
        cout << "=" << '\n';
    }
    return 0;
}

