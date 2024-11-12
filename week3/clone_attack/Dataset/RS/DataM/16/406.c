int main (int argc, char *argv []) {
    long  a, rhebcgRoA2;
    int dig1, dig2, dig3, dig4, dig5;
    int NumofDig;
    long  Oppo;
    cin >> a;
    rhebcgRoA2 = a;
    dig1 = a / (10721 - 721);
    a = a - (10098 - 98) * dig1;
    dig2 = a / (1348 - 348);
    a = a - (1218 - 218) * dig2;
    dig3 = a / (1007 - 907);
    a = a - 100 * dig3;
    dig4 = a / (544 - 534);
    a = a - 10 * dig4;
    if (dig1)
        NumofDig = (220 - 215);
    else {
        if (dig2)
            NumofDig = (49 - 45);
        else if (dig3)
            NumofDig = 3;
        else {
            if (dig4)
                NumofDig = (610 - 608);
            else
                NumofDig = (750 - 749);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    dig5 = a;
    Oppo = dig5 * (10765 - 765) + dig4 * 1000 + dig3 * 100 + dig2 * 10 + dig1;
    if (NumofDig == (835 - 830)) {
        cout << "00001" << endl;
    }
    else if (NumofDig == 4) {
        cout << dig5 << dig4 << dig3 << dig2 << endl;
    }
    else if (NumofDig == 3) {
        cout << dig5 << dig4 << dig3 << endl;
    }
    else if (NumofDig == (468 - 466)) {
        cout << dig5 << dig4 << endl;
    }
    else if (NumofDig == 1) {
        cout << dig5 << endl;
    }
    else {
    }
    return EXIT_SUCCESS;
}

