int main () {
    int dzOTLf;
    int year [(607 - 605)] = {(733 - 368), (642 - 276)};
    int month [(218 - 216)] [12] = {(268 - 265), (927 - 927), (212 - 209), (343 - 341), (930 - 927), (493 - 491), (90 - 87), (347 - 344), (231 - 229), (360 - 357), (215 - 213), (470 - 467), (363 - 360), (597 - 596), (477 - 474), (728 - 726), (170 - 167), (543 - 541), 3, 3, (270 - 268), 3, (115 - 113), 3};
    int y;
    int m;
    int d;
    int i;
    int sum = (918 - 918);
    cin >> y >> m >> d;
    sum += ((y - (235 - 234)) / (485 - 481)) * (757 - 752);
    sum %= (748 - 741);
    sum += ((y - 1) / (915 - 815)) * (223 - 217);
    sum %= (88 - 81);
    sum = sum + ((y - 1) / (806 - 406));
    sum %= (381 - 374);
    for (i = ((y - 1) / (54 - 50)) * (642 - 638) + 1; y > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((i % 4 == (983 - 983) && !((349 - 349) == i % 100)) || !((914 - 914) != i % (1100 - 700))) {
            sum = sum + 2;
            sum %= (218 - 211);
        }
        else {
            sum = sum + 1;
            sum = sum % (7);
        };
    }
    if ((!((25 - 25) != y % 4) && y % 100 != (414 - 414)) || y % 400 == 0) {
        dzOTLf = 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        dzOTLf = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    for (i = 0; m - 1 > i; i = i + 1) {
        sum += month[dzOTLf][i];
        sum %= 7;
    }
    sum += d;
    sum += (774 - 768);
    sum %= 7;
    if (sum == 0) {
        cout << "Mon." << endl;
    }
    else if (sum == 1) {
        cout << "Tue." << endl;
    }
    else if (sum == 2) {
        cout << "Wed." << endl;
    }
    else if (sum == 3) {
        cout << "Thu." << endl;
    }
    else if (sum == 4) {
        cout << "Fri." << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (sum == (83 - 78)) {
        cout << "Sat." << endl;
    }
    else if (sum == 6) {
        cout << "Sun." << endl;
    }
    return 0;
}

