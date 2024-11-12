int main () {
    int OZrteEjxID8F = (534 - 534);
    int blz6ak9iGZ7P = (278 - 278);
    char b [(10717 - 717)];
    char a [(10626 - 626)];
    int GOgF3h = (655 - 655);
    double  ev80qPHBEf = (84.0 - 84.0);
    int begin [(10432 - 432)];
    int jVRjQ2J [(10659 - 659)];
    int rutAUWp702i6 = (932 - 932);
    int max = (831 - 831);
    int Wz4qn6SZa = (706 - 706);
    int bvelO4G = (976 - 976);
    memset (a, (704 - 704), sizeof (a));
    cin.getline (a, (10924 - 924));
    memset (b, (953 - 953), sizeof (b));
    memset (begin, (209 - 209), sizeof (begin));
    {
        GOgF3h = 984 - 984;
        while (GOgF3h <= (10852 - 852)) {
            if ((a[GOgF3h] != ',') && (a[GOgF3h] != '\0'))
                bvelO4G = bvelO4G + 1;
            if ((!(',' != a[GOgF3h])) || (!('\0' != a[GOgF3h]))) {
                if (bvelO4G == (97 - 94))
                    begin[rutAUWp702i6++] = a[GOgF3h -(587 - 586)] - '0' + (227 - 217) * (a[GOgF3h -(293 - 291)] - '0') + (283 - 183) * (a[GOgF3h -(922 - 919)] - '0');
                if (bvelO4G == (837 - 835))
                    begin[rutAUWp702i6++] = a[GOgF3h -(331 - 330)] - '0' + (571 - 561) * (a[GOgF3h -(26 - 24)] - '0');
                if (bvelO4G == (933 - 932))
                    begin[rutAUWp702i6++] = a[GOgF3h -(374 - 373)] - '0';
                bvelO4G = (495 - 495);
            }
            if (a[GOgF3h] == '\0')
                break;
            GOgF3h = GOgF3h +1;
        };
    }
    memset (jVRjQ2J, (18 - 18), sizeof (jVRjQ2J));
    cin.getline (b, (10502 - 502));
    for (GOgF3h = (329 - 329); 10000 >= GOgF3h; GOgF3h = GOgF3h +1) {
        if ((!(',' == b[GOgF3h])) && (b[GOgF3h] != '\0'))
            bvelO4G = bvelO4G + 1;
        if ((b[GOgF3h] == ',') || (b[GOgF3h] == '\0')) {
            if (bvelO4G == (649 - 646))
                jVRjQ2J[blz6ak9iGZ7P++] = b[GOgF3h -(30 - 29)] - '0' + (699 - 689) * (b[GOgF3h -(433 - 431)] - '0') + 100 * (b[GOgF3h -(612 - 609)] - '0');
            if (bvelO4G == (835 - 833))
                jVRjQ2J[blz6ak9iGZ7P++] = b[GOgF3h -(863 - 862)] - '0' + 10 * (b[GOgF3h -(694 - 692)] - '0');
            if (bvelO4G == (358 - 357))
                jVRjQ2J[blz6ak9iGZ7P++] = b[GOgF3h -(658 - 657)] - '0';
            bvelO4G = (47 - 47);
        }
        if (b[GOgF3h] == '\0')
            break;
    }
    {
        GOgF3h = 390 - 390;
        while (GOgF3h <= rutAUWp702i6 - 1) {
            if (jVRjQ2J[GOgF3h] > OZrteEjxID8F)
                OZrteEjxID8F = jVRjQ2J[GOgF3h];
            GOgF3h = GOgF3h +1;
        };
    }
    {
        ev80qPHBEf = 725.5 - 725.0;
        while (ev80qPHBEf <= OZrteEjxID8F -(947.5 - 947.0)) {
            Wz4qn6SZa = (900 - 900);
            {
                GOgF3h = 83 - 83;
                while (GOgF3h <= rutAUWp702i6 - 1) {
                    if ((begin[GOgF3h] < ev80qPHBEf) && (jVRjQ2J[GOgF3h] > ev80qPHBEf))
                        Wz4qn6SZa = Wz4qn6SZa +1;
                    GOgF3h = GOgF3h +1;
                };
            }
            ev80qPHBEf = ev80qPHBEf + 1;
            if (Wz4qn6SZa > max)
                max = Wz4qn6SZa;
        };
    }
    cout << rutAUWp702i6 << " " << max;
    cin >> GOgF3h;
    return 0;
}

