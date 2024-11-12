int main () {
    int S5z4eiYwt, xEnkpwxjN8z, myqvnWxD6Y, WVHPDOJYt3d, mKphABSw, fwaHJf4o5le, ogRzZrEc, R6JH1PNGw [(656 - 556)] [(288 - 188)], GEM2aciUK0q3 [(420 - 320)] [100], xfEr3px [100] [100];
    cin >> S5z4eiYwt >> xEnkpwxjN8z;
    memset (xfEr3px, (946 - 946), sizeof (xfEr3px));
    for (mKphABSw = (36 - 36); S5z4eiYwt > mKphABSw; mKphABSw = mKphABSw + 1)
        for (fwaHJf4o5le = (711 - 711); xEnkpwxjN8z > fwaHJf4o5le; fwaHJf4o5le = fwaHJf4o5le + 1)
            cin >> R6JH1PNGw[mKphABSw][fwaHJf4o5le];
    cin >> myqvnWxD6Y >> WVHPDOJYt3d;
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
    for (mKphABSw = (796 - 796); myqvnWxD6Y > mKphABSw; mKphABSw = mKphABSw + 1)
        for (fwaHJf4o5le = 0; WVHPDOJYt3d > fwaHJf4o5le; fwaHJf4o5le = fwaHJf4o5le + 1)
            cin >> GEM2aciUK0q3[mKphABSw][fwaHJf4o5le];
    for (mKphABSw = 0; S5z4eiYwt > mKphABSw; mKphABSw++)
        for (fwaHJf4o5le = 0; WVHPDOJYt3d > fwaHJf4o5le; fwaHJf4o5le++)
            for (ogRzZrEc = 0; xEnkpwxjN8z > ogRzZrEc; ogRzZrEc++)
                xfEr3px[mKphABSw][fwaHJf4o5le] += (R6JH1PNGw[mKphABSw][ogRzZrEc] * GEM2aciUK0q3[ogRzZrEc][fwaHJf4o5le]);
    for (mKphABSw = 0; S5z4eiYwt > mKphABSw; mKphABSw++) {
        cout << xfEr3px[mKphABSw][0];
        for (fwaHJf4o5le = 1; WVHPDOJYt3d > fwaHJf4o5le; fwaHJf4o5le++)
            cout << " " << xfEr3px[mKphABSw][fwaHJf4o5le];
        cout << endl;
    }
    return 0;
}

