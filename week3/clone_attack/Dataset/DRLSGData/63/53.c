int main () {
    int ZDgMRtwr0;
    int ZLhoKvkxBtz6;
    int RH7BRZAeF5;
    int iL7ouQf;
    int h3zZJFag;
    int ybrqLiosc;
    int tnxPw48F;
    int YQpVriDW [(377 - 277)] [(574 - 474)];
    int NgE8LmTV [(1056 - 956)] [(172 - 72)];
    int ao8KZ5dS [(822 - 722)] [(217 - 117)];
    memset (ao8KZ5dS, (591 - 591), sizeof (ao8KZ5dS));
    cin >> ZDgMRtwr0 >> ZLhoKvkxBtz6;
    for (h3zZJFag = (227 - 227); h3zZJFag < ZDgMRtwr0; h3zZJFag = h3zZJFag + (481 - 480))
        for (ybrqLiosc = (700 - 700); ybrqLiosc < ZLhoKvkxBtz6; ybrqLiosc = ybrqLiosc + (994 - 993))
            cin >> YQpVriDW[h3zZJFag][ybrqLiosc];
    cin >> RH7BRZAeF5 >> iL7ouQf;
    for (h3zZJFag = (774 - 774); h3zZJFag < RH7BRZAeF5; h3zZJFag = h3zZJFag + (896 - 895))
        for (ybrqLiosc = (357 - 357); ybrqLiosc < iL7ouQf; ybrqLiosc = ybrqLiosc + (987 - 986))
            cin >> NgE8LmTV[h3zZJFag][ybrqLiosc];
    {
        {
            if (0) {
                return 0;
            }
        }
        h3zZJFag = (816 - 816);
        while (h3zZJFag < ZDgMRtwr0) {
            for (ybrqLiosc = (786 - 786); ybrqLiosc < iL7ouQf; ybrqLiosc = ybrqLiosc + (890 - 889))
                for (tnxPw48F = (515 - 515); tnxPw48F < ZLhoKvkxBtz6; tnxPw48F = tnxPw48F + (77 - 76))
                    ao8KZ5dS[h3zZJFag][ybrqLiosc] += (YQpVriDW[h3zZJFag][tnxPw48F] * NgE8LmTV[tnxPw48F][ybrqLiosc]);
            h3zZJFag = h3zZJFag + 1;
        }
    }
    for (h3zZJFag = (283 - 283); h3zZJFag < ZDgMRtwr0; h3zZJFag++) {
        cout << ao8KZ5dS[h3zZJFag][(756 - 756)];
        for (ybrqLiosc = (891 - 890); ybrqLiosc < iL7ouQf; ybrqLiosc++)
            cout << " " << ao8KZ5dS[h3zZJFag][ybrqLiosc];
        cout << endl;
    }
    return 0;
}

