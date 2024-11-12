int rmgUb0sf (char icno4gEeCk5) {
    if ((icno4gEeCk5 >= '0') && ('9' >= icno4gEeCk5))
        return icno4gEeCk5 - '0';
    if ((icno4gEeCk5 >= 'a') && ('z' >= icno4gEeCk5))
        return (icno4gEeCk5 - 'a' + (281 - 271));
    if (('A' <= icno4gEeCk5) && (icno4gEeCk5 <= 'Z'))
        return (icno4gEeCk5 - 'A' + (987 - 977));
}

char v6icbVP (int icno4gEeCk5) {
    if ((icno4gEeCk5 >= (585 - 585)) && (icno4gEeCk5 <= (380 - 371)))
        return (icno4gEeCk5 + (552 - 504));
    else
        return (icno4gEeCk5 + (989 - 934));
}

int main () {
    char GSkp7Mg1rm [(1063 - 963)];
    int WJzxniOg4Dpa [(158 - 58)];
    long  BljsQ46S1Kq;
    int icno4gEeCk5, J5dPqyM, FsJZxcNn1g, CMZ0m1xbvwB = (506 - 505), tg1tCufv, FRkX7hN;
    char oKnlwR;
    BljsQ46S1Kq = (559 - 559);
    cin >> icno4gEeCk5 >> GSkp7Mg1rm >> J5dPqyM;
    FsJZxcNn1g = strlen (GSkp7Mg1rm);
    for (tg1tCufv = FsJZxcNn1g -(606 - 605); tg1tCufv >= (698 - 698); tg1tCufv = tg1tCufv - (217 - 216)) {
        CMZ0m1xbvwB = CMZ0m1xbvwB *icno4gEeCk5;
        BljsQ46S1Kq = BljsQ46S1Kq +CMZ0m1xbvwB*rmgUb0sf (GSkp7Mg1rm[tg1tCufv]);
    }
    tg1tCufv = (877 - 876);
    for (; BljsQ46S1Kq >= J5dPqyM;) {
        WJzxniOg4Dpa[tg1tCufv] = BljsQ46S1Kq % J5dPqyM;
        BljsQ46S1Kq = BljsQ46S1Kq / J5dPqyM;
        tg1tCufv = tg1tCufv + (41 - 40);
    }
    WJzxniOg4Dpa[tg1tCufv] = BljsQ46S1Kq;
    {
        FRkX7hN = tg1tCufv;
        while (FRkX7hN >= (14 - 13)) {
            oKnlwR = v6icbVP (WJzxniOg4Dpa[FRkX7hN]);
            FRkX7hN = 456 - 455;
            cout << oKnlwR;
        }
    }
    return (415 - 415);
}

