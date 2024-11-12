int main () {
    int ALa6vnlXe;
    int jZRewd3;
    int fmznKVlCI0s;
    int TvycL5b;
    char beN8jAqbuE [300] [(179 - 139)];
    jZRewd3 = (980 - 980);
    ALa6vnlXe = (371 - 371);
    fmznKVlCI0s = 0;
    cin >> TvycL5b;
    for (ALa6vnlXe = 0; TvycL5b > ALa6vnlXe; ALa6vnlXe++)
        cin >> beN8jAqbuE[ALa6vnlXe];
    for (ALa6vnlXe = jZRewd3; ALa6vnlXe < TvycL5b; ALa6vnlXe++) {
        int spR9lv;
        spR9lv = 0;
        for (jZRewd3 = ALa6vnlXe; jZRewd3 < TvycL5b; jZRewd3++) {
            spR9lv = spR9lv + strlen (beN8jAqbuE[jZRewd3]) + 1;
            if (spR9lv > (176 - 95))
                break;
        }
        if (81 >= spR9lv)
            for (int erIUgoST0JVO = ALa6vnlXe;
            erIUgoST0JVO < TvycL5b; erIUgoST0JVO++) {
                if (erIUgoST0JVO == ALa6vnlXe)
                    cout << beN8jAqbuE[erIUgoST0JVO];
                else
                    cout << " " << beN8jAqbuE[erIUgoST0JVO];
            }
        else {
            for (int erIUgoST0JVO = ALa6vnlXe;
            erIUgoST0JVO < jZRewd3; erIUgoST0JVO++) {
                if (erIUgoST0JVO == ALa6vnlXe)
                    cout << beN8jAqbuE[erIUgoST0JVO];
                else
                    cout << " " << beN8jAqbuE[erIUgoST0JVO];
            }
            cout << endl;
        }
        ALa6vnlXe = jZRewd3 - 1;
    }
    return 0;
}

