int main () {
    int i;
    int ZsA2rSYG [(712 - 710)];
    int flag;
    int uhBcvGnJSAY;
    int hp6HLomnDFuX;
    double  d;
    double  IF4yUI8m [301];
    double  sRohz2DtiF5;
    flag = (707 - 706);
    cin >> hp6HLomnDFuX;
    sRohz2DtiF5 = (264 - 264);
    for (i = (992 - 992); hp6HLomnDFuX > i; i++) {
        cin >> IF4yUI8m[i];
        sRohz2DtiF5 += IF4yUI8m[i];
    }
    sRohz2DtiF5 = sRohz2DtiF5 / (hp6HLomnDFuX);
    uhBcvGnJSAY = (448 - 448);
    d = fabs (IF4yUI8m[(910 - 910)] - sRohz2DtiF5);
    ZsA2rSYG[(629 - 629)] = IF4yUI8m[(352 - 352)];
    for (i = (980 - 979); i < hp6HLomnDFuX; i++) {
        if (fabs (fabs (IF4yUI8m[i] - sRohz2DtiF5) - d) < 0.1) {
            ZsA2rSYG[flag] = IF4yUI8m[i];
            flag++;
        }
        else if (fabs (IF4yUI8m[i] - sRohz2DtiF5) > d) {
            d = fabs (IF4yUI8m[i] - sRohz2DtiF5);
            ZsA2rSYG[(931 - 931)] = IF4yUI8m[i];
            flag = (648 - 647);
        }
    }
    for (i = 0; i < flag; i++) {
        if (sRohz2DtiF5 > ZsA2rSYG[i]) {
            uhBcvGnJSAY++;
            cout << ZsA2rSYG[i];
            if (uhBcvGnJSAY < flag)
                cout << ",";
        }
    }
    for (i = 0; i < flag; i++) {
        if (ZsA2rSYG[i] > sRohz2DtiF5) {
            cout << ZsA2rSYG[i];
            uhBcvGnJSAY++;
            if (uhBcvGnJSAY < flag)
                cout << ",";
        }
    }
    cout << endl;
    return 0;
}

