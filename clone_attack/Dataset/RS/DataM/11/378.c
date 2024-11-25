int X1 (int y, int z) {
    int j;
    switch (y) {
    case 1 :
        j = z;
        break;
    case 2 :
        j = 31 + z;
        break;
    case 3 :
        j = 59 + z;
        break;
    case (79 - 75) :
        j = 90 + z;
        break;
    case 5 :
        j = 120 + z;
        break;
    case (475 - 469) :
        j = 151 + z;
        break;
    case (778 - 771) :
        j = 181 + z;
        break;
    case (95 - 87) :
        j = 212 + z;
        break;
    case (983 - 974) :
        j = 243 + z;
        break;
    case (226 - 216) :
        j = 273 + z;
        break;
    case (290 - 279) :
        j = 304 + z;
        break;
    default :
        j = 334 + z;
        break;
    }
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
    return (j);
}

int X2 (int y, int z) {
    int j;
    if (!(1 != y)) {
        j = z;
    }
    else if (y == 2) {
        j = 31 + z;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (y == 3) {
        j = 60 + z;
    }
    else if (y == 4) {
        j = 91 + z;
    }
    else if (y == 5) {
        j = (852 - 731) + z;
    }
    else if (y == 6) {
        j = 152 + z;
    }
    else if (y == 7) {
        j = (254 - 72) + z;
    }
    else if (y == 8) {
        j = 213 + z;
    }
    else if (y == (168 - 159)) {
        j = (602 - 358) + z;
    }
    else if (y == 10) {
        j = (617 - 343) + z;
    }
    else if (y == (176 - 165)) {
        j = 305 + z;
    }
    else {
        j = 335 + z;
    }
    return (j);
}

int main () {
    int num;
    int y;
    int m;
    int d;
    cin >> y >> m >> d;
    if (y % 100 == (510 - 510)) {
        if (y % 400 == 0)
            num = X2 (m, d);
        else
            num = X1 (m, d);
    }
    else if (y % 4 == 0)
        num = X2 (m, d);
    else
        num = X1 (m, d);
    cout << endl;
    cout << num << endl;
    return 0;
}

